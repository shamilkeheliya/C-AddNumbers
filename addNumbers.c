#include <stdio.h>
int main()
{
	int num,total;

	do
    {
        if(num!=-999)
        {
            printf("Enter number for add or enter -999 to get sum\n");
            scanf("%d",&num);
            total=total+num;
        }
    }while(num!=-999);

    printf("Total = %d",total+999);

	return 0;
}
