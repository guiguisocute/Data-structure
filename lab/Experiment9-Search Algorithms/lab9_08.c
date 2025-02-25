/*
假设二叉排序树t中所有的关键字是由整数构成的，为了查找某关键字k，会得到一个查找序列。
设计一个算法，判断一个序列（存放在数组a中）是否是从t中搜索关键字k的序列。
*/
#include "bstree.h"
#define N 100
/*
	函数find(t,k,a,n)的作用是判断数组a中的序列是否是从t中搜索关键字k的序列。请将函数补充完整。
*/
int find(bstree t,int k,int a[],int n)
{

}

int  main()
  {
    int k,a[N],n,i;
    bstree t;
    t=creatBstree();         /*创建二叉排序树*/
    printf("请输入k的值：");
    scanf("%d",&k);
    printf("请输入数组a的元素个数：\n");
    scanf("%d",&n);
    printf("请输入%d个数组元素的值：\n",n);
    for (i=0;i<n;i++)
        scanf("%d",a+i);

    if (find(t,k,a,n)==1)
        printf("\n数组a为查找%d的搜索序列！\n",k);
    else
        printf("\n数组a不是查找%d的搜索序列！\n",k);
    return 0;
 }
