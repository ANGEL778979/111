#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define maxsize 100

typedef char datatype;

typedef struct nodeS{
	datatype el;
	nodeS *next;
}NodeS;

//判断栈是否为空
int IsemptyS2(NodeS *S)
{
	if(S->next==NULL)
		return 1;
	else return 0;
 } 
 
//进栈
NodeS *PushS2(NodeS *S,datatype e)
{
	NodeS *p;
	p=(NodeS*)malloc(sizeof(NodeS));
	p->el=e;
	p->next=S;
	S=p;
	return S;
		
}
//出栈，删除栈S的栈顶元素，并返回栈顶的数据元素。
datatype *PopS2(NodeS *S)
{
	datatype *ret;
	if(S==NULL)
	{	printf("stack is underflow\n");
	}
	
	else
	{
		ret=(datatype*)malloc(sizeof(datatype));
		*ret=S->el;
		S=S->next;
		return ret;
	}
} 



int cp(char a[])
{
	int i;
	char *ret;
	NodeS *s1,*s2;
	s1->next=NULL;s2->next=NULL;
	
	if(a[0]!=')')
	  for(i=0;i<strlen(a);i++)
	    {if(a[i]=='(')
	       PushS2(s1,a[i]);
	     else if(a[i]==')')
		   ret=PopS2(s1);
		 else  PushS2(s2,a[i]);
	    }
	else return 0;
	
	if(IsemptyS2(s1))
	  return 1;
	else return 0;
	
	
}

int main()
{
	int n,i;
	scanf("%d",&n);
	char a[n];
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	
	if(cp(a))
	 printf("yes\n");
	else printf("no\n");
	printf("git test"); 
	return 0;
}
