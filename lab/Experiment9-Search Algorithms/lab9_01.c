/*  利用readData()函数从data1.txt中读入不同规模的数据存入数组，
编写基于数组的顺序查找算法，测试数据量为1万、5万、10万、20万、
30万、40万和50万时的数据查询时间。
*/

#include "ArrayIo.h"
#define N 10000          /*数据量*/
/*请将本函数补充完整，并进行测试*/
int seqsearch(int a[],int n,int key)
{


}

int main()
{
    int a[N],n,x,pos;
    n=readData(a,N,"data1.txt"); /*从data1.txt文件中读入前N个数存入a中，函数返回成功读入的数据个数*/
    printf("请输入要查找的整数：");
    scanf("%d",&x);
    pos=seqsearch(a,n,x);
    if (pos==-1)
        printf("查找失败");
    else
        printf("a[%d]=%d\n",pos,x);
}
