// #include <stdio.h>
// #include <math.h>
// int main(){
//     int a[10];
//     int m,n,p=0;
//     printf("Enter the size of first array: ");
//     scanf("%d",&n);
//     printf("Enter elements of the array: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=1;i<2*(pow,m*n);i++){
//         p++;
//     }
//     printf("Number of Elements in the Power set is: %d",p);
// }



#include<stdio.h>
#include<math.h>
// printing powerset	
void printPowerset(int arr[],int n)
{
     int m = pow(2,n);
       printf(" { ");
     for(int i = 0 ;i<m;i++)
     {    int j = i;
          int p = 0;
          printf("{ ");
          while(j>0)
          {
             if(j&1)
              printf("%d ",arr[p]);
              p++;
              j>>=1;
          }
          printf(" } ");
     }
     printf(" }");
}
//driver code
int main()
{
     int n , a[100];
      printf("NAME := AYUSH SHARMA\nROLL. NO. := 2100320100048(CSE A)\n");  
     printf("enter the number of elements in the set :- "); scanf("%d",&n);
     printf("enter the elements of the set:\n");
     for(int i=0;i<n;i++) scanf("%d",a+i); 
   printPowerset(a,n);
return 0;
}