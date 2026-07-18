#include <stdio.h>

int main(){
    int a[5];
    printf("Enter 5 number:\n");
    int i;
    int sum=0;
    for(i=0; i<5; i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("The sum of numbers is %d",sum);
    // printf("Elements are:\n");
    // for(i=0; i<5; i++){
    //     printf("%d\n",a[i]);
    // }
    return 0;
}