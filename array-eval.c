
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

void init_array( int array[], size_t size )
{
  for ( size_t i = 0; i < size; i++ )
    array[i] = rand() % 1000;
}

void init_parray( int* parray[], int array[], size_t size )
{
  for ( size_t i = 0; i < size; i++ )
    parray[i] = &(array[i]);
}

int avg_array( int array[], size_t size )
{
  //'''' ASSIGNMENT TASK '''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement this function
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

  return 0;
}

int avg_parray( int* parray[], size_t size )
{
  //'''' ASSIGNMENt TASK '''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement this function
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

  return 0;
}

int main( void )
{
  srand(99);

  const int size = 1000;

  // Run an experiment

  int x;
  int y;

  int array[size];
  init_array( array, size );

  int* parray[size];
  init_parray( parray, array, size );

  x = avg_array( array, size );
  y = avg_parray( parray, size );

  // Print averages

  printf(" avg_array = %d, avg_parray = %d \n", x, y );

  return 0;
}



