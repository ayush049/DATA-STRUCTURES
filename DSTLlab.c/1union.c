// #include<stdio.h>
// int main(){
//     int a[10],b[10],c[20];
//     int m,n,c2=0;
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
//     int i=0,j=0,k=0;
//     while(i<m && j<n){
//         if(a[i]<b[j]){
//             c[k]=a[i];
//             i++;
//             k++;
//         }
//         else if(a[i]>b[j]){
//             c[k]=b[j];
//             j++;
//             k++;
//         }  
//         else{
//             c[k]=a[i];
//             i++;
//             k++;
//             j++;
//             c2++;
//         }
//     }
//     while(i<m){
//         c[k]=a[i];
//         i++;
//         k++;
//     }
//     while(j<n){
//         c[k]=b[j];
//         j++;
//         k++;
//     }
//     printf("union of arrays is: ");
//     printf("\n");
//     for(i=0;i<m+n-c2;i++){
//         printf("%d",c[i]);
//     } 
//     return 0;
// }

#include<stdio.h>	
    // for sorting
void swap(int *a,int *b)
{
      int c = *a;
      *a = *b;
      *b = c;
}
int partiton(int arr[] , int l ,int h)
{
     int p = arr[h] , i = l-1;
      for(int j = l ; j<h;j++)
      {
         if(arr[j] < p)
         {   
             swap(&arr[++i] , &arr[j]);
              
         }  
      }
      swap(&arr[h] , &arr[i+1]);
      return i+1;

}
void sort(int arr[],int l , int h)
{
      if(l<h)
      {
             int p = partiton(arr,l,h);
             sort(arr,l,p-1);
             sort(arr,p+1,h);
      }
}

 // printing union
void printUnion(int arr[] , int n,int brr[],int m)
{
      int i = 0 , j=0;
      while(i<n && j<m)
      {
         if(arr[i] < brr[j])
         {
             printf("%d ",arr[i++]);
         }
         else if(arr[i] > brr[j]) printf("%d ",brr[j++]);
         else printf("%d ",arr[i++]) , j++;
      }
      while(i<n) printf("%d ",arr[i++]);
      while(j<m) printf("%d ",brr[j++]);
}
// driver code
int main()
{  
    int n , m , a[100] , b[100];
    printf("NAME := AYUSH SHARMA \nROLL. NO. := 2100320100048(CSE A)\n");  
    printf("enter the number of elements in the first set :- "); scanf("%d",&n);
    printf("enter the elements of the first set:\n");
    for(int i = 0 ;i<n;i++) scanf("%d",a+i);
        printf("enter the number of elements in the second set :- "); scanf("%d",&m);
    printf ("enter the elements of the second set:\n");
    for(int i = 0 ;i<m;i++) scanf("%d",b+i);
        sort(a,0,n-1) , sort(b,0,m-1);  // sorting the sets to apply two pointer method.
    printf("Union of these two sets is :- \n");
    printUnion(a,n,b,m);
return 0;
}
