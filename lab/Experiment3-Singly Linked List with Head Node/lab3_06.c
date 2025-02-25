/*
��֪������ͷ���ĵ�����L1��L2�еĽ��ֵ���Ѱ�������������㷨����
linklist mergeAscend (linklist L1,linklist L2)��L1��L2�ϲ���һ�������
��ͷ�ᵥ������Ϊ�����ķ��ؽ����
����㷨����linklist mergeDescend (linklist L1,linklist L2)
��L1��L2�ϲ���һ������Ĵ�ͷ�ᵥ������Ϊ�����ķ��ؽ����
�����main()�������в��ԡ�
*/
/**********************************/
/*�ļ����ƣ�lab3_06.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist mergeAscend(linklist L1,linklist L2)
{
    linklist p,q,r;
    linklist head;
    head=(linklist)malloc(sizeof(node));
    head->next=NULL;
    r=head;
    p=L1->next;
    q=L2->next;
    while (p && q)
    {
            if (p->info< q->info)
            {
                L1->next=p->next;
                p->next=NULL;
                r->next=p;
                r=p;
                p=L1->next;
            }
            else
            {
                L2->next=q->next;
                q->next=NULL;
                r->next=q;
                r=q;
                q=L2->next;
            }
    }
    if (p) r->next=p;
    if (q) r->next=q;
    free(L1);
    free(L2);
    return head;
}
linklist mergeDescend(linklist L1,linklist L2)
{
    linklist p,q,r;
    linklist head;
    head=(linklist)malloc(sizeof(node));
    head->next=NULL;
    p=L1->next;
    q=L2->next;
    while (p && q)
    {
            if (p->info< q->info)
            {
                L1->next=p->next;
                p->next=head->next;   //ͷ����
                head->next=p;
                p=L1->next;
            }
            else
            {
                L2->next=q->next;
                q->next=head->next;
                head->next=q;
                q=L2->next;
            }
    }
    while  (p)
    {
                L1->next=p->next;
                p->next=head->next;   //ͷ����
                head->next=p;
                p=L1->next;
    }
    while (q)
    {
                L2->next=q->next;
                q->next=head->next;
                head->next=q;
                q=L2->next;
    }
    free(L1);
    free(L2);
    return head;
}
int main()
{       linklist h1,h2,h3;
         h1=creatbyqueue();     /*β�巨����������,��������������*/
         h2=creatbyqueue();
         print(h1);
         print(h2);
         //h3=mergeAscend(h1,h2);/*����ϲ���h3*/
         h3=mergeDescend(h1,h2);
            /*����ϲ������h3=mergeDescend(h1,h2); */
         print(h3);
         delList(h3);
         return 0;
}
