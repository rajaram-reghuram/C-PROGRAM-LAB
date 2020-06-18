#include <stdio.h>

 
void main()
{
    int number, sum = 0, rem = 0, copy;
 
    printf ("enter a number\n");
    scanf("%d", &number);
    copy = number;
    while (number != 0)
    {
        rem = number % 10;
        
        sum = sum + (rem*rem*rem);
        number = number / 10;
    }
    if (sum == copy)
        printf ("The given no: is armstrong \n");
    else
        printf ("The given no is not armstrong\n ");
}
