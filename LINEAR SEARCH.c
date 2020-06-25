#include <stdio.h>

void main()

{  
    

 

    int i,  item ,num;

 

    printf("Enter the number of elements ");

    scanf("%d", &num);

    int array[100];

    printf("Enter the elements one by one \n");

    for (i = 0; i < num; i++)

    {

        scanf("%d", &array[i]);

    }

 

    printf("Enter the element to be searched\n ");

    scanf("%d", &item);

   

    for (i = 0; i < num ; i++)

    {

        if (item == array[i] )

          
         
       {
           printf("Element is present in the array at position %d",i+1);
       }
           
       else if (i==num)
         {
         printf("Element is not present in the array\n");
         }

    }
    

