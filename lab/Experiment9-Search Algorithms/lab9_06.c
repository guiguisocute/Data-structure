/*���һ���ݹ��㷨���Ӵ�С������������������йؼ��ֲ�С��k�Ľ��ֵ��
*/
#include "bstree.h"

/*
    ����outPut(t,k)�Ĺ����ǴӴ�С������������������йؼ��ֲ�С��k�Ľ��ֵ���뽫����������������
*/
void outPut(bstree t,int k)
{

}

int  main()
  {
    int k;
    bstree t;
    printf("������Ӵ�С������������������йؼ��ֲ�С��k�Ľ��ֵ��\n");
    t=creatBstree();         /*��������������*/
    printf("������k��ֵ��");
    scanf("%d",&k);
    printf("��������\n");
    outPut(t,k);
    return 0;
 }
