#include<stdio.h>

int main(void) {
    printf("Hello World\n");
    printf("demo from kishore.\n");
    printf("to check on the auto push build step\n");
    printf("to display the ouput in GH page\n");
    printf("to test the given scenarios\n");
    int n = 9; 
    printf("The fib sequence output for number 9 is below\n");
    printf("%d\n", fib(n)); 
    printf("End of the program\n");
    rintf("To check the static we page delay from kishore");
    getchar();
    return 0;
}


int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2); 
} 
