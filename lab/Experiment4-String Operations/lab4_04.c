/*
已知字符串采用带结点的链式存储结构（详见linksrting.h文件），
请编写函数linkstring substring(linkstring s,int i,int len)，
在字符串s中从第i个位置起取长度为len的子串，函数返回子串链表。
*/ 

#include "linkstring.h"
/*请将本函数补充完整，并进行测试*/
linkstring substring(linkstring  s, int i, int len)
{

}
int main()
{   linkstring str1,str2;
    str1=creat();                  /*建字符串链表*/
    print(str1);
    str2=substring(str1,3,5);    /*测试，从第3个位置开始取长度为5的子串,请自行构造不同测试用例*/
    print(str2);                   /*输出子串*/
    delList(str1);
    delList(str2);
    return 0;
}
