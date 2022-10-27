// // For unsorted array
// //Symmetric difference
// #include<stdio.h>
// // Quick sort
// int hoarse(int arr[],int lo,int hi){
//         int pivot = arr[lo];
//         int i = lo-1;
//         int j = hi+1;
//         while(1){
//               do{
//                   i++;
//               }while(arr[i]<pivot);
//               do{
//                   j--;
//               }while(arr[j]>pivot);
//               if(i>=j) return j;
//               int temp = arr[i];
//               arr[i] = arr[j];
//               arr[j] = temp;
//         }
//   }
//   void qsortt(int arr[],int lo,int hi)
//   {
//       if(lo<hi)
//       {
//           int  prt = hoarse(arr,lo,hi);
//           qsortt(arr,lo,prt);
//           qsortt(arr,prt+1,hi);
//       }
//   }
// void mergearray(int a[],int m,int b[],int n)
// {
//     int c[m+n],i=0,j=0,k=0;
//     while(i<m&&j<n)
//     {
//         if(a[i]<b[j])
//        {
//         c[k]=a[i];
//         i++;
//         k++;
//        }
//        else if(b[j]<a[i])
//        {
//         c[k]=b[j];
//         j++;
//         }
//        else
//       { 
//         i++;
//         j++;
//       }
//     }
//     while(i<m)
//     {
//         c[k]=a[i];
//         k++;
//         i++;
//     }
//      while(j<n)
//     {
//         c[k]=b[j];
//         k++;
//         j++;
//     }
//  for(i=0;i<k;i++)
//  {
//     printf("%d ",c[i]);
//  }
// }
// int main()
// {
//     int n1,n2,i;
//     scanf("%d%d",&n1,&n2);
//     int a[n1],b[n2];
//     for(i=0;i<n1;i++){
//         scanf("%d",&a[i]);}
//     for(i=0;i<n2;i++){
//         scanf("%d",&b[i]);}
//     qsortt(a,0,n1-1);
//     qsortt(b,0,n2-1);
//     mergearray(a,n1,b,n2);
//     return 0;
//     //qsortt(a,0,n1-1);
//     //qsortt(b,0,n2-1);
//     return 0;
// }


