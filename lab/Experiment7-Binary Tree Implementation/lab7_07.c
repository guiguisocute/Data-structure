/*
������������ö�������洢�ṹ�����һ���㷨���������t�о�*p�����Ҷ�ӽ�㡣
*/

#include "bintree.h"
char *a="ABC##D#E##F##";  			/*�������������t��ǰ������*/
/*
    �������ƣ�findClosest(t,p)
    �������ܣ��Ӷ�����t�У����Ҿ���*p�����Ҷ�ӽ��
*/
bintree  findClosest(bintree t,bintree p)//�뽫��������������
{

}

/*
    �������ƣ�search(t,c)
    �������ܣ���������t�в���ֵΪc�Ľ�����ڵ�λ��
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
    t=creatbintree();   	/*����������t�Ĵ洢�ṹ*/
    printf("��������ǰ������Ϊ��\n");
    preorder(t);
    printf("\n������һ�����ֵ:");
    scanf("%c",&c);
    p=search(t,c);
    if (p)
        q=findClosest(t,p);
    if (q) printf("����%c�����Ҷ�ӽ��Ϊ%c��\n",c,q->data);
    return 0;
}
