#include<stdio.h>
int main()
{
	int month;
	printf("enter a month(1-12) :");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("january month 31 days\n");
			break;
		case 2:
			printf("feb month 28 or 29 days\n");
			break;
		case 3:
			printf("mar month 31 days\n");
			break;
		case 4:
			printf("apr month 30 days\n");
			break;
		case 5:
			printf("may month 31 days\n");
			break;
		case 6:
			printf("june month 30 days\n");
			break;
		case 7:
			printf("july month 31 days\n");
			break;
		case 8:
			printf("aug month 31 days\n");
			break;
		case 9:
			printf("sep month 30 days\n");
			break;
		case 10:
			printf("oct month 31 days\n");
			break;
		case 11:
			printf("nov month 30 days\n");
			break;
		case 12:
			printf("dec month 31 days\n");
		default:
			printf("Sorry,You enter the wrong number\n");
	}
	return 0;
}
