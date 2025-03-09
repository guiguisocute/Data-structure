/*
假设二叉树采用二叉链表存储结构，设计一个算法，求二叉树t中距*p最近的叶子结点。
*/

#include "bintree.h"
char *a="ABC##D#E##F##";  			/*扩充二叉树序树t的前序序列*/
/*
    函数名称：findClosest(t,p)
    函数功能：从二叉树t中，查找距离*p最近的叶子结点
*/
bintree  findClosest(bintree t,bintree p)//请将本函数补充完整
{

}

/*
    函数名称：search(t,c)
    函数功能：用于在树t中查找值为c的结点所在的位置
*/
bintree search(bintree t,char c)
{
    bintree p;
    if (t==NULL) return NULL;
    else if (t->data==c) return t;
    else {
            p=search(t->lchild,c);
            if (p) return p;
            else return search(t->rchild,c);
         }
}

int main()
{
    bintree t,p,q;
    char c;
    t=creatbintree();   	/*建立二叉树t的存储结构*/
    printf("二叉树的前序序列为：\n");
    preorder(t);
    printf("\n请输入一个结点值:");
    scanf("%c",&c);
    p=search(t,c);
    if (p)
        q=findClosest(t,p);
    if (q) printf("距离%c最近的叶子结点为%c。\n",c,q->data);
    return 0;
}
