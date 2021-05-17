#include <stdio.h>

int main()
{
    int value1;
    int value2;
    printf("Enter the First Value   : ");
    scanf("%d",&value1);
    printf("Enter the Second Value  : ");
    scanf("%d",&value2);
    printf("\n\nSum of the Values are : %d", value1 + value2);
    
    // Biggest Number
    int Biggest_Number;
    if (value1 > value2)
    {
        Biggest_Number = value1;
    }
    else
    {
        Biggest_Number = value2;
    }
    printf("\n\nBiggest Number Entered is  : %d", Biggest_Number);
    return 0;
}
