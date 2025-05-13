#include "main.h"


/**
 * reverse_array - a function that reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
  int i =0, j = n - 1, temp = 0;
  
  while ( i < j)
  {
      temp = a[i];
      
      a[i] = a[j];
      
      a[j] = temp;
      
      i++;
      j--; 
  }
    
}
