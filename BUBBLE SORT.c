#include <stdio.h>

int main()
{
  int a[100], n, i, pass, swap;
  

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    
    
 for(pass=0;pass<=n-1;pass++)
 {

    for (i = 0 ; i< n - 1; i++)
    {
    
      if (a[i]>a[i+1]) 
      {
        swap       = a[i];
        a[i]   = a[i+1];
       a[i+1] = swap;
      }
   
   }
    
 } 

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
     printf("%d\n", a[i]);

  return 0;
}
