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

    // int rnum;
    // printf("Enter Number of elements=");
    // scanf("%d",&rnum);

    // int a[rnum];
    // int i;
    // for(i=0; i<rnum; i++){
    //     scanf("%d",&a[i]);
    // }
    // // int n;
    // for(i=(rnum-1); i>=0; i--){
    //     printf("%d\n",a[i]);
    // }

    // int lnum;
    // printf("Enter Number of Elements=");
    // scanf("%d",&lnum);
    // int a[lnum];
    // int i;
    // for(i=0; i<lnum; i++){
    //     scanf("%d",&a[i]);
    // }
    // int lar=a[0];
    // int seclar=a[0];
    // for(i=0; i<lnum; i++){
    //     if(a[i]>lar){
    //         seclar=lar;
    //         lar=a[i];
    //     }
    //     else if( a[i] > seclar && a[i] < lar ){
    //          seclar=a[i];
    //     }
    //     else{
    //        if(a[i]>seclar){
    //         seclar=a[i];
    //        }
    //     }
    // }
    // printf("the second largest number is %d",seclar);

//     int num;
//     printf("Enter number of elements=");
//     scanf("%d", &num);

//     int a[num];
//     int i;
//     int j;
    

//     printf("Enter Elements:\n");

//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (i = 0; i < num; i++)
//     {
//         int count = 1;
//         if (a[i] == -1)
//         {
//             continue;
//         }
//         for (j = i + 1; j < num; j++)
//         {
//             if (a[j] == a[i])
//             {
//                 count++;
//                 a[j]=-1;
//             }
//         }
//         if(count==1){
//             continue;
//         }
//         else{
//         printf("%d occurs %d times\n", a[i], count);

//     }
// }

// int n;
// printf("Enter Number of elements: ");
// scanf("%d",&n);
// int a[n];
// int b[n];
// int i;
// printf("Enter elements : \n");
// for(i=0; i<n; i++){
//     scanf("%d",&a[i]);
// }
// printf("copied elements:\n");
// for(i=0; i<n; i++){
//     b[i]=a[i];
//     printf("%d\n",b[i]);
// }
// 
/*int n1;
printf("Enter size of first array:");
scanf("%d",&n1);
int a[n1];
int i;
for(i=0; i<n1; i++){
    scanf("%d",&a[i]);
}
int n2;
printf("Enter size of second array:");
scanf("%d",&n2);
int b[n2];
for(i=0; i<n2; i++){
    scanf("%d",&b[i]);
}
int c[n1+n2];
for(i=0; i<n1; i++){
    c[i]=a[i];
}
for(i=0; i<n2; i++){
    c[n1+i]=b[i];
}
printf("Merged Array\n");
for(i = 0; i < n1 + n2; i++)
{
    printf("%d\n", c[i]);
}*/

int n;
printf("Enter the size of Array:");
scanf("%d",&n);
int a[n];
int i;
for(i=0; i<n; i++){
    scanf("%d",&a[i]);
}
int position;
printf("Positon:");
scanf("%d",&position);
int value;
printf("Enter Value:");
scanf("%d",&value);
    if(position>=0 && position<=n)
{
    for(i=n; i>position; i--)
    {
        a[i] = a[i-1];
    }
    a[position] = value;
    n++;
} 
for(i=0; i<n; i++){
    printf("%d ",a[i]);
}
    return 0;
}