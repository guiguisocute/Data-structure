/*
6．字符串采用带头结点的链表存储，编写函数 linkstring index(linkstring s, linkstring t)，查找子
串 t 在主串 s 中第一次出现的位置，若匹配不成功，则返回 NULL。（实验代码详见 lab4_06.c）
*/

#include "linkstring.h"
/*请将本函数补充完整，并进行测试*/
linkstring index(linkstring  s, linkstring t)
{

}
int main()
{   linkstring s,t,p=NULL;
    s=creat();                  /*建立主串链表*/
    t=creat();			        /*建立子串链表*/
    print(s);
    print(t);
    p=index(s,t);
    if(p)
            printf("匹配成功，首次匹配成功的位置结点值为%c\n",p->data);
    else
            printf("匹配不成功！\n");
    delList(s);
    delList(t);
    return 0;
}
