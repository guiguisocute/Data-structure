/*
编写算法函数linklist delallx(linklist head, int x)，删除不带头结点单链表head中所有值为x的结点。
*/
/**********************************/
/*文件名称：lab2_04.c                 */
/**********************************/
#include "slnklist.h"
/*请将本函数补充完整，并进行测试*/
linklist delallx(linklist head,int x)
{ 
    linklist p = head;
    linklist pre = NULL;  // 前驱指针

    while (p != NULL) {   
        if (p->info == x) {   
            if (pre == NULL) {  // 情况1：删除头结点
                head = p->next; 
                free(p);        
                p = head;       
            } else {            // 情况2：删除中间或末尾结点
                pre->next = p->next; 
                free(p);         
                p = pre->next;  // p指向下一个待检查的结点
            }
        } else {               // 未找到x，继续后移
            pre = p;           // pre跟上p
            p = p->next;       // p后移
        }
    }
    return head; 

}
int main()
{   datatype x;
    linklist head;
    head=creatbyqueue();				/*尾插入法建立单链表*/
    print(head);
    printf("请输入要删除的值：");
    scanf("%d",&x);
    head=delallx(head,x);
    print(head);
    delList(head);
    return 0;
}
