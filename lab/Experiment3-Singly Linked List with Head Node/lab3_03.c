/*
�����ͷ���ĵ�����head���������еģ�����㷨����linklist insert(linklist head,datatype x)��
��ֵΪx�Ľ����뵽����head�У����������������ԡ�
�ֱ�����뵽��ͷ�����кͱ�β��������Ĳ����������в��ԡ�
*/
/**********************************/
/*�ļ����ƣ�lab3_03.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void  insert(linklist head ,datatype x)
{
      linklist  pre,p,q;
      pre=head;
      p=head->next;
      while (p && p->info<x)        //���Ҳ���λ��
      {
          pre=p;
          p=p->next;
      }
      q=(linklist)malloc(sizeof(node));
      q->info=x;        //����ڵ�
      q->next=p;
      pre->next=q;
}
int main()
{
    datatype x;
    linklist head;
    printf("����һ���������е�������\n");
    head=creatbyqueue();				/*β���뷨������ͷ���ĵ�����*/
    print(head);
    printf("������Ҫ�����ֵ��");
    scanf("%d",&x);
    insert(head,x);				    /*�������ֵ���뵽��ͷ���ĵ������ʵ�λ��*/
    print(head);
    delList(head);
    return 0;
}
