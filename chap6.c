#include <stdio.h>

int main(){
    int i;
    int* j= &i;
    printf("The address of i is %p\n",j);
    printf("The address of i is %p",j);
    return 0;
}