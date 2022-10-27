// // For unsorted array
// // #include<stdio.h>
// // // Quick sort
// // int hoarse(int arr[],int lo,int hi)
// //   {
// //         int pivot = arr[lo];
// //         int i = lo-1;
// //         int j = hi+1;
// //         while(1)
// //         {
// //               do{
// //                   i++;
// //               }while(arr[i]<pivot);
// //               do{
// //                   j--;
// //               }while(arr[j]>pivot);
// //               if(i>=j) return j;
// //               int temp = arr[i];
// //               arr[i] = arr[j];
// //               arr[j] = temp;
// //         }
// //   }
// //   void qsortt(int arr[],int lo,int hi)
// //   {
// //       if(lo<hi)
// //       {
// //           int  prt = hoarse(arr,lo,hi);
// //           qsortt(arr,lo,prt);
// //           qsortt(arr,prt+1,hi);
// //       }
// //   }
// // void mergearray(int a[],int m,int b[],int n)
// // {
// //     int c[m+n],i=0,j=0,k=0;
// //     while(i<m&&j<n)
// //     {
// //         if(a[i]<b[j])
// //        {
// //         c[k]=a[i];
// //         i++;
// //         k++;
// //        }
// //        else if(b[j]<a[i])
// //        {
// //         j++;
// //         }
// //        else
// //       { 
// //         i++;
// //         j++;
// //       }
// //     }
// //     while(i<m)
// //     {
// //         c[k]=a[i];
// //         k++;
// //         i++;
// //        // c1++;
// //     }
// //  for(i=0;i<k;i++)
// //  {
// //     printf("%d ",c[i]);
// //  }
// // }
// // int main()
// // {
// //     int n1,n2,i;
// //     scanf("%d%d",&n1,&n2);
// //     int a[n1],b[n2];
// //     for(i=0;i<n1;i++){
// //         scanf("%d",&a[i]);}
// //     for(i=0;i<n2;i++){
// //         scanf("%d",&b[i]);}
// //     qsortt(a,0,n1-1);
// //     qsortt(b,0,n2-1);
// //     mergearray(a,n1,b,n2);
// //     return 0;
// //     //qsortt(a,0,n1-1);
// //     //qsortt(b,0,n2-1);
// //     return 0;
// // }

// #include<stdio.h>
// // for sorting	
// void swap(int *a,int *b)
// {
//       int c = *a;
//       *a = *b;
//       *b = c;
// }
// int partiton(int arr[] , int l ,int h)
// {
//      int p = arr[h] , i = l-1;
//       for(int j = l ; j<h;j++)
//       {
//          if(arr[j] < p)
//          {   
//              swap(&arr[++i] , &arr[j]);
              
//          }  
//       }
//       swap(&arr[h] , &arr[i+1]);
//       return i+1;

// }
// void sort(int arr[],int l , int h)
// {
//       if(l<h)
//       {
//              int p = partiton(arr,l,h);
//              sort(arr,l,p-1);
//              sort(arr,p+1,h);
//       }
// }

// // printing the difference
//  void printDifference(int arr[],int n,int brr[],int m)
// {
//       int i = 0 , j=0;
//       while(i<n && j<m)
//       {
//            if(arr[i] < brr[j]) printf("%d ",arr[i++]);
//            else if(arr[i] > brr[j]) j++;
//            else i++,j++;
//       }
//    while(i<n) printf("%d ",arr[i++]);

// }
// // driver code 
// int main()
// {    int n , m , a[100] , b[100];
//     printf("NAME := AYUSH SHARMA\nROLL. NO. := 2100320100048(CSE A)\n");  
//     printf("enter the number of elements in the first set :- "); scanf("%d",&n);
//     printf("enter the elements of the first set:\n");
//     for(int i = 0 ;i<n;i++) scanf("%d",a+i);

//      printf("enter the number of elements in the second set :- "); scanf("%d",&m);
//     printf("enter the elements of the second set:\n");
//     for(int i = 0 ;i<m;i++) scanf("%d",b+i);
//       sort(a,0,n-1) , sort(b,0,m-1);  // sorting the sets to apply two pointer method.
      
      
//     printf("Difference of first and second set is :- \n");
//     printDifference(a,n,b,m);
    
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

// printing the Symmetric difference
 void printSymDifference(int arr[],int n,int brr[],int m)
{
      int i = 0 , j=0;
      while(i<n && j<m)
      {
           if(arr[i] < brr[j]) printf("%d ",arr[i++]);
           else if(arr[i] > brr[j]) printf("%d ",brr[j++]);
           else i++,j++;
      }
      while(i<n) printf("%d ",arr[i++]);
      while(j<m) printf("%d ",brr[j++]);
}

// driver code 
int main()
{    int n , m , a[100] , b[100];
     printf("NAME :=AYUSH SHARMA \nROLL. NO. := 2100320100048(CSE A)\n");  
    printf("enter the number of elements in the first set :- "); scanf("%d",&n);
    printf("enter the elements of the first set:\n");
    for(int i = 0 ;i<n;i++) scanf("%d",a+i);

     printf("enter the number of elements in the second set :- "); scanf("%d",&m);
    printf("enter the elements of the second set:\n");
    for(int i = 0 ;i<m;i++) scanf("%d",b+i);
      sort(a,0,n-1) , sort(b,0,m-1);  // sorting the sets to apply two pointer method.
      
      
    printf("Symmetric Difference of first and second set is :- \n");
    printSymDifference(a,n,b,m);
    
}



