#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Output the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
