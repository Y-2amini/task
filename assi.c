/*#include<stdio.h>
int main()
{
	int a=10;
	int b=5;
	a+=b;
	printf("a=%d\n",a);
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	int a=12;
	int b=2,c;
	b-=a;
	printf("%d\n",b );
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number:\n");
	scanf("%d %d",&a,&b);
	a*=b;
	printf("a=%d\n",a);
	return 0;
}*/


/*
#include<stdio.h>
int main()
{
	int a=12;
	int b=10,result;
	result=a+=b;
	printf("result=%d\n",result);
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	int a=2;
	int b=2;
	if(a==b)
		printf("a is equal to b\n");
	return 0;
}*/



/*
#include<stdio.h>
int main()
{
	int a=20;
	int b=12;
	printf("%d %d is a %d\n",a,b,a==b);
	return 0;
}*/


/*
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number:\n");
	scanf("%d %d",&a,&b);
	(a<b && a!=b)?printf("true\n"):printf("false\n");
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	printf("%d %d is a %d",a,b,a!=b);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a=22, b=22,c; 
	c=((a==b) && printf("yes,it's true\n"));
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	int a=10,b=20;
	if((a<b) || (b>a))
		printf("a=%d and b=%d\n",a,b);
	return 0;
}*/


/*
#include<stdio.h>
int main()
{
	int age;
	printf("enter a number:");
	scanf("%d",&age);
	if(age>=13) && (age<=19)
		printf("%d is a teenager",age);
	else
		printf("%d is not a teenager",age);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a=11,b=11;
	printf("%d\n",a^b);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a=10,b=10;
	printf("%d\n",a&b);
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	int i=0;
	(i<0)?printf("i is below 0"):(i==0)?printf("i equal 0"):
		printf("i is over 0");
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	int a=62,b=106;
	float c=100.4,d=100.4;
	printf("++a=%d\n",++a);
	printf("--b=%d\n",--b);
	printf("++c=%f\n",++c);
	printf("--d=%f\n",--d);
	
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	int a=10,b=20,c=10;
	(a==c) || (a!=c)?printf("true"):printf("false");
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a=10,b=30,c;
	c=((a<b) && (a==b));
	printf("result=%d\n",c);
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	int a=10,b=30,c;
	c=((a<b) || (a==b));
	printf("result=%d\n",c);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a=8,b=10,result;
	printf("%d==%d is false(%d)\n",a,b,a==b);
	result=(a==b) || (a>b);
	printf("result=%d\n",result);

	return 0;
}
*/


#include<stdio.h>
int main()
{
	int a=7,b;
	b=a;
	printf("b=%d\n",b);
	b+=a;
	printf("b=%d\n",b);
	b=+(b-a);
        printf("b=%d\n",b);
	b=b*a;
        printf("b=%d\n",b);
	b%=a;
        printf("b=%d\n",b);
	return 0;
}










