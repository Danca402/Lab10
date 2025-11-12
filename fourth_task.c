/* Task description:
Write a recursive function to print the elements of an array a) forwards b) backwards. Both functions should receive the array and its size on the parameter list. 
Create in main an array of five, and another one of ten integers (initialized). Call both functions for both arrays.

*/


#include <stdio.h>



void forwards(int array[], int len, int id){
  if(len==id) return;
  printf("%d ",array[id]);
  forwards(array,len,id+1);
}


void backwards(int array[], int len, int id){
  if(len==id) return;
  backwards(array,len,id+1);
  printf("%d ",array[id]);
}

int main(){
  int array5[]={1,2,3,4,6};
  int array10[]={1,2,3,4,6,43,54,54,54,321};

  forwards(array5,5,0);
  printf("\n");
  backwards(array5,5,0);
  printf("\n");
  forwards(array10,10,0);
  printf("\n");
  backwards(array10,10,0);


  return 0;
}
