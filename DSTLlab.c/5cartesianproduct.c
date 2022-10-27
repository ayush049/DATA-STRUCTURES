// #include <stdio.h>
// int main(){
//  int a[10],b[10];
//     int m,n;
//     printf("Enter the size of first array: ");
//     scanf("%d",&m);
//     printf("Enter elements of the array: ");
//     for(int i=0;i<m;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter size of second array: ");
//     scanf("%d",&n);
//     printf("Enter elements of the array: ");
//     for(int j=0;j<n;j++){
//         scanf("%d",&b[j]);
//     }   
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("(%d,%d)",a[i],b[j]);
//             printf(" ");
//         }
//     }
// }

#include<stdio.h>

//printing the cartesian product

void printCartesian(int arr[],int n,int brr[],int m)
{   printf("{ ");
     for(int i = 0 ;i<n;i++)
     {  
          for(int j = 0 ;j<m;j++)
          {     printf(" ( ");
              printf("%d , %d" , arr[i],brr[j]);
               printf(" ) ");
          }
         
     }
     printf(" }");
}


//driver code

int main()
{
 int n , m , a[100] , b[100];
      printf("NAME := AYUSH SHARMA \nROLL. NO. := 2100320100048(CSE A)\n"); 
    printf("enter the number of elements in the first set :- "); scanf("%d",&n);
    printf("enter the elements of the first set:\n");
    for(int i = 0 ;i<n;i++) scanf("%d",a+i);

     printf("enter the number of elements in the second set :- "); scanf("%d",&m);
    printf("enter the elements of the second set:\n");
    for(int i = 0 ;i<m;i++) scanf("%d",b+i);

    printf("Cartesian Product := \n");

    printCartesian(a,n,b,m);



    return 0;
}
