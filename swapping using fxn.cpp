//1.Write a program in C to swap two numbers using function.
#include <stdio.h>
void swapping(int n1, int n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;

    printf("First number: %d, Second number: %d\n", n1, n2);
}

int main() {
    printf("Enter two numbers: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    swapping(num1, num2);

    return 0;
}

