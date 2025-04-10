/*
   假设树采用指针方式的孩子表示法表示，试编写一个非递归函数void PostOrder1(tree t)，实现树的后序遍历算法。
*/

#include "tree.h"
int PostOrder1(tree root)
//虽然这个仅仅只改了一个顺序，思想复杂程度却要高挺多等级的，因为实验头文件里的树只是简单的孩子表示法没法看到双亲的，最好再开一个栈用于存储最终的访问顺序

{
    if (!root){
        return;
    }
        

    tree s1[MAXLEN], s2[MAXLEN]; // 创建两个栈
    int top1 = -1, top2 = -1;    

    // 根节点入栈s1
    s1[++top1] = root;

    // 当第一个栈不为空时
    while (top1 >= 0)
    {
        // 从s1出栈并压入s2
        tree temp = s1[top1--];
        s2[++top2] = temp;

        // 将子节点从左到右压入s1
        for (int i = 0; i < m; i++)
        {
            if (temp->child[i])
            {
                s1[++top1] = temp->child[i];
            }
        }
    }

    // 弹出s2中的所有节点并访问
    while (top2 >= 0)
    {
        printf("%c", s2[top2--]->data);
    }
}
int main ()
{
    tree root;
    printf("please input the preorder sequence of the tree:\n");
    root =createtree();
    printf("后序序列是：\n");
    PostOrder1(root);
    return 0;
}

