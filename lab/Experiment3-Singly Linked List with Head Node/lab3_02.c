/**********************************/
/*�ļ����ƣ�lab3_02.c                 */
/**********************************/
/* 
�������Ա�a1,a2,a3,��an�����ô�ͷ���ĵ�����洢��������㷨����void reverse(linklist  head)��
����ͷ���ĵ�����head�͵ص��ã�ʹ���ɣ�an,an-1,��a3.a2,a1��������������������в��ԡ�
*/
#include "slnklist.h"
/*�뽫���������������������в���*/
void reverse(linklist head)
{

}
int main()
{   datatype x;
    linklist head;
    head=creatbystack();			/*ͷ���뷨������ͷ���ĵ�����*/
    print(head);					/*���ԭ����*/
    reverse(head);			/*���õ�����*/
    print(head);					/*������ú������*/
    delList(head);
    return 0;
}
