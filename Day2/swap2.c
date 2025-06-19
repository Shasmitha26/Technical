#include <stdio.h>
int main() {
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d", a, b);
    a = a + b; 
    b = a - b;  
    a = a - b;  
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}
