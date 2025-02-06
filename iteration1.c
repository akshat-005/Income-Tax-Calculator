#include<stdio.h>

int main()
{
    printf("\t\t\t*****Welcome to INCOME TAX CALCULATOR*****\n\n");
    int income, tax, amount, net;
    printf("Enter your annual income (in ruppees): ");
    scanf("%d",&income);
    int regime;
    printf("\n Choose your tax regime: \n \tEnter 1 for OLD TAX REGIME. \n \tEnter 2 for NEW TAX REGIME. \n");
    scanf("%d",&regime);
    if (regime==1){
        if (income>0 && income<=250000){
            printf("Your income tax is nil.");
        }
        else if (income>250000 && income<=500000){
            income=income-250000;
            tax=(5.00/100.00)*income;
            printf("Your total tax amount is %d.\n",tax);
        }
        else if (income>500000 && income<=1000000){
            income=income - 50000;
            tax=12500 + ((20.00/100.00)*(income-500000));
            printf("Your total tax amount is %d.\n", tax);
        }
        else if (income>1000000){
            income=income-250000;
            if (income>250000 && income<=500000){

                income=income-250000;
                tax=tax+12500;
            }
            else if (income>500000 && income<=1000000){
            income=income - 50000;
            tax=12500 + ((20.00/100.00)*(income-500000));
            printf("Your total tax amount is %d.\n", tax);
            }
        }


    }


    return 0;
}
