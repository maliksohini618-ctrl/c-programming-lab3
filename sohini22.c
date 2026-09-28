//0,1,1,2,3,5,8...upto n term.w.c.p to display given sequence.//
#include<stdio.h>
int main()
{
	int i,a=0,b=1,n,c;
	printf("enter the number of terms:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
}
