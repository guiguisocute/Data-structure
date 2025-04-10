/*
假设树采用指针方式的孩子表示法表示，试编写一个非递归函数void PreOrder1(tree root)，实现树的前序遍历算法。
*/ 
#include "tree.h"
void  PreOrder1(tree root)
{
        // 非递归那就是自己操作栈了
        //具体思路就是创建一个树栈先把根节点给入进去，然后只要栈非空就取栈访问数据并访问打印出来再看孩子的指针域，把孩子们**从右往左**（这样才能保证出栈的时候从左往右）放进栈最后循环这个操作就行了
        if(!root){
                return;
        }

        tree stack[MAXLEN];
        int top = -1;

        stack[++top] = root;    //最开始的根节点入栈
        
        while(top >= 0){
                tree temp = stack[top--];
                printf("%c",temp->data);
                for(int i = m - 1; i>=0; i--){
                        if(temp->child[i]){
                                stack[++top] = temp->child[i];
                        }
                }
        }

}
int main ()
{
        tree root;
        printf("please input the preorder sequence of the tree:\n");
        root =createtree();
        printf("前序序列是：\n");
        PreOrder1(root);
        return 0;
}
