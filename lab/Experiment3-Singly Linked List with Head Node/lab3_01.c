/*��д����void delx(linklist head, datatype x)��ɾ����ͷ��㵥����head�е�һ��ֵΪx �Ľ�㡣
����������������в��ԡ�
*/ 
/**********************************/
/*�ļ����ƣ�lab3_01.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void delx(linklist head,datatype x)
{

}

int main()
{   datatype x;
    linklist head;
    head=creatbyqueue();		/*β���뷨������ͷ���ĵ�����*/
    print(head);
    printf("������Ҫɾ����ֵ��");
    scanf("%d",&x);
    delx(head,x);			            /*ɾ��������ĵ�һ��ֵΪx�Ľ��*/
    print(head);
    delList(head);				/*�ͷŵ�����ռ�*/
    return 0;
}
