/* Task description:
Fibonacci

The Fibonacci-series is defined as: F0=0, F1=1, Fn=Fn-1+Fn-2. Write a recursive function to calculate the nth element! Test your function for n=40! What happens? (Hint: remember the lecture topic.)

Trace your program in the debugger. Start it and see how it works for n=5. You may implement your own tracing method: your fib() function should first print the value of the parameter (n).
Use the debugger to trace the stack!

*/


#include <stdio.h>

int fibonacci(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return (fibonacci(n-2)+fibonacci(n-1));
}

int main(){
    printf("Fibonacci sequence:\n");
    for(int i=1; i<=40; i++){
        printf("%d ",fibonacci(i));
    }

return 0;
}
