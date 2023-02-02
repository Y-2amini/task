#include<stdio.h>
int man()
{
	float input_1,input_2,total;
	char rept;
	printf("Enter the value:");
	scanf("%f",&input_1);
	d0
	{
		printf("enter the value:");
		scanf("%f",&input_2);
		int oper;
		printf("1-Addition(+)\n2-subraction(-)\nn3-multiplication(*)\nn4-division(/)\n");
		ptintf("enter your choise in number:");
		scanf("%d",&oper);
		if(oper==1){
			total=input_1,input_2);
		}
		else if(oper==2){
			total=input_1-input_2;
			printf("%.2f*%.2f=%.2f\n\n",input_1,input_2,total);
		}
		else if(oper==4){
			total=input_1/input_2;
			printf("%.2f/%.2f=%.2f\n\n",input_1,input_2,total);}
		}
		else{
			printf("worng input\n");
			break;
		}
		printf("do you want to continue(y/n):");
		scanf("%s",&rept);
		input_1=total;
	}while(rept=='y'||rept=='y');{
		if(total==(int)total){
			printf("total=%d",(int)total);
		}
		else{
			printf("total=%.2f",total);
		}
	}
	return 0;
}
	
		
	
	
