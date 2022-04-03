#include "main.h"

void InvOpAmp(){
    int R1,R2;
    printf("Enter the value of R1 and R2: ");
    scanf("%d%d",&R1,&R2);
    printf("\nGAIN = %f",(1+(R1/R2)));
    return;
}

void NonInvOpAmp(){
    int R1,R2;
    printf("Enter the value of R1 and R2: ");
    scanf("%d%d",&R1,&R2);
    printf("\nGAIN = %f",(-R1/R2));
    return;
}

void PLC(){
    #if 0
    unsigned long int Frequency; 
    int Z0; 
    double Height, dc, Z0e, Z0o, R1, WHratio_se, R2, WHratio_so, WH_ratio, a, b, c, SH_ratio, S, g, d, W_H, W, Eeff, c, l;
    printf("enter the value of Frequency in Hz=");
    scanf("%lu",&Frequency);
    printf("enter the value of h in mm=");
    scanf("%f",&Height);
    printf("enter the coupling value in dB=");
    scanf("%d",&c);
    printf("enter the value of Z0 in ohms=");
    scanf("%d",&Z0);
    printf("enter the value of dc=");
    scanf("%f",&dc);

    Z0e=Z0*(sqrt((1+(10^(-c/20)))/(1-(10^(-c/20)))));
    Z0o=Z0*(sqrt((1-10^(-c/20))/(1+10^(-c/20))));
    R1=Z0e/2;
    WHratio_se = 8*(sqrt((((exp((R1/42.4)*(sqrt(dc+1))))-1)*(((4/dc)+7)/11))+(((1/dc)+1)/0.81)))/(exp((R1/42.4)*(sqrt(dc+1)))-1);
    R2 = Z0o/2;
    WHratio_so = 8*(sqrt((((exp((R2/42.4)*(sqrt(dc+1))))-1)*(((4/dc)+7)/11))+(((1/dc)+1)/0.81)))/(exp((R2/42.4)*(sqrt(dc+1)))-1);
    WH_ratio = (0.78*WHratio_so)+(0.1*WHratio_so);
    a = cosh((pi/2)*WH_ratio);
    b = cosh((pi/2)*WHratio_so);
    c = cosh((pi/2)*WHratio_se);
    SH_ratio = (2/pi)*(acosh((a+b-2)/(b-c)));
    S = SH_ratio*Height;
    g = cosh((pi/2)*SH_ratio);
    d = (((cosh((pi/2)*WHratio_se))*(g+1))+g-1)/2;
    W_H = ((1/pi)*acosh(d))-(SH_ratio/2);
    W = W_H*Height;
    Eeff = ((dc+1)/2)+(((dc-1)/2)*(1/(sqrt(1+12*(Height/W)))));
    l = (3*10^11)/(4*Frequency*sqrt(Eeff));

    printf("\nWidth is: %fmm",W);
    printf("Length is %fmm",l);
    #endif
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
        scanf("%f",&num); 

    switch (choice)
    {
        // case 1: PLC(); break;
        case 1: InvOpAmp(); break;
        case 2: NonInvOpAmp(); break;

        default:
            printf("\nEnter Correct Selection:\t");
        break;
    }
}