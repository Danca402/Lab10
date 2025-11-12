/* Task description:
Write a function that takes two parameters: a positive integer value, and the base of a numeral system. Print the value in the given numeral system. Why is the solution much simpler using recursion than an iterative solution?
Hint

To print for example 1234 in base 10 numeral system first the 1234/10 (123) should be printed, and then the 1234%10 (4). Using recursion it is easy to reverse the order of printing.


*/


#include <stdio.h>

void numeralSystem(int num, int base){
  if(num >= base) numeralSystem(num/base, base);
  printf("%d",num%base);
}

int main(){
  printf("Printing numbers in other base of numeral system:\n");
  numeralSystem(87,4);


  return 0;
}
