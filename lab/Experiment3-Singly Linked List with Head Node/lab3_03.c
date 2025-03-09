/*
假设带头结点的单链表head是升序排列的，设计算法函数linklist insert(linklist head,datatype x)，
将值为x的结点插入到链表head中，并保持链表有序性。
分别构造插入到表头、表中和表尾三种情况的测试用例进行测试。
*/
/**********************************/
/*文件名称：lab3_03.c                 */
/**********************************/
#include "slnklist.h"
/*请将本函数补充完整，并进行测试*/
void  insert(linklist head ,datatype x)
{
      linklist  pre,p,q;
      pre=head;
      p=head->next;
      while (p && p->info<x)        //查找插入位置
      {
          pre=p;
          p=p->next;
      }
      q=(linklist)malloc(sizeof(node));
      q->info=x;        //插入节点
      q->next=p;
      pre->next=q;
}
int main()
{
    datatype x;
    linklist head;
    printf("输入一组升序排列的整数：\n");
    head=creatbyqueue();				/*尾插入法建立带头结点的单链表*/
    print(head);
    printf("请输入要插入的值：");
    scanf("%d",&x);
    insert(head,x);				    /*将输入的值插入到带头结点的单链表适当位置*/
    print(head);
    delList(head);
    return 0;
}
