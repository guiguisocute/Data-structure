/*
编写算法函数void levelorder(tree t)实现树的层次遍历。
*/
 
#include "tree.h"

void levelorder(tree t)    /* t为指向树根结点的指针*/
/*其实感觉有点按图索骥的感觉毕竟名称其实都定死了……就像让你写一个冒泡那不就是左右比较一下大的交换然后如法炮制，而树的层次遍历就是按层从上到下，从左到右访问树的所有节点，基本上也只能用队列先进先出后进后出了吧*/
{
  tree queue[MAXLEN];   //队列的话肯定还是数组爽啊
  int front = 0, rear = 0;
  int i;

  if(!t){     //空树返回不说了
    return;
  }

  queue[rear] = t;
  rear++;

  while(front < rear){
    tree temp = queue[front];   //只要队列不空就出队一个节点
    front++;
    printf("%c",temp->data);  //访问打印节点的数据

    //然后就是实现怎么把该节点的孩子们全入队
    for(i = 0; i < m; i++){
      if(temp->child[i]){     //孩子有值就入队
        queue[rear] = temp->child[i];
        rear++;   
      }
    }
  }
}


 int main()
 {
   tree t;
   printf("please input the preorder sequence of the tree:\n");
   t=createtree();    //看了一下头文件，这里要使用#代表空树
   printf("\nthe levelorder is:");
   levelorder(t);
   return 0;
 }
