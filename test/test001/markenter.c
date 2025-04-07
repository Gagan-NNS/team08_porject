#include <stdio.h>

int main() {
    int marks[5];  // Array to store marks of 5 students
    int i;

    // Input marks
    for(i = 0; i < 5; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Evaluate marks
    for(i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        
        if(marks[i] >= 90) 
	{
            printf("Grade A\n");
        }
	else if(marks[i] >= 75)
	{
            printf("Grade B\n");
        }
	else if(marks[i] >= 60) 
	{
            printf("Grade C\n");
        }
	else if(marks[i] >= 40) 
	{
            printf("Grade D (Pass)\n");
        }
	 else 
	 {
            printf("Fail\n");
         }

    }

    return 0;
}

