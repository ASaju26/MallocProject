#include <stdlib.h>
#include <stdio.h>

int main()
{
  printf("Running my third test to test 2 dynamically allocated arrays of integer pointers\n");

  int** intArray = malloc(15000*sizeof(int*));
  for(int i=0;i<15000;i++)
  {
      intArray[i]=malloc(i*1000* sizeof(int));
    }
    
    char** charArray2 = malloc(15000* sizeof(char*));
    for (int i=0;i<15000;i++)
    {
         charArray2[i]=malloc(i*50* sizeof(int));
    }
    for(int i=0;i<15000;i++)
    {
      free(intArray[i]);//freeing each element of array
       free(charArray2[i]);
    }
  free(intArray); //freeing the pointer to the array itself
  free(charArray2);
  return 0;
}
