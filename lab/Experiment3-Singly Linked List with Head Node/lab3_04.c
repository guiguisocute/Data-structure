/*
��д�㷨����void  delallx(linklist head, int x)��ɾ����ͷ��㵥����head������ֵΪx�Ľ�㡣
*/
/**********************************/
/*�ļ����ƣ�lab3_04.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void  delallx(linklist head,int x)
{
        linklist  pre,p;
        pre=head;
        p=head->next;
        while (p)
        {
            if (p->info==x)             //ɾ��
            {
                pre->next=p->next;
                free(p);
                p=pre->next ;
            }
            else            //����������
            {
                pre=p;
                p=p->next;
            }
        }

}
int main()
{   datatype x;
    linklist head;
    head=creatbyqueue();				/*β���뷨������ͷ���ĵ�����*/
    print(head);
    printf("������Ҫɾ����ֵ��");
    scanf("%d",&x);
    delallx(head,x);
    print(head);
    delList(head);
    return 0;
}
