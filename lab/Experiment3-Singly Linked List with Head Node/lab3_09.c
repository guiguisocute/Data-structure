#include <stdlib.h>
#include <stdio.h>
 
typedef struct node
{       int coef;        /*ϵ��*/
        int expn;       /*ָ��*/
        struct node *next;
}listnode;        //����ʽ�洢�ṹ

typedef listnode *linklist;
void delList(linklist head);

 /*
 �������ƣ� creat()
 �������ܣ���������ʽ�洢�ṹ�����Ҷ���ʽ�ڱ��а��������ָ���������
 */
linklist creat()            //��������ʽ�洢�ṹ��
{
          linklist head,s,p,pre,r;
          int coef;
          int expn;
          head=(linklist)malloc(sizeof(listnode));    /*����ͷ���*/
          head->next=NULL;
          printf("���������ʽ��ÿһ��ֻ������ϵ����ָ��(�������ϵ��Ϊ0ʱ��������)��\n");
          scanf("%d",&coef);         //����ϵ��
          scanf("%d",&expn);        //����ָ��

          while (coef!=0)       //���ڴ˴������ʵ��Ĵ���
           {

           }
         return head;
}

void print(linklist head) //�������ʽ
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
 �������ƣ� add()
 �������ܣ�����ʽ���
 ��ڲ�����a��b�Ǵ洢����ʽ�Ĵ�ͷ��㵥�������Ҷ���ʽ�ڱ��а��������ָ���������
 */
linklist add(linklist a,linklist b)  //�뽫��������������
{
            linklist pa,pb,c,pc,r;


}

int main()
 {
           linklist a,b,c;
           a=creat();
           printf("����ʽaΪ��");
           print(a);

           b=creat();
           printf("����ʽbΪ��");
           print(b);

           c=add(a,b);
           printf("��������ʽ�ĺ�Ϊ��\n");
           print(c);
           delList(c);
           return 0;
 }
 /***************************************/
/*�������ƣ�delList()		 	                	 */
/*�������ܣ��ͷŴ�ͷ���ĵ�����      */
/***************************************/
void delList(linklist head)
{ linklist p=head;
  while (p)
  { head=p->next;
    free(p);
    p=head;
  }
}
