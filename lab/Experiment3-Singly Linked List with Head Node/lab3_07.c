/*
���дһ���㷨����void partion(linklist head)��
����ͷ���ĵ�����head�е�����ֵΪ�����Ľ�����
�������ǰ�棬����ֵΪż���Ľ�����������ĺ��档
*/

/**********************************/
/*�ļ����ƣ�lab3_07.c             */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
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
         head=creatbyqueue();           /*β�巨������ͷ���ĵ�����*/
         print(head);                   /*���������head*/
         partion(head);
         print(head);
         delList(head);
         return 0;
}
