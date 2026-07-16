#include <stdio.h>

int main()
{
   // Write a c program print 10 natural number.
   /*int n_num=1;
   while(n_num<=10){
      printf("%d\n",n_num);
      n_num++;
   }*/
   // write na cprogram to print 10 even natural number.
   /*int e_num=2;
   while(e_num<=10){
      printf("%d\n",e_num);
      e_num=e_num+2;
   }*/
   // write na cprogram to print 10 even natural number.
   /*int o_num=1;
   while(o_num<=10){
      printf("%d\n",o_num);
      o_num=o_num+2;
   }*/
   // Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial
   // counter is initialized to 0.
   /*int n1=0;
   while(n1<=10){
       printf("%d\n",n1+10);
       n1++;
   }*/

   // 1. Write a program to print multiplication table of a given number n.

   /*int t_num;
   printf("Enter the number of you want Table:");
   scanf("%d",&t_num);
   printf("The table of %d is written below:\n",t_num);
   for(int i_t=1; i_t<=10; i_t++){
      printf("%d*%d=%d\n",t_num,i_t,t_num*i_t);
   }*/

   // 2. Write a program to print multiplication table of 10 in reversed order. \

   /*int t_num1;
   printf("Enter the number of you want Table:");
   scanf("%d",&t_num1);
   printf("The table of %d is written below in reverse:\n",t_num1);
   for(int i_t1=10; i_t1>0; i_t1--){
      printf("%d*%d=%d\n",t_num1,i_t1,t_num1*i_t1);
   }*/

   // 5. Write a program to sum first ten natural numbers using while loop.
   /*int s_n=1;
   int sum=0;
   while(s_n<=10){
      sum=sum+s_n;
      s_n++;
   }
      printf("%d",sum);*/

   // Write a program to calculate the factorial of a given number using a for loop.

   /*int f_num;
   printf("'Enter Number you  want factorial'");
   scanf("%d",&f_num);
   int i_f;
   int f = 1;
   for (i_f = 1; i_f <= f_num; i_f++)
   {
      f = f * i_f;
   }
   printf("The Facrorial of %d is : %d ",f_num,f);*/

// Reverse a Number.
/*int r_num;
printf("Enter a number");
scanf("%d",&r_num);
int d_rev;
for(; r_num!=0; r_num=r_num/10){
    d_rev=r_num%10;
   printf("%d",d_rev);
}
int r_num1;
printf("Enter a number");
scanf("%d",&r_num1);
int d_rev1;
int rev1=0;
for(; r_num1!=0; r_num1=r_num1/10){
    d_rev1=r_num1%10;
    rev1=rev1*10+d_rev1;}
    printf("%d",rev1);*/
    
/*int p_num;
printf("Enter a number=");
scanf("%d",&p_num);
int p1_num=0;
while(p1_num<=p_num){
   int p2_num=1;
   while(p2_num<=p1_num){
      printf("%d",p2_num);
      p2_num++;
   }
p1_num++;
printf("\n");
}*/
int pa_num;
printf("Enter a number=");
scanf("%d",&pa_num);
int pa1_num=pa_num;
while(pa1_num>0){
   int pa2_num=1;
   while(pa2_num<=pa1_num){
      printf("%d",pa2_num);
      pa2_num++;
   }
pa1_num--;
printf("\n");   
}

   return 0;
}