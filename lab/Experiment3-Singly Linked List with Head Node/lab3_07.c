/*
请编写一个算法函数void partion(linklist head)，
将带头结点的单链表head中的所有值为奇数的结点调整
到链表的前面，所有值为偶数的结点调整到链表的后面。
*/

/**********************************/
/*文件名称：lab3_07.c             */
/**********************************/
#include "slnklist.h"
/*请将本函数补充完整，并进行测试*/
void partion(linklist head)
{
        linklist  pre,p;
        pre=head;
        p=head->next;
        while (p && p->info %2==1)
        {
            pre=p;
            p=p->next;
        }
        while (p)
        {
            if (p->info%2==1)
            {
                pre->next=p->next;
                p->next=head->next;
                head->next=p;
                p=pre->next;
            }
            else
            {
                pre=p;
                p=p->next;
            }
        }
}
int main()
{        linklist head;
         head=creatbyqueue();           /*尾插法建立带头结点的单链表*/
         print(head);                   /*输出单链表head*/
         partion(head);
         print(head);
         delList(head);
         return 0;
}
