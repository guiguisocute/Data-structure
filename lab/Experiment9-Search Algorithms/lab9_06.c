/*设计一个递归算法，从大到小输出二叉排序树中所有关键字不小于k的结点值。
*/
#include "bstree.h"

/*
    函数outPut(t,k)的功能是从大到小输出二叉排序树中所有关键字不小于k的结点值，请将本函数补充完整。
*/
void outPut(bstree t,int k)
{

}

int  main()
  {
    int k;
    bstree t;
    printf("本程序从大到小输出二叉排序树中所有关键字不小于k的结点值。\n");
    t=creatBstree();         /*创建二叉排序树*/
    printf("请输入k的值：");
    scanf("%d",&k);
    printf("输出结果：\n");
    outPut(t,k);
    return 0;
 }
