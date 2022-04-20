/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("WELCOME To FOODIE'S CORNER\n\n");
    
    int a;
    level:
    printf("WHAT WOULD YOU LIKE TO DEVOUR\n");
    printf("Enter 1 for STARTERS\n");
    printf("Enter 2 for SOUPS\n");
    printf("Enter 3 for SOUTH INDIAN TIFFIN\n");
    printf("Enter 4 for SOUTH INDIAN LUNCH\n");
    printf("Enter 5 for DRINKS\n");
    
    scanf("%d",&a);
     switch(a){
         case 1:
         printf(".................................M E N U.................................\n");
         printf("ITEM CODE......................Description..........................Price\n");
         printf("[01]---------------------------Paneer 65----------------------------70.00\n");
         printf("[02]---------------------------Gobi 65------------------------------60.00\n");
         printf("[03]---------------------------Mushroom 65--------------------------70.00\n");
         printf("[04]---------------------------Dragon Paneer------------------------90.00\n");
         break;
         
         case 2:
         printf(".................................M E N U.................................\n");
         printf("ITEM CODE......................Description..........................Price\n");
         printf("[05]---------------------------Tomato Soup--------------------------50.00\n");
         printf("[06]---------------------------Creamy Veggie Soup-------------------60.00\n");
         printf("[07]---------------------------Sweet Corn Soup----------------------60.00\n");
         break;
         
         case 3:
         printf(".................................M E N U.................................\n");
         printf("ITEM CODE......................Description..........................Price\n");
         printf("[10]---------------------------Poori(3 nos)-------------------------40.00\n");
         printf("[11]---------------------------Masala Dosa--------------------------50.00\n");
         break;
         
         case 4:
         printf(".................................M E N U.................................\n");
         printf("ITEM CODE......................Description..........................Price\n");
         printf("[12]---------------------------Full Meals--------------------------100.00\n");
         printf("[13]---------------------------Mini Meals---------------------------80.00\n");
         printf("[14]---------------------------Variety Rice-------------------------80.00\n");
         printf("[15]---------------------------Fried Rice---------------------------90.00\n");
         break;
         
         case 5:
         printf(".................................M E N U.................................\n");
         printf("ITEM CODE......................Description..........................Price\n");
         printf("[16]---------------------------Coffee-------------------------------20.00\n");
         printf("[17]---------------------------Tea----------------------------------20.00\n");
         printf("[18]---------------------------Coca Cola----------------------------30.00\n");
         printf("[19]---------------------------Fanta--------------------------------30.00\n");
         printf("[20]---------------------------Sprite-------------------------------30.00\n");
         break;
         
         default:
         printf("Invalid Choice Try again!\n");
     }
     
     printf("Enter chosen Item Code\n");
     int item_code;
     scanf("%d",&item_code);
     
     float cost, amount;
     if(item_code==01) cost=70.00;
     else if(item_code==02) cost=60.00;
     else if(item_code==03) cost=70.00;
     else if(item_code==04) cost=90.00;
     else if(item_code==05) cost=50.00;
     else if(item_code==06) cost=60.00;
     else if(item_code==07) cost=60.00;
     else if(item_code==10) cost=40.00;
     else if(item_code==11) cost=50.00;
     else if(item_code==12) cost=100.00;
     else if(item_code==13) cost=80.00;
     else if(item_code==14) cost=80.00;
     else if(item_code==15) cost=90.00;
     else if(item_code==16) cost=20.00;
     else if(item_code==17) cost=20.00;
     else if(item_code==18) cost=30.00;
     else if(item_code==19) cost=30.00;
     else if(item_code==20) cost=30.00;
     
     printf("Please enter the Quantity\n");
     int quantity;
     scanf("%d",&quantity);
     
     amount=cost*quantity;
     
     printf("Thanks for ordering\nYour Bill is %.2f\nEnjoy your Meal\n",amount);
     exit (0);
    return 0;
}