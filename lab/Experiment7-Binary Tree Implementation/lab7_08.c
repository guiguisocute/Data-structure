/*
������������ö�������洢�ṹ�����һ���㷨����ǿն�����t�Ŀ�ȣ������н����������һ��Ľ���������
*/

#include "bintree.h"
char *a="ABD##EH##I##CF##G##";  			/*�������������t��ǰ������*/

typedef struct{
    bintree qu[N];        //��������еĽ��
    int level[N];           //����queue�ж�Ӧλ�ô����Ĳ��
    int f,r;                      //������βָʾ
}seqQueue;

/*
    ����bintreeWidth(t)���ڼ��������t�Ŀ�ȣ��뽫��������������
*/
int bintreeWidth(bintree t)
{


}
int main()
{
    bintree t;
    int width;
    t=creatbintree();   	/*����������t�Ĵ洢�ṹ*/

    width=bintreeWidth(t);
    printf("���Ŀ��Ϊ��%d\n",width);

    return 0;
}
