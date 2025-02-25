/**************************************/
/*         �����������õ�ͷ�ļ�         */
/*          �ļ�����bstree.h              */
/**************************************/
#include<stdio.h>
#include<stdlib.h>
typedef struct node1            /*������������㶨��*/
 {
  int key;                      /*���ֵ*/
  struct node1 *lchild,*rchild; /*���Һ���ָ��*/
  }bsnode;
typedef bsnode *bstree;

/*
    ����creatBstree()��������Ľ�����У�����һ�ö����������������ظ����ĵ�ַ
*/
bstree  creatBstree()
  {
        bstree t=NULL,parent,p,q;
        int i,flag,n,x;

        printf("�������ⴴ���Ķ������е����ݸ�����");
        scanf("%d",&n);

        if (n>0)
        {
                printf("��������������������%d��������\n",n);
                for (i=0;i<n;i++)
                {       scanf("%d",&x);
                        parent=NULL;
                        p=t;
                        flag=0;
                        while (p)           //��ѭ�����ڲ��Ҳ���λ��
                        {
                           if (p->key>x)
                           {
                               parent=p;
                               p=p->lchild;
                           }
                           else if (p->key<x)
                           {
                               parent=p;
                               p=p->rchild;
                           }
                           else
                            {
                                flag=1;         //�ҵ���ͬԪ��
                                break;
                           }
                        }
                        if (flag==0)            //δ�ҵ���ͬԪ��
                        {
                            q=(bstree)malloc(sizeof(bsnode));
                            q->key=x;
                            q->lchild=q->rchild=NULL;
                            if (!t)  t=q;
                            else
                                if (q->key <parent->key)
                                    parent->lchild=q;
                                else
                                    parent->rchild=q;
                        }
                }
        }
        return t;
  }

/*---�����������������----*/
void inorder(bstree t)
  { if (t) {
                inorder(t->lchild);
                printf("%d\n",t->key);
                inorder(t->rchild);
             }

   }
