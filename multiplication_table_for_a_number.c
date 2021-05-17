// https://www.onlinegdb.com/online_c_compiler

#include <stdio.h>

int main()
{
    int value1;
    int i;
    printf("Enter a Number   : ");
    //scanf - read the value and assign to value1
    // %d - used to accept integer values
    scanf("%d",&value1);
    // \n used for new line
    // %d - used to print the integer value of value1
    printf("\n Multiplication Table for %d is \n",value1);
    // loop for 1-10.
    // %d -
    // 1. used to print value1
    // 2. used to print value of i
    // 3. used to print (value1 * i)
    for (i=1 ; i<=10;i++)
    {
        printf("\n %d x %d  = %d",value1,i, value1*i);
    }
    return 0;
}
