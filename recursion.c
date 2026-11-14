#include <stdio.h>

int sumofn(int n){
    
    if (n<0) {
    printf("Recursion checked: n = %d\n", n);
     fflush(stdout);
    };
    if (n<0) {
    printf("recursion last no.not defined\n");
    };

    if (n==1)
    return 1;
    if (n==0)
    return 0;
    int sum= n + sumofn(n-1);
    return sum;
 
}

int main(){

    int choice,sum;
   printf("enter a number --> ");
   scanf("%d",&choice); // if you have space in scanf like scanf("%d ") it ignores any enter key command
   sum=sumofn(choice);
    printf("sum of first %d natural number is --> %d ",choice,sum);
    printf("\nPress Enter to exit...");
    // 1. Clean out the leftover "Enter" from scanf
    while (getchar() != '\n');   
    // 2. Wait for your fresh "Enter" keypress
    getchar(); 
    return 0;
}

