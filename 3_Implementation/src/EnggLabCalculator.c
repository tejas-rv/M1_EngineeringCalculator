#include "../inc/main.h"

void InvOpAmp(){
    float R1,R2;
    printf("Enter the value of R1 and R2: ");
    scanf("%f%f",&R1,&R2);
    printf("\nGAIN = %f",(1+(R1/R2)));
    return;
}

void NonInvOpAmp(){
    float R1,R2;
    printf("Enter the value of R1 and R2: ");
    scanf("%f%f",&R1,&R2);
    printf("\nGAIN = %f",(-R1/R2));
    return;
}

void EnggLabCalc(){
    int choice;
    PrintChar('=');
    printf("\nENGINEERING LAB CALCULATOR");
    PrintChar('=');
    // printf("\n1. Parallel line Coupler length Calculator");
    printf("\n1. Inverting Opamp Gain Calculator");
    printf("\n2. Non-Inverting Opamp Gain Calculator");
    printf("\nEnter the Choice:\t");
    scanf("%d",&choice);
    double num;
        printf("\nEnter the number:");
        scanf("%lf",&num); 

    switch (choice)
    {
        case 1: InvOpAmp(); break;
        case 2: NonInvOpAmp(); break;

        default:
            printf("\nEnter Correct Selection:\t");
        break;
    }
}