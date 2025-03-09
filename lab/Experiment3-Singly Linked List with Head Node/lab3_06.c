/*
已知两个带头结点的单链表L1和L2中的结点值均已按升序排序，设计算法函数
linklist mergeAscend (linklist L1,linklist L2)将L1和L2合并成一个升序的
带头结单链表作为函数的返回结果；
设计算法函数linklist mergeDescend (linklist L1,linklist L2)
将L1和L2合并成一个降序的带头结单链表作为函数的返回结果；
并设计main()函数进行测试。
*/
/**********************************/
/*文件名称：lab3_06.c                 */
/**********************************/
#include "slnklist.h"
/*请将本函数补充完整，并进行测试*/
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
                p->next=head->next;   //头插入
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
                p->next=head->next;   //头插入
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
         h1=creatbyqueue();     /*尾插法建立单链表,请输入升序序列*/
         h2=creatbyqueue();
         print(h1);
         print(h2);
         //h3=mergeAscend(h1,h2);/*升序合并到h3*/
         h3=mergeDescend(h1,h2);
            /*降序合并请调用h3=mergeDescend(h1,h2); */
         print(h3);
         delList(h3);
         return 0;
}
