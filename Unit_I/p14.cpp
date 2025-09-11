// Display three input numbers in sorted (non-decreasing) order? 

#include <stdio.h>

int main() {
    int a, b, c, temp;
    
    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Sort using simple swapping without pointers
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    // Display sorted numbers
    printf("Numbers in non-decreasing order: %d %d %d\n", a, b, c);
    
    return 0;
}