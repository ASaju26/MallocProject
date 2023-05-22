#include <stdlib.h>
#include <stdio.h>

int main()
{
    float sum= 0;
  printf("Running my fourth test a massive allocated array of floats\n");
  float* floatArray = malloc(1000000* sizeof(float));
  for(int i=0; i<1000000;i++)
  {
      floatArray[i] = 1.5* i;
      sum= sum+floatArray[i];
  }
   for(int i=0; i<1000000;i++)
  {
      floatArray[i] = 0;
  }
  free(floatArray);//freeing the pointer to the array itself
  printf("%f\n",sum);
  return 0;
}
