#include <stdio.h>

int main() {
    int choice;
    
    printf("Choose a course by entering the corresponding number:\n");
    printf("1. Computer Science\n");
    printf("2. Electrical Engineering\n");
    printf("3. Mechanical Engineering\n");
    printf("4. Civil Engineering\n");
    printf("5. Business Administration\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("You selected Computer Science.\n");//case one is corret
            break;
	     case 2:
            printf("You selected Electrical Engineering.\n");//case2 is corret
            break;
	     case 3:
            printf("You selected Mechanical Engineering.\n");//case3 is corret 
            break;
	     case 4:
            printf("You selected Civil Engineering.\n");//case4 is corret
            break;
	     case 5:
            printf("You selected Business Administration.\n");//case5 is corret
            break;


        default:
            printf("Invalid choice. Please select a number between 1 and 5.\n");
    }
    


    dfghjkl;
    return 0;
}
