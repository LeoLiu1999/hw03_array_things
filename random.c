#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
  /*
  int rng;
  srand( time(NULL) );
  rng = rand();
  printf("%d \n", rng);
  
  int rng2;
  rng2 = rand();
  printf("%d \n",rng2);
  */

  printf("The original array:\n");
  srand( time( NULL));
  int arr[10];
  int a;
  for (a = 0; a<10; a++){
    arr[a] = rand();
    printf("arr[%d]: %d\n", a, arr[a]);
  }

  printf("The second array:\n");
  int arr2[10];
  int *p;
  p = &arr[9];
  for (a = 0; a < 10; a++){
    arr2[a] = *p;
    p--;
  }
  
  for (a = 0; a < 10; a++){
    printf("arr[%d]: %d\n", a, arr2[a]);
  }
  return 0;
}
