#include <stdio.h>


int main()
{
	int enteredNum = 0;
	int sum = 0;

	printf("Enter a number you would like to be added to the sum : ");
	
	while( scanf("%d", &enteredNum) != EOF)
	{
		sum+=enteredNum;
		printf("Enter a number you would like to be added to the sum : ");
	}

	printf("The sum of the numbers you entered is %d\n",sum);



}