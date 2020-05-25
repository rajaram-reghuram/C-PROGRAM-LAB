#include <stdio.h>

int main()
{
  int array[100], n, i, pass, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
    
    
 for(pass=0;pass<=n-1;pass++)
 {

    for (i = 0 ; i< n - 1; i++)
    {
    
      if (array[i] >array[i+1]) /* For decreasing order use < */
      {
        swap       = array[i];
        array[i]   = array[i+1];
        array[i+1] = swap;
      }
   
   }
    
 } 

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
     printf("%d\n", array[i]);

  return 0;
}
