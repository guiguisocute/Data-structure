/*
��֪��ͷ���ĵ�����ṹ����ͬʵ��3���������������н��ֵ������ͬ��
���дһ���ݹ麯��linklist max(linklist head)�����ر�����������ڵĽ���ַ��������Ϊ�գ�����NULL��
*/
 

#include "slnklist.h"
/*�뽫���������������������в���*/
linklist max(linklist head)
{

}
int main()
{   linklist head,p;
    head=creatbyqueue();
    print(head);
    p=max(head);
    if (p)
        printf("max=%d\n",p->info);
    else
        printf("����Ϊ��\n");
    return 0;
}
