#include <stdio.h>


int main()
{
	int enteredNum = 0;//An integer representing the entered number to be added to the cumulative sum
	int sum = 0;//An integer representing the cumulative sum

	printf("Enter a number you would like to be added to the sum : "); //Asks the user to enter the number that he (or she) would like to be added to the sum
	
	while( scanf("%d", &enteredNum) != EOF)//While the scanf function doesn't return the end of file (EOF) signal
	{
		sum+=enteredNum;//Add the entered number to the sum
		printf("Enter a number you would like to be added to the sum : ");//And ask for another number
	}

	printf("The sum of the numbers you entered is %d\n",sum);//After termination of the while loop (EOF was detected), print out the cumulative sum



}