/*
�������������t�����еĹؼ��������������ɵģ�Ϊ�˲���ĳ�ؼ���k����õ�һ���������С�
���һ���㷨���ж�һ�����У����������a�У��Ƿ��Ǵ�t�������ؼ���k�����С�
*/
#include "bstree.h"
#define N 100
/*
	����find(t,k,a,n)���������ж�����a�е������Ƿ��Ǵ�t�������ؼ���k�����С��뽫��������������
*/
int find(bstree t,int k,int a[],int n)
{

}

int  main()
  {
    int k,a[N],n,i;
    bstree t;
    t=creatBstree();         /*��������������*/
    printf("������k��ֵ��");
    scanf("%d",&k);
    printf("����������a��Ԫ�ظ�����\n");
    scanf("%d",&n);
    printf("������%d������Ԫ�ص�ֵ��\n",n);
    for (i=0;i<n;i++)
        scanf("%d",a+i);

    if (find(t,k,a,n)==1)
        printf("\n����aΪ����%d���������У�\n",k);
    else
        printf("\n����a���ǲ���%d���������У�\n",k);
    return 0;
 }
