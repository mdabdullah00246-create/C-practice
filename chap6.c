#include <stdio.h>

// int sum(int ,int);
// int sum(int a, int b){
//     return a+b;
// }
// int sum(int*,int*);
// int sum(int*a,int*b){
//     *a=8;
//     return *a+*b;
// }
void swap(int * , int*);
void swap(int*a , int*b){
    int temp= *a;
    *a=*b;
    *b=temp;   
}
int main(){
   
    int x=80;
    int y=90;
    printf("The Value of x and y Before swap is\nx=%d\ny=%d\n",x,y);
    swap(&x,&y);
    printf("The value of x and y after swap is\nx=%d\ny=%d\n",x,y);
    return 0;
}