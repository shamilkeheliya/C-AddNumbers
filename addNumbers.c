#include <stdio.h>


int main()
{
	int enteredNum = 0;
	int sum = 0;

	while( scanf("Enter a number you would like to be added to the sum : %d", &enteredNum) != EOF)
	{
		sum+=enteredNum;

	}

	printf("The sum of the numbers you entered is %d\n",sum);



}