/*
��֪��ͷ���ĵ�����ṹ����ͬʵ��3�����һ���ݹ��㷨��ɾ������head������ֵΪx�Ľ�㡣
*/
#include "slnklist.h"
/*�뽫���������������������в���*/
void delAll(linklist head,datatype x)
{ 
    linklist p;
    if (            )           //����Ϊ�ձ�
            return ;
    if (head->next->info==x)    //����ĵ�1�����ֵΪx
    {

    }
    else
                                //�ݹ����
}
int main()
{   linklist head;
    datatype x;
    head=creatbyqueue();
    print(head);
    printf("������Ҫɾ��������");
    scanf("%d",&x);
    delAll(head,x);
    print(head);
    return 0;
}
