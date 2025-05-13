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
/*其实这道题我还是挺不理解的，这道题到底是要我找这颗子树的最近叶节点，还是包括向“上”检索的包括兄弟树叶节点？
姑且先当做后者来解吧，毕竟后者算是前者的一个子集
首先要知道父节点，也要知道父节点的父节点，但是本身头文件里的树是不包括父节点信息的，所以一开始肯定要再遍历一遍树建立这个父关系，但这个代码里面再说，先假设确实能找到：
本质层次遍历，用到队列
···c
初始化根入队
while(队非空){
    判队首为叶否？
        是的话return
    队首父入队 tag = 1
    队首左孩，右孩入队，tag = 1
}
    return null?


*/

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
