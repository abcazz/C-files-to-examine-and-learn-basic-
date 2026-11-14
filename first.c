#include <stdio.h>
int square(int x) { 
    return x * x; 
}

int voidprogram() { 
    int squaringnumber;
    int choice;
for (;;) {
    printf("the number you want to square --> "); 
    scanf("%d", &squaringnumber); 
    
    int result = square(squaringnumber); 
    printf("Square of your %d is: %d\n", squaringnumber, result);
    printf("Do you want to continue? (1 for yes, 0 for no) --> ");
    scanf("%d", &choice); 
    printf("your choice is: %d\n --> ",choice);
    if (!choice) {
        break;
    }
}
printf("Goodbye!!");
}

int main() { 
    voidprogram();
    printf("\nPress Enter to exit...");
    // 1. Clean out the leftover "Enter" from scanf
    while (getchar() != '\n');   
    // 2. Wait for your fresh "Enter" keypress
    getchar(); 
    return 0; 
}