//1.with arguments and no return value
/*
#include<stdio.h>
void table(int x) 
{
	int i=1,z;
	for(i=1;i<=10;i++)
	{
		z = i * x;

		printf("%d * %d = %d\n",x,i,z);
	}          

}
int main()
{
	int x;
	printf("enter the number:\n");
	scanf("%d",&x);
	table(x);
}*/


/*
#include<stdio.h>
void fac(int x)
{
	int z=1,i;
	for(i=1;i<=x;i++)
	{
		z = i * z;
	
	}
	printf("%d factorial is :%d",x,z);

}
int main()
{
	int x;
	printf("enter a factorial number:");
	scanf("%d",&x);
	fac(x);
}
*/

/*
#include<stdio.h>
void pat(int x)
{
	int i,j;
	for(i=0;i<x;i++)
	{
	
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}
int main()
{
	int x;
	printf("enter a number:");
	scanf("%d",&x);
	pat(x);
}
*/

/*
#include<stdio.h>
void num(int n)
{
        int i;
	printf("upto even numbers\n");
	for(i=0;i<n;i++)
	{
		if(i % 2==0)
		{
			printf("%d\n",i);
		
		}
	}
	printf("upto odd number\n");
	for(i=0;i<n;i++)
        {
                if(i % 2 !=0)
                {
                        printf("%d\n",i);

                }
        }

	
		
        
}
int main()
{
        int n;
        printf("enter a number:");
        scanf("%d",&n);
        num(n);
}
*/

/*
#include<stdio.h>
void num(int n)
{
        int i;
        
        printf("upto odd number\n");
        for(i=0;i<n;i++)
        {
                if(i % 2 !=0)
                {
                        printf("%d\n",i);

                }
        }
}
int main()
{
        int n;
        printf("enter a number:");
        scanf("%d",&n);
        num(n);
}
*/

//2.with arguments and with return value
/*
#include<stdio.h>
int fun(int x,int y)
{
	int z;

	z=x+y;
	return z;
}
int main()
{
	int z,x,y;
	printf("enter a number x and y:");
	scanf("%d %d",&x,&y);
	z=fun(x,y);
	printf("adding %d\n",z);
}
*/

/*
#include<stdio.h>
int fun(int a,int b)
{
	int c=1,i;
        for(i=a;i<=b;i++)
	{
	 c = c+i;
	}
	return c; 
}
int main()
{
	int a,b,c;
	printf("enter a and b values =");
	scanf("%d %d",&a,&b);
	c = fun(a,b);
	printf("sum of the numbers = %d",c);
}
*/

/*
#include<stdio.h>
int fun(int j , int a)
{
	int i;
	for(i=j;i<a;i++)
	
	{
		return i;
	}
}
int main()
{
	int a,j,c;
	printf("enter a integer=");
	scanf("%d",&a);
	for(j=0;j<a;j++)
	{	
	c = fun(j,a);
	printf("natural number upto given number=%d\n",c);

	}

}
*/

/*
//3.no arguments and no return type
#include<stdio.h>
void fun()
{
	
	int i,j,x=10;
	for(i=1;i<x;i++)
		{
			j=i*i*i;
			printf("%dcube%d\n",i,j);
		}

}
int main()
{
	
	fun();
}

*/

/*
#include<stdio.h>
void trr()
{
	int i=10,x,j=5,y;
	x = i+j;
	y = i-j;
	printf("%d %d ",x,y);

}
int main()
{
	
	trr();
}
*/


/*
#include<stdio.h>
void swaping(int x, int y)
{
	int tem=x;
	x = y;
	y = tem;

	printf("swapping %d %d",x,y);
}
int main()
{
	int x=10,y=20;
	swaping(x,y);
}
*/

//4.no arguments and no return
/*
#include<stdio.h>
void fun()
{
	char name[6]="yamini";
	printf("%s\n",name);

}
int main()
{
	fun();
	return 0;
}
*/

/*
#include<stdio.h>
void fun()
{
	int x=10,i=10;
	printf("%d * %d = %d\n",x,i,(i*x));
}
int main()
{
	fun();
	return 0;
}
*/

#include<stdio.h>
void fun()
{
	int x=20;
	if(x%2==0)
	{
		printf("it is even number:\n");
	}
	else
	{
		printf("it is odd number:\n");
	}
}
int main()
{
	fun();
	return 0;

}

