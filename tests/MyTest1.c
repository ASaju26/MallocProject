#include <stdlib.h>
#include <stdio.h>

int main()
{
  printf("Running my first test to test a dynamically allocated array\n");

  int *array = malloc(1000*sizeof(int));
  int sum=0;
  for(int i=0;i<1000;i++)
  {
      array[i]=i;
      sum=sum+array[i];
    }
    
    for(int i=0;i<1000;i++)
    {
      array[i]=0;//resetting all vallues in array
    }
  free( array ); 
  printf("%d\n",sum);

  return 0;
}
