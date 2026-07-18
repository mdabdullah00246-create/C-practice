#include <stdio.h>

int main(){
    int a[5];
    printf("Enter 5 number:\n");
    int i;
    for(i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    printf("Elements are:\n");
    for(i=0; i<5; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}