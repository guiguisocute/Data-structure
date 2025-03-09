/*设计一个算法，在一棵二叉排序树中求出指定结点的层次，若树为空，返回-1，若结点不在树中，返回0。
*/
#include "bstree.h"

/*
    函数level(t,k)的功能是在一棵二叉排序树中求出指定结点的层次，若树为空，返回-1，若结点不在树中，返回0，请将函数补充完整。
*/
int level(bstree t,int k)
{



}

int  main()
  {
    int k,lev;
    bstree t;
    t=creatBstree();         /*创建二叉排序树*/
    printf("请输入拟查找的值：");
    scanf("%d",&k);
    lev=level(t,k);
    if (lev>0) printf("%d在树中的第%d层.\n",k,lev);
    else if (lev==0) printf("未找到该结点.\n");
    else printf("该二叉排序树为空树.\n");
    return 0;
 }
