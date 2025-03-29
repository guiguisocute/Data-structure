/*
7．利用朴素模式匹配算法，查找模式 t 在主串 s 中所有出现的位置，并将这些位置存储在带头
结点的单链表中。（实验代码详见 lab4_07.c）
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{		int data;
		struct node *next;
}linknode;



typedef linknode *linklist;
/*朴素模式匹配算法,返回t中s中第一次出现的位置，没找到则返回-1，请将程序补充完整*/
int index2(char s[],char *t)
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

	//我寻思这不就是暴力找子串吗，这个算法名字这么高级我还以为是什么特别复杂的东西呢吓死我了
}

/*利用朴素模式匹配算法，将模式t在s中所有出现的位置存储在带头结点的单链表中,请将函数补充完整*/
linklist indexall(char *s,char *t)
{
	linklist new  = (linklist)malloc(sizeof(linknode));
	new->next = NULL;
	linklist r = new;
	
	int current_i = index2(s,t);
	while(current_i != -1){
		linklist l_t = (linklist)malloc(sizeof(linknode));
		l_t->data = index2(s, t);
		r->next = l_t;
		l_t->next = NULL;
		r = l_t;							//不管怎么样先写一下尾插算法

		//接着是更新主串,因为是数组所以得整块往左移，我恨你为什么不是链表
		char* p_s = s + current_i + strlen(t);
		int i = 0;
		while(*p_s != '\0'){
			s[i] = *p_s;
			p_s++;
			i++;
		}
		s[i] = '\0';
		current_i = index2(s, t);  // 更新当前索引
	}
	return new;
	
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
	fgets(s, sizeof(s), stdin);		//我还是很不喜欢gets也太不安全了那个函数，我我还是改成更标准的fgets吧
	s[strcspn(s, "\n")] = '\0';

	printf("请输入模式串:\n");

	fgets(t, sizeof(t), stdin);
	t[strcspn(t, "\n")] = '\0';
	
	int k=index2(s,t);
	printf("k=%d",k);
	head=indexall(s,t);
	printf("\n[ %s ]在[ %s ]中的位置有：\n",t,s);
	print(head);
    return 0;
}
