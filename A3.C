#include <stdio.h>
int main(){
int i=0;
int a=0;
int b=0;
int d=0;
printf("1. 2 integer addition\n2. 2 integer subtraction\n3. 2 integer division\n4. 2 integer multiplication\n");
scanf("%d",&i);
switch(i){
	case 1:
		printf("enter the two numbers one after the other with an enter seperating them");
		scanf("%d",&a);
		scanf("%d",&b);
		d=a+b;
		printf("\nThe answer is %d\n",d);          
		break;
	
	case 2 :
		printf("enter the two numbers one after the other with an enter seperating them");
		scanf("%d",&a);
		scanf("%d",&b);
		break;
		d=a-b;
		printf("The answer is %d\n",d);          
	case 3:
		printf("enter the two numbers one after the other with an enter seperating them");
		scanf("%d",&a);
		scanf("%d",&b);
		d=a/b;
		printf("\nThe answer is %d\n",d);
		break;

	case 4:
		printf("enter the two numbers one after the other with an enter seperating them");
		scanf("%d",&a);
	  	scanf("%d",&b);
		d=a*b;
		printf("\nThe answer is %d\n",d);          
		break;

	}


}
