/*
7．利用朴素模式匹配算法，查找模式 t 在主串 s 中所有出现的位置，并将这些位置存储在带头
结点的单链表中。（实验代码详见 lab4_07.c）
*/
#include <string.h> 
#include <stdlib.h>
typedef struct node
{		int data;
		struct node *next;
}linknode;
typedef linknode *linklist;
/*朴素模式匹配算法,返回t中s中第一次出现的位置，没找到则返回-1，请将程序补充完整*/
int index(char s[],char *t)
{
    int i,k,j;
    int n,m;
	n=strlen(s);        //主串长度
	m=strlen(t);        //模式串长度
	for (i=0;i<n-m+1;i++)
	{
		k=i;
		j=0;
		while (j<m)
		{
			if (s[k]==t[j]) {k++;j++;}
			else
			  break;
		}
		if (j==m) return i;
	}
	return -1;
}
/*利用朴素模式匹配算法，将模式t在s中所有出现的位置存储在带头结点的单链表中,请将函数补充完整*/
linklist indexall(char *s,char *t)
{

}
/*输出带头结点的单链表*/
void print(linklist head)
{	linklist p;
	p=head->next;
	while(p)
	{	printf("%5d",p->data);
		p=p->next;
	}
	printf("\n");
}
int main()
{	char s[80],t[80];
	linklist head;
	printf("请输入主串:\n");
	gets(s);
	printf("请输入模式串:\n");
	gets(t);
	int k=index(s,t);
	printf("k=%d",k);
	//head=indexall(s,t);
	//printf("\n[ %s ]在[ %s ]中的位置有：\n",t,s);
	//print(head);
    return 0;
}
