/*#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n%2==0)
	
		printf("%d is even:\n",n);	

	return 0;
}*/


/*
#include<stdio.h>
int main()
{
	int n1;
	printf("enter a number:");
	scanf("%d",&n1);
	if(n1%2==0)
		printf("%d is even:\n",n1);
	else
		printf("%d is odd:\n",n1);
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n%3==0)
		if(n%7==0)
			printf("number is divisible both 3 and 7\n");
		else
			printf("number is divisible only by 3 not 7\n");
	else
	{
		printf("number is not divisible by 3,we cannot check for 7\n");		       printf("end");
	}
	return 0;
}*/


/*
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n<10)
	{
		if(n==1)
		{
			printf("The value is:%d\n",n);
		}
		else
		{
			printf("The value is greater than 1\n");
		}
	}
	else
	{
		printf("The value is greater than 10\n");
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("This is negative number\n");
	}
	else
	{
		printf("This is positive number\n");
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	char l;
	printf("which color do you like most ?\n");
	scanf("%c",&l);
	switch(l)
	{
		case 'b':
			printf("I like blue color\n");
			break;
		case 'y':
			printf("I like yellow color flower\n");
			break;
		case 'P':
			printf("I love pink color dress\n");
			break;
		case 'w':
			printf("moon is white color\n");
			break;
		default:
			printf("Sorry,idon't like it\n");
	}
	return 0;
}
*/


#include<stdio.h>
int main()
{
	int n;
	printf("enter a positive integer:");
	scanf("%d",&n);
	for(int i=1;i<=10;++i)
	{
		printf(""%d" * "%d" = "%d\n"",n,i,n);
	}
	return 0;
}
