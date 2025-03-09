#include <stdlib.h>
#include <stdio.h>
 
typedef struct node
{       int coef;        /*系数*/
        int expn;       /*指数*/
        struct node *next;
}listnode;        //多项式存储结构

typedef listnode *linklist;
void delList(linklist head);

 /*
 函数名称： creat()
 函数功能：建立多项式存储结构，并且多项式在表中按所在项的指数递增存放
 */
linklist creat()            //建立多项式存储结构，
{
          linklist head,s,p,pre,r;
          int coef;
          int expn;
          head=(linklist)malloc(sizeof(listnode));    /*生成头结点*/
          head->next=NULL;
          printf("请输入多项式，每一项只需输入系数，指数(当输入的系数为0时结束输入)：\n");
          scanf("%d",&coef);         //输入系数
          scanf("%d",&expn);        //输入指数

          while (coef!=0)       //请在此处填上适当的代码
           {

           }
         return head;
}

void print(linklist head) //输出多项式
  {
        linklist p;
        p=head->next;
        while (p)
        {   printf("%d(X)",p->coef);
            printf("%d    ",p->expn);
            p=p->next;
        }
        printf("\n");
 }

 /*
 函数名称： add()
 函数功能：多项式相加
 入口参数：a与b是存储多项式的带头结点单链表，并且多项式在表中按所在项的指数递增存放
 */
linklist add(linklist a,linklist b)  //请将本函数补充完整
{
            linklist pa,pb,c,pc,r;


}

int main()
 {
           linklist a,b,c;
           a=creat();
           printf("多项式a为：");
           print(a);

           b=creat();
           printf("多项式b为：");
           print(b);

           c=add(a,b);
           printf("两个多项式的和为：\n");
           print(c);
           delList(c);
           return 0;
 }
 /***************************************/
/*函数名称：delList()		 	                	 */
/*函数功能：释放带头结点的单链表      */
/***************************************/
void delList(linklist head)
{ linklist p=head;
  while (p)
  { head=p->next;
    free(p);
    p=head;
  }
}
