// https://www.onlinegdb.com/online_c_compiler

#include <stdio.h>

int main()
{
    int value1;
    int i;
    printf("Enter a Number   : ");
    scanf("%d",&value1);
    printf("\n Multiplication Table for %d is \n",value1);
    for (i=1 ; i<=10;i++)
    {
        printf("\n %d x %d  = %d",value1,i, value1*i);
    }
    return 0;
}
