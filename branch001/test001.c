#include <stdio.h>

int main() {
    int marks[5], i, total = 0;
    float average;

    // Input marks for 5 subjects using for loop
    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
 return 0;
}
