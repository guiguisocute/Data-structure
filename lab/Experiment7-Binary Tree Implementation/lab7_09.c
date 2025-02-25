/*
假设二叉树采用二叉链表存储结构，设计一个算法，
求非空二叉树中指定的某一层lev（lev>=1）的叶子结点个数。
*/

#include "bintree.h"
char *a="ABD##EH##I##CF##G##";  			/*扩充二叉树序树t的前序序列*/
typedef struct{
    bintree qu[N];      //保存队列中的结点
    int level[N];       //保存queue中对应位置处结点的层次
    int f,r;            //队列首尾指示
}seqQueue;

/*
    函数totalLeaf(t,lev)用于统计二叉树t中第lev层的叶子结点个数，请将本函数补充完整
*/
int totalLeaf(bintree t,int lev)
{

}
int main()
{
    bintree t;
    int lev,counter;
    t=creatbintree();   	/*建立二叉树t的存储结构*/
    printf("二叉树的前序序列为：\n");
    preorder(t);
    printf("\n请输入层号：");
    scanf("%d",&lev);
    counter=totalLeaf(t,lev);
    printf("%d层上共有%d个叶子结点。\n",lev,counter);
    return 0;
}
