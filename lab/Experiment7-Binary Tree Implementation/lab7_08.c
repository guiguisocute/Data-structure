/*
假设二叉树采用二叉链表存储结构，设计一个算法，求非空二叉树t的宽度（即具有结点数最多的那一层的结点个数）。
*/

#include "bintree.h"
char *a="ABD##EH##I##CF##G##";  			/*扩充二叉树序树t的前序序列*/

typedef struct{
    bintree qu[N];        //保存队列中的结点
    int level[N];           //保存queue中对应位置处结点的层次
    int f,r;                      //队列首尾指示
}seqQueue;

/*
    函数bintreeWidth(t)用于计算二叉树t的宽度，请将本函数补充完整
*/
int bintreeWidth(bintree t)
{


}
int main()
{
    bintree t;
    int width;
    t=creatbintree();   	/*建立二叉树t的存储结构*/

    width=bintreeWidth(t);
    printf("树的宽度为：%d\n",width);

    return 0;
}
