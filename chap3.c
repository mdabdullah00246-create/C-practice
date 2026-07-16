#include <stdio.h>

int main()
{
    /*Quick Quiz: Write a program to find grade of a student given his marks based on below:
   90 – 100 => A
   80 – 90 => B
   70 – 80 => C
   60 – 70 => D
   50 – 60 => E
   <50
   => F*/

    int marks_qq;
    printf("Enter The Marks=");
    scanf("%d",&marks_qq);
    if(marks_qq>100 || marks_qq<0){
        printf("INVALID MARKS");
    }
    else if(marks_qq>=90){
        printf("Grade A");
    }
    else if(marks_qq>=80){
        printf("Grade B");
    }
    else if(marks_qq>=70){
        printf("Grade C");
    }
    else if(marks_qq>=60){
        printf("Grade D");
    }
    else if(marks_qq>=50){
        printf("Grade E");
    }
    else{
        printf("FAIL!");}




    /*2. Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.*/

    int marks_1;
    printf("Enter Marks of First Subject=");
    scanf("%d", &marks_1);
    int marks_2;
    printf("Enter Marks of Second Subject=");
    scanf("%d", &marks_2);
    int marks_3;
    printf("Enter Marks of Third Subject=");
    scanf("%d", &marks_3);
    int avg = marks_1 + marks_2 + marks_3;
    if (marks_1 > 100 || marks_1 < 0 || marks_2 > 100 || marks_3 > 100 || marks_2 < 0 || marks_3 < 0)
    {
        printf("INVALID MARKS YOU HAVE ENTERRED");
    }
    else if (marks_1 < 33 || marks_2 < 33 || marks_3 < 33)
    {
        printf("FAILED!");
    }
    else if (avg < 40)
    {
        printf("FAILED!");
    }
    else
    {
        printf("PASSED");
    }

    /*3. Calculate income tax paid by an employee to the government as per the slabs
    mentioned below:
    Income Slab    Tax
    2.5 – 5.0L     5%
    5.0L - 10.0L   20%
    Above 10.0L    30% */

    float income;
    printf("Enter The Income=");
    scanf("%f",&income);
    if(income<250000){
        printf("YOU HAVE NOT TO PAY ANY TAX!");
    }
    else if(income>250000 && income<500000){
        printf("YOU TOTAL TAX IS %.2f", income*0.2);
    }
    else{
        printf("YOUR TOTAL  TAX IS %.2f", income*0.3);
    }

    /*4. Write a program to find whether a year entered by the user is a leap year or not.
    Take year as an input from the user.*/

    int year;
    printf("Ente a Year=");
    scanf("%d",&year);
    if(year%400==0){
        printf("LEAP YEAR");
    }
    else if(year%100==0){
        printf("NOT LEAP YEAR");
    }
    else if (year%4==0)
    {
        printf("LEAP YEAR ");
    }
    else{
        printf("NOT LEAP YEAR");
    }

    // 6. Write a program to find greatest of four numbers entered by the user.
    int num_1;
    int num_2;
    int num_3;
    int num_4;
    printf("Enter First Number=");
    scanf("%d",&num_1);
    printf("Enter Second Number=");
    scanf("%d",&num_2);
    printf("Enter Third Number=");
    scanf("%d",&num_3);
    printf("Enter Fourth Number=");
    scanf("%d",&num_4);
    if(num_1>num_2 && num_1>num_3 && num_1>num_4){
        printf("%d is Greatest", num_1);
    }
    if(num_2>num_1 && num_2>num_3 && num_2>num_4){
        printf("%d is Greatest", num_2);
    }
    if(num_3>num_2 && num_3>num_1 && num_3>num_4){
        printf("%d is Greatest", num_3);
    }
    else{
        printf("%d is Greatest",num_4);
    }
    // Same Question using  Nested if else.
    int num_01;
    int num_02;
    int num_03;
    int num_04;
    printf("Enter First Number=");
    scanf("%d", &num_01);
    printf("Enter Second Number=");
    scanf("%d", &num_02);
    printf("Enter Third Number=");
    scanf("%d", &num_03);
    printf("Enter Fourth Number=");
    scanf("%d", &num_04);
    if (num_01 > num_02)
    {
        if (num_01 > num_03)
        {
            if (num_01 > num_04)
            {
                printf("%d is Greatest");
            }
            else
            {
                printf("%d is Greatest", num_04);
            }
        }
        else
        {
            printf("%d is Greatest", num_03);
        }
    }
    else
    {
        printf("%d is Greatest", num_02);
    }

    // Write A C program to printf middle number.

    int num_001;
    int num_002;
    int num_003;
    printf("Enter First Number=");
    scanf("%d", &num_001);
    printf("Enter Second Number=");
    scanf("%d", &num_002);
    printf("Enter Third Number=");
    scanf("%d", &num_003);
    if(num_001>num_002 && num_002>num_003){
        printf("%d is Middle Number",num_002);
    }
    else if(num_002>num_001 && num_001>num_003){
        printf("%d is Middle Number",num_001);
    }
    else{
        printf("%d is Middle",num_003);
    }

    // WRITE A C PROGRAM CODE TO BPRINT ASCENDING ORDER NUMBER.

    int num_1_1;
    int num_2_2;
    int num_3_3;
    printf("Enter First Number=");
    scanf("%d", &num_1_1);
    printf("Enter Second Number=");
    scanf("%d", &num_2_2);
    printf("Enter Third Number=");
    scanf("%d", &num_3_3);
    if (num_1_1 > num_2_2 && num_2_2 > num_3_3)
    {
        printf("DESCENDING ORDER --- %d,%d,%d", num_1_1, num_2_2, num_3_3);
    }
    else if (num_1_1 > num_3_3 && num_3_3 > num_2_2)
    {
        printf("DESCENDING ORDER --- %d,%d,%d", num_1_1, num_3_3, num_2_2);
    }
    else if (num_2_2 > num_1_1 && num_2_2 > num_3_3)
    {
        printf("DESCENDING ORDER --- %d,%d,%d", num_2_2, num_1_1, num_3_3);
    }
    else if (num_2_2 > num_3_3 && num_3_3 > num_1_1)
    {
        printf("DESCENDING ORDER --- %d,%d,%d", num_2_2, num_3_3, num_1_1);
    }
    else if (num_3_3 > num_2_2 && num_2_2 > num_1_1)
    {
        printf("DESCENDING ORDER --- %d,%d,%d", num_3_3, num_2_2, num_1_1);
    }
    else
    {
        printf("DESCENDING ORDER --- %d,%d,%d", num_3_3, num_1_1, num_2_2);
    }

/*Body Temperature Checker
Input: temperature (integer)
Rules:
temp < 35 → Low Temperature
35 to 37 → Normal
38 to 39 → Fever
40 or more → High Fever*/ 

int temperature;
printf("Enter Temperature");
scanf("%d",&temperature);
if(temperature<35){
    printf("LOW FEVER!");
}
else if(temperature>=40){
    printf("HIGH FEVER!");
}
else if(temperature>=38){
    printf("FEVER");
}
else if(temperature>=35){
    printf("NORMAL!");
}
else{
    printf("FEVER");
}
int balance = 4500;
    int choice=0;
    int control=1;
    while(control=1){
    printf("\n----------------\n");
    printf("      ATM       \n");
    printf("----------------\n");
    printf("1.Check Balance\n");
    printf("2.Cash Withdrawl\n");
    printf("3.Exit\n");
    printf("Enter Your Choice=");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Your Balance is %d", balance);
        break;
    case 2:
        int amount;
        printf("Enter Amount=");
        scanf("%d",&amount);
        if (amount > balance)
        {
            printf("INSUFFICIENT AMOUNT!!");
        }
        else
        {
            printf("Withdrawling Cash!\n");
            printf("MONEY LEFT=%d", balance - amount);
            balance=balance-amount;
        }
        break;
    case 3:
    control=0;
        printf("-----EXIT!------");
        break;
    default:
        printf("PLEASE ENTER A VALID CHOICE!");
        break;
    } 
}

    return 0;
}