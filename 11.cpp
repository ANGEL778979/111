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

NodeS *top;

//÷√ø’’ª
NodeS *SetnullS2(NodeS *S)
{
	S->next=NULL;
	return S;
 } 
//≈–∂œ’ª «∑ÒŒ™ø’
int IsemptyS2(NodeS *S)
{
	if(S->next==NULL)
		return 0;
	else return 1;
 } 
 
//Ω¯’ª
NodeS *PushS2(NodeS *S,datatype e)
{
	NodeS *p;
	p=(NodeS*)malloc(sizeof(NodeS));
	p->el=e;
	p->next=S;
	S=p;
	return S;
		
}
//≥ˆ’ª£¨…æ≥˝’ªSµƒ’ª∂•‘™Àÿ 
void PopS2(NodeS *S)
{
	if(S==NULL)
		printf("stack is underflow\n");
	else
		S=S->next;
} 

//11Ã‚ 
int Issym(char a[],NodeS *S)
{	
	int len,i;
	
	len=strlen(a);
	
	for(i=0;i<(len/2);i++)
	  PushS2(S,a[i]);
	
	for(;i<len;i++)
	  {if(S->el==a[i])
	    PopS2(S);
	   else 
	   	return 0;
		}
	return 1; 
}

int main()
{
	int i=0,var;
	char a[maxsize],ch;
	NodeS *S;
	
	scanf("%s",a);
	printf("123\n");
	
	S->next=NULL;
	var=Issym(a,S);
	printf("789\n");
	if(var)
	 printf("str is symmerty\n");
	else printf("str is not symmerty\n");
	printf("helloworld."); 
	return 0;
	
	
	
}
