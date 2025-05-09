/*_____________________________________________________
|******************Simple-Calculator*******************|
|**************CODEDBYTHEALPHAGUARDIAN*****************|
|______________________________________________________|
*/
#include<stdio.h>

int main()
{
	float num1, num2, num3, res;
	
	printf("Simple Calculator\n\n");
	
	printf("Enter The First Number : ");
	scanf("%f", &num1);
	printf("\n");
	
	printf("Enter The Second Number : ");
	scanf("%f", &num2);
	printf("\n");
	
	printf("1=(+), 2=(-), 3=(/), 4=(*) \nEnter The Calculation Method : ");
	scanf("%f", &num3);
	printf("\n");
	
	if(num3 == 1)
	{
		res = num1+num2;
		printf("The answer : %f", res);
	}
	else if(num3 == 2)
	{
		res = num1-num2;
		printf("The answer : %f", res);
	}
	else if(num3 == 3)
	{
		res = num1/num2;
		printf("The answer : %f", res);
	}
	else if(num3 == 4)
	{
		res = num1*num2;
		printf("The answer : %f", res);
	}
	else
	{
		printf("please enter a valid number.");
	}
	
	return 0;
}
