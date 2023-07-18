#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int d;
    int e;
   
    
    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    printf("Enter the value of c: ");
    scanf("%d", &c);
    
    printf("Enter the value of d: ");
    scanf("%d", &d);
    
    printf("Enter the value of e: ");
    scanf("%d", &e);
    
    int result = a+(b*c-d)/e;
    
    printf("Result: %d\n", result);
    
    return 0;
}

