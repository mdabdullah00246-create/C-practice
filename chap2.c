#include <stdio.h>

int main(){
    // 2. What data type will 3.0/8 – 2 return? take int and return one by one
    int a = 3.0/8;
    printf("The value of a is %f\n", a);
    
    // 3. Write a program to check whether a number is divisible by 97 or not.
    int b = 715487;
    printf("The value of b%%97 is %d\n", b%97);

    // 4. Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1 
    int x=2, y=3, z=3, k=1;
    float d = 3*x/y-z+k;
    // d=3*2/3-3+1
    // d=6/3-3+1
    // d=2-3+1
    // d=0
    printf("The value of the equation is %f\n", d);

    return 0;
}