#include<stdio.h>

int main(void) {
    printf("Hello World\n");
    printf("demo from kishore.\n");
    printf("to check on the auto push build step\n");
    printf("to display the ouput in GH page\n");
    printf("to test the given scenarios");
    int n = 9; 
    printf("%d", fib(n)); 
    getchar();
    return 0;
}


int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2); 
} 
