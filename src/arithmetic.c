#include <stdio.h>
int main()
 {
    int a = 10;
    int b = 20;
    int sum = a + b;

    float  z=a/(float)b;
    
    printf("Sum  is: %d\n", sum);
    printf("Result of division: %.2f\n", z);    
    
    return 0;
}