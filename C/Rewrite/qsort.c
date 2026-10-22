#include <stdio.h>
#include <stdlib.h>
void sort(int A[], size_t t) {
   int temp;
   for( size_t i = 0; i < t - 1; ++i) {  // You wouldn't check after the last number hence t - 1;
    for( size_t j = i+1; j < t; ++j) {  // j would be always more than i. The first for loops then the nested for would reset and comes back to 1 if j = 1.
	if( A[i] > A[j] ) {
	  temp = A[i]; A[i] = A[j]; A[j] = temp;  
	}
    }
   }
}
int main() {
  int A[5] = {
    [0] = 24,
    [1] = 75,
    [2] = 4,
    [3] = 3,
    [4] = 54,

  };
  int size = sizeof(A) / sizeof(A[0]);
  sort(A, size);
  for(size_t i = 0; i < size; ++i) {
	printf("%d\n", A[i]);  
  }

 return EXIT_SUCCESS;
}
