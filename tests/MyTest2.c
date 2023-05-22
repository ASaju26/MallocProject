#include <stdlib.h>
#include <stdio.h>

int main()
{
  printf("Running my second test to test a dynamically allocated array of strings\n");

  char** StringArray = malloc(10000*sizeof(char*));
  for(int i=0;i<10000;i++)
  {
      StringArray[i]=malloc(i*3);
    }
    
    for(int i=0;i<10000;i++)
    {
      free(StringArray[i]);//freeing each element of array
    }
  free( StringArray ); //freeing the pointer to the array itself
  return 0;
}
