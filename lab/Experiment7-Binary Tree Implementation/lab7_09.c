/*
������������ö�������洢�ṹ�����һ���㷨��
��ǿն�������ָ����ĳһ��lev��lev>=1����Ҷ�ӽ�������
*/

#include "bintree.h"
char *a="ABD##EH##I##CF##G##";  			/*�������������t��ǰ������*/
typedef struct{
    bintree qu[N];      //��������еĽ��
    int level[N];       //����queue�ж�Ӧλ�ô����Ĳ��
    int f,r;            //������βָʾ
}seqQueue;

/*
    ����totalLeaf(t,lev)����ͳ�ƶ�����t�е�lev���Ҷ�ӽ��������뽫��������������
*/
int totalLeaf(bintree t,int lev)
{

}
int main()
{
    bintree t;
    int lev,counter;
    t=creatbintree();   	/*����������t�Ĵ洢�ṹ*/
    printf("��������ǰ������Ϊ��\n");
    preorder(t);
    printf("\n�������ţ�");
    scanf("%d",&lev);
    counter=totalLeaf(t,lev);
    printf("%d���Ϲ���%d��Ҷ�ӽ�㡣\n",lev,counter);
    return 0;
}
