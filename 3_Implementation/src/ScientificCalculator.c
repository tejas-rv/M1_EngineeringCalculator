#include "../inc/main.h"

int factorial(int number){
    int num = number;
    if(num < 0)
        return -1;
        
    int i=1,p=1;

    for(i=1;i<=num;i++)
            p=p*i;

    return p;
}

int permutation(int n, int r){
return(factorial(n)/factorial(n-r));
}

int combination(int n, int r){
return(factorial(n)/(factorial(n-r) * factorial(r)));
}

void SciCalc(){
    int choice;
    PrintChar('=');
    printf("\n%*dSCIENTIFIC CALCULATOR",-40);
    PrintChar('=');
    printf("\n1.Factorial   2.Permutation   3.Combination   4.Logarithm");
    printf("\nEnter the Choice:\t");
    scanf("%d",&choice);
    switch (choice)
    {
        int n,r;
        double num, result;

    case 1:
        printf("\nEnter the Number:\t");
        scanf("%d",&n);
        printf("\n%d",factorial(n));            
        break;  
    
    case 2:
        printf("\nEnter value of n & r in nPr:\t");
        scanf("%d%d",&n,&r); 
        printf("%dP%d = %d",n,r,permutation(n,r));          
        break; 

    case 3:
        printf("\nEnter value of n & r in nCr:\t");
        scanf("%d%d",&n,&r); 
        printf("%dC%d = %d",n,r,combination(n,r));          
        break; 

    case 4:
        printf("\nEnter the number:\t");
        scanf("%f",&num);
        result = log(num);
        printf("log(%.1f) = %.2f", num, result);           
        break; 

    default:
        printf("\nEnter Correct Selection:\t");
        break;
    }
}