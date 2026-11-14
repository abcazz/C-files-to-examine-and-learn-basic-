#include <stdio.h>

static int coca_cola_stock = 5;
static int sprite_stock = 5;
static int chips_stock = 5;
static int chocolate_stock = 5;

void voidprogram();

int main()
{
    int program_choice;
        printf("Greetings!!\n");
        printf("which item do you want\n");
        printf("press c for coca_cola\n");
        printf("press s for sprite\n");
        printf("press h for chips\n");
        printf("press o for chocolate\n");
       

    do{
    printf("press 1 to play the game and 0 to end it --> " );
    scanf("%d",&program_choice);
    if(program_choice==1)
    {
    printf("enter your choice for the item --> ");
    voidprogram();
    
    }
    else if (program_choice!=0){
        printf("Invalid choice! Please choose 1 or 0.\n");
    } 
    }
    while (program_choice != 0);
    
        printf("press enter to exit the application -->");
    
            // 1. Clean out the leftover "Enter" from scanf
        while (getchar() != '\n');   
        // 2. Wait for your fresh "Enter" keypress
        getchar();

 return 0;
}

void voidprogram()
{
char * item_name = NULL;
int * item_stock = NULL;
char item_choice;
char coca_cola='c';
char sprite='s';
char chips='h';
char chocolate='o';

scanf(" %c",&item_choice); // if you have space in scanf like scanf("%d ") it ignores any enter key command
if (item_choice==coca_cola)
{item_name="coca_cola"; item_stock=&coca_cola_stock;}
else if (item_choice==sprite)
{item_name="sprite"; item_stock=&sprite_stock;}
else if(item_choice==chips)
{item_name="chips"; item_stock=&chips_stock;}
else if (item_choice==chocolate)
{item_name="chocolate"; item_stock=&chocolate_stock;}
if (item_name != NULL)
{
    if (*item_stock == 0)
    {
        printf("Sorry, %s stock is over.\n", item_name);
    }
    else
    {
        printf("Congratulations, you got your item %s\n",item_name);
        --*item_stock;
        if (*item_stock == 0)
        {
            printf("%s stock is now over.\n", item_name);
        }
        else
        {
            printf("%s stock remaining: %d\n", item_name, *item_stock);
        }
    }
}
else
{printf("Sorry item not avaliable\n");}
}
