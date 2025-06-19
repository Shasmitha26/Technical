#include <stdio.h>
int main()
{
    int num = 01101;
    int sum = 0;
    while (num > 0)
    {
        int rev = num % 10; 
        printf("%d", rev);
        sum += rev;
        num = num / 10; 
    }
    printf("\nSum of digits: %d\n", sum);
}
