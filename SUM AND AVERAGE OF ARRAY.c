#include <stdio.h>

int main()
{
    int A[100], n, i, sum = 0;
    float avg;

    printf("Enter the number of elements you want to insert : ");
    scanf("%d", &n);
    
    printf("ENTER THE ELEMENTS IN THE ARRAY");

    for (i = 0; i < n; i++)
    {
       scanf("%d", &A[i]);
    }
    for(i = 0 ; i < n ; i++)
    {
     sum+=A[i];
     }
     avg=sum/n;
    

    printf("\nThe sum of the array is : %d", sum);
    printf("\nThe average of the array is : %f", avg);

    return 0;
 }
