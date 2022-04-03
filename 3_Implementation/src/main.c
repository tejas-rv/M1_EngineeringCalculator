#include "../inc/main.h"

void Selection(int ch){
    switch (ch)
    {
    case 1: CGPA();                 break;  //Opening CGPA calculator  
    case 2: SciCalc();              break;  //Opening Scientific Calculator
    case 4: EnggLabCalc();          break;  //Opening Trigonometric calculator
    case 3: TrigCalc();             break;  //Opening Engineering Lab calculator
    default:
        break;
    }
}

void PrintChar(char ch){
    for (int i = 0; i < 100; i++)
        printf("%c",ch);
}

void WelcomeScreen(){
    int choice;
    PrintChar('=');
    printf("\nENGINEERING CALCULATOR\n");
    PrintChar('=');
    printf("\n1. CGPA and SGPA Calculation");
    printf("\n2. Scientific Calculator");
    printf("\n3. Trigonometric Calculator");
    printf("\n4. Engineering Lab Calculator");
    PrintChar('-');
    printf("\nEnter Your Choice:\t");
    scanf("%d",&choice);
    Selection(choice);
    PrintChar('#');
}

int main()
{
    WelcomeScreen(); 
    return 0;
}