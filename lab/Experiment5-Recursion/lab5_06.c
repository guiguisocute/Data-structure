/*
设计一个递归算法，使得它对任一给定的带头结点的整数单链表head，删除重复结点（对于多个值相同的结点，保留最后一个结点）.
*/
#include "slnklist.h"


/*函数inList(linklist head,datatype x)的功能是判断带头结点的单链表head中是否含有值为x的结点，有则返回1，无则返回0*/
int inList(linklist head,datatype x)
{

}
/*函数delSameNode的功能是采用递归算法删除head中的重复结点（对于多个值相同的结点，保留最后一个结点。*/
void delSameNode(linklist head)
{
    linklist p;
    if (          )         //链表为空或只有一个结点
            return ;
    if (          )         //第1个结点属于重复结点
     {

     }
     else
            //递归调用
}
int main()
{
    linklist head;
    head=creatbyqueue();
    print(head);
    delSameNode(head);
    print(head);
    delList(head);
    return 0;
}
