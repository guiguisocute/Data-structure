/*
��֪���Ա�洢�ڴ�ͷ���ĵ�����head�У�������㷨����void sort(linklist head)����head�еĽ�㰴���ֵ�������С�
*/
/**********************************/
/*�ļ����ƣ�lab3_05.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void  sort(linklist head)
{
        linklist p,s,pre,q;
        p=head->next;
        head->next=NULL;
        while (p)
        {
            s=p;
            p=p->next;
            s->next=NULL;
            //���Ҳ���λ��
            pre=head;
            q=head->next;
            while (q &&q->info > s->info)
            {
                pre=q;
                q=q->next;
            }
            s->next=q;          //����preָʾ�Ľڵ��
            pre->next=s;
        }
}
int main()
{        linklist head;
         head=creatbyqueue();   		/*β�巨������ͷ���ĵ�����*/
         print(head);    			    /*���������head*/
         sort(head);     				/*����*/
         print(head);
         delList(head);
         return 0;
}
