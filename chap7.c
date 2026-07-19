#include <stdio.h>

int main()
{
    // int a[5];
    // printf("Enter 5 number:\n");
    // int i;
    // int sum=0;
    // for(i=0; i<5; i++){
    //     scanf("%d",&a[i]);
    //     sum=sum+a[i];
    // }
    // printf("The sum of numbers is %d",sum);
    // printf("Elements are:\n");
    // for(i=0; i<5; i++){
    //     printf("%d\n",a[i]);
    // }
    // int n;
    // printf("Enter Number of numbers=");
    // scanf("%d",&n);
    // int a[n];
    // printf("Enter all numbers:");
    // int i;
    // for(i=0; i<n; i++){
    //     scanf("%d",&a[i]);
    // }
    // if(a[0]>a[1] && a[0]>a[2] && a[0]>a[3] && a[0]>a[4]){
    //     printf("%d is Largest",a[0]);
    // }
    // else if(a[1]>a[0] && a[1]>a[2] && a[1]>a[3] && a[1]>a[4]){
    //     printf("%d is Largest",a[1]);
    // }
    // else if(a[2]>a[0] && a[2]>a[1] && a[2]>a[3] && a[2]>a[4]){
    //     printf("%d is Largest",a[2]);
    // }
    // else if(a[3]>a[0] && a[3]>a[2] && a[3]>a[1] && a[3]>a[4]){
    //     printf("%d is Largest",a[3]);
    // }
    // else{
    //     printf("%d is Largest",a[4]);
    // }
    // int largest=a[0];
    // for(i=1; i<n; i++){
    //     if(a[i]>largest){
    //         largest=a[i];
    //     }
    // }
    // printf("Largest Number is %d", largest);
    // int n;
    // printf("Enter  Number of Numbers=");
    // scanf("%d",&n);
    // int a[n];
    // int i;
    // for(i=0; i<n; i++){
    //     scanf("%d",&a[i]);
    // }
    //  int smallest=a[0];
    // for(i=0; i<n; i++){
    //     if(a[i]<smallest){
    //         smallest=a[i];
    //     }
    // }
    // printf("%d is smallest",smallest);
    
    // int n;
    // printf("Enter  number of numbers");
    // scanf("%d",&n);
    // int a[n];
    // int i;
    // for(i=0; i<n; i++){
    //     scanf("%d",&a[i]);
    // }
    // int odd=0;
    // int even=0;
    // for(i=0; i<n; i++){
    //     if(a[i]%2==0){
    //         even++;
    //     }
    //     else{
    //         odd++;
    //     }
    // }
    // printf("The Number of Even is %d\n",even);
    // printf("The Number of Odd is %d\n",odd);
    
    // int num;
    // printf("Enter Number of elements=");
    // scanf("%d",&num);
    // int a[num];
    // int i;
    // for(i=0; i<num; i++){
    //     scanf("%d",&a[i]);
    // }
    // int search;
    // printf("Enter number of search=");
    // scanf("%d",&search);
    // int found=0;
    // for(i=0; i<num; i++){
    //     if(search==a[i]){
    //         found++;
    //         break;
    //     }
    // }
    // if(found==1){
    //     printf("%d found at index %d",a[i],i);
    // }
    // else{
    //     printf("Invalid Search!");
    // }

    int rnum;
    printf("Enter Number of elements=");
    scanf("%d",&rnum);

    int a[rnum];
    int i;
    for(i=0; i<rnum; i++){
        scanf("%d",&a[i]);
    }
    // int n;
    for(i=(rnum-1); i>=0; i--){
        printf("%d\n",a[i]);
    }

        return 0;
}