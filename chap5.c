
/*int multiply(int a, int b){
    return a*b;
    }


    int main(){
        int x;
        printf("Enter First Number=");
        scanf("%d",&x);
    int y;
    printf("Enter Second number=");S
    scanf("%d",&y);
    int c= multiply(x,y);
    printf("%d",c);*/

//

/*#include <stdio.h>
int prime(int a)
{
    if(a <= 1)
{
    return 0;
}
    int i;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter a Number=");
    scanf("%d", &n);
    int c = prime(n);
    if (c == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}*/

/*#include <stdio.h>

int factorial(int a){
    if(a < 0)
{
    return -1;
}
    int i;
    int f=1;
    for(i=1; i<=a; i++){
        f=f*i;
    }
    return f;
}

int main(){
    int x;
    printf("Enter a Number=");
    scanf("%d",&x);
    int c=factorial(x);
    if(c==-1){
        printf("Factorial not Defined");
    }
    else{
    printf("The factorial of %d is %d",x,c);
    }
    return 0;
}*/

/*#include <stdio.h>
     int average(int a,int b, int c){
        int avg=(a+b+c)/3;
        return avg;
     }
int main(){
    int x;
    printf("Enter first number=");
    scanf("%d",&x);
    int y;
    printf("Enter second number=");
    scanf("%d",&y);
    int z;
    printf("Enter third number=");
    scanf("%d",&z);
    int d= average(x,y,z);
    printf("The average is %d",d);
    return 0;
}*/

/*#include <stdio.h>
     int temp(int c){
        float f=((9*c)/5)+32;
        return f;
     }
int main(){
    float x;
    printf("Enter temperature icn Celsius=");
    scanf("%f",&x);
    float a=temp(x);
    printf("%.2f",a);
    return 0;
}*/

#include <stdio.h>
     int force(int m){
        float f;
        f=m*9.8;
        return f;
     }
int main(){
    float a;
    printf("Enter the mass of body=");
    scanf("%f",&a);
    float c= force(a);
    printf("The force of attraction is %.2f",c);
    return 0;
}