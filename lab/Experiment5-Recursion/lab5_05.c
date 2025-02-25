/*
已知带头结点的单链表结构定义同实验3，设计一个递归算法，删除链表head中所有值为x的结点。
*/
#include "slnklist.h"
/*请将本函数补充完整，并进行测试*/
void delAll(linklist head,datatype x)
{ 
    linklist p;
    if (            )           //链表为空表
            return ;
    if (head->next->info==x)    //链表的第1个结点值为x
    {

    }
    else
                                //递归调用
}
int main()
{   linklist head;
    datatype x;
    head=creatbyqueue();
    print(head);
    printf("请输入要删除的数：");
    scanf("%d",&x);
    delAll(head,x);
    print(head);
    return 0;
}
