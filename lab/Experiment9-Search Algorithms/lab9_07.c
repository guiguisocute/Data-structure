/*���һ���㷨����һ�ö��������������ָ�����Ĳ�Σ�����Ϊ�գ�����-1������㲻�����У�����0��
*/
#include "bstree.h"

/*
    ����level(t,k)�Ĺ�������һ�ö��������������ָ�����Ĳ�Σ�����Ϊ�գ�����-1������㲻�����У�����0���뽫��������������
*/
int level(bstree t,int k)
{



}

int  main()
  {
    int k,lev;
    bstree t;
    t=creatBstree();         /*��������������*/
    printf("����������ҵ�ֵ��");
    scanf("%d",&k);
    lev=level(t,k);
    if (lev>0) printf("%d�����еĵ�%d��.\n",k,lev);
    else if (lev==0) printf("δ�ҵ��ý��.\n");
    else printf("�ö���������Ϊ����.\n");
    return 0;
 }
