#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("1.addition 2.subtraction 3.multiplication 4.exit")
	printf("enter your choice");
	scanf("%d",ch);
	switch(ch!=5)
	{
		case 1:
			int res=a+b;
			printf("addition is: %d ",res);
		case 2:
			int res1=a-b;
			printf("subtraction is:%d ",res1);
		case 3: 
			int re2=a*b;
			printf("multiplication is:%d",res2);
		case 4:
			exit;
	}
	return 0;
}
