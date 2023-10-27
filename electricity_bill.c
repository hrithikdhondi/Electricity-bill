#include<stdio.h>
int main(){
    char name[20];
    int choice,units;
    long int meter_num;
    float bill;
    printf("********Electricity Bill********\n");
    printf("1.Urban\n2.Rural\nEnter your choice(1/2):");
    scanf("%d",&choice);
    printf("Enter the your name: ");
    scanf("%s",&name);
    printf("Enter the meter number: ");
    scanf("%ld",&meter_num);
    printf("Enter the number of units consumed: ");
    scanf("%d",&units);
    switch (choice)
    {
        case 1:
        {
            if(units<=50){
                bill = units*1.45;
            }
            else if(units>50 && units<=100){
                bill = 50*1.45 + (units-50)*2.80;
            }
            else if(units>100 && units<=200){
                bill = 50*1.45 + 50*2.80 + (units-100)*3.05;
            }
            else if(units>200 && units<=300){
                bill = 50*1.45 + 50*2.80 + 100*3.05 + (units-200)*4.75;
            }
            else{
                bill = 50*1.45 + 50*2.80 + 100*3.05 + 100*4.75 + (units-300)*5.50;
            }
            printf("Name: %s\n",name);
            printf("Meter Number: %ld\n",meter_num);
            printf("Your Electricity Bill is: %f",bill);
            break;
        }
        case 2:
        {
            if(units<=50){
                bill = units*2.45;
            }
            else if(units>50 && units<=100){
                bill = 50*2.45 + (units-50)*3.80;
            }
            else if(units>100 && units<=200){
                bill = 50*2.45 + 50*3.80 + (units-100)*4.05;
            }
            else if(units>200 && units<=300){
                bill = 50*2.45 + 50*3.80 + 100*4.05 + (units-200)*5.75;
            }
            else{
                bill = 50*2.45 + 50*3.80 + 100*4.05 + 100*5.75 + (units-300)*6.50;
            }
            printf("Name: %s\n",name);
            printf("Meter Number: %ld\n",meter_num);
            printf("Your Electricity Bill is: %f",bill);
            break;
        }
        default:
        {
        printf("INVALID INPUT...");
            break;
        }
    }
    return 0;
}