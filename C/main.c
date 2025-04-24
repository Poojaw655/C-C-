#include <stdio.h>
#include <stdlib.h>
#include "pattern.h" 


void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void pauseExecution() {
    printf("\nPress Enter to continue...");
    getchar();
    getchar();
}

int main() {
    int choice, size;
    
    while (1) {
        clearScreen();
        
        // Display menu
        printf("===== PATTERN PRINTING PROGRAM =====\n");
        printf("1. Pyramid Pattern\n");
        printf("2. Number Triangle Pattern\n");
        printf("3. Star Pattern\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        
        scanf("%d", &choice);
        
        if (choice == 4) {
            printf("Thank you for using the Pattern Printing Program!\n");
            break;
        }
        
        if (choice < 1 || choice > 4) {
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
            pauseExecution();
            continue;
        }
        
        printf("Enter size/height of the pattern: ");
        scanf("%d", &size);
        
        if (size <= 0) {
            printf("Please enter a positive number for the size!\n");
            pauseExecution();
            continue;
        }
        
        clearScreen();
        
        switch (choice) {
            case 1:
                printf("Pyramid Pattern (Height: %d)\n", size);
                printPyramid(size);
                break;
            case 2:
                printf("Number Triangle Pattern (Rows: %d)\n", size);
                printNumberTriangle(size);
                break;
            case 3:
                printf("Star Pattern (Rows: %d)\n", size);
                printStarPattern(size);
                break;
        }
        
        pauseExecution();
    }
    
    return 0;
}
