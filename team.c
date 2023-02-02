#include<stdio.h>
int main()
{
	int x,y;
	char ch;
	printf("\nselect number\n1.addition\n2.subtraction\n3.Multiplication\n4.Division\nEnter :");
	scanf("%c",&ch);
	printf("enetr the two values:");
	scanf("%d %d",&x,&y);
	switch(ch){
		case '1':
			printf("sum is:%d",x+y);
			break;
		case '2':

			printf("sub is:%d",x-y);
			break;
		case '3':
			printf("Mul is:%d",x*y);
			break;
		case '4':
			printf("div is:%d",x/y);
			break;
	}
	return 0;
}



