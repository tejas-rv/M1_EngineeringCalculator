#include "main.h"

void TrigCalc(){
    int choice;
    PrintChar('=');
    printf("\n%*dTRIGONOMETRIC CALCULATOR",-40);
    PrintChar('=');
    printf("\n1.Sin   2.cos   3.tan   4.sinh    5.cosh  6.tanh  7.sininv    8.cosinv    9.taninv");
    printf("\nEnter the Choice:\t");
    scanf("%d",&choice);
    double num;
        printf("\nEnter the number:");
        scanf("%f",&num);

    switch (choice)
    {
        case 1: printf("Result = %f",sin(num)); break;  
        case 2: printf("Result = %f",cos(num)); break;
        case 3: printf("Result = %f",tan(num)); break;
        case 4: printf("Result = %f",sinh(num)); break;
        case 5: printf("Result = %f",cosh(num)); break;
        case 6: printf("Result = %f",tanh(num)); break;
        case 7: printf("Result = %f",asin(num)); break;
        case 8: printf("Result = %f",acos(num)); break;
        case 9: printf("Result = %f",atan(num)); break;

        default:
            printf("\nEnter Correct Selection:\t");
        break;
    }
}