// // Aditya Shukla's program

// // #include<stdio.h>
// // int DAT[100];
// // int main(){
// //     int n,i,j=0,k,max=-1;
// //     int a[100][100];
// //     scanf("%d",&n);
// //     for(i=0;i<n;i++){
// //         scanf("%d",&a[j][i]);
// //         scanf("%d",&a[j+1][i]);
// //         if(a[j+1][i]>max)
// //         max=a[j+1][i];
// //     }
// //     max=max+1;
// //     for(i=0;i<n;i++){
// //         k=a[1][i];
// //         if(DAT[k]==0){
// //             DAT[k]=a[0][i];
// //             continue;
// //         }
// //         while(1){
// //             k=(k+1)%max;
// //             if(DAT[k]==0){
// //                 DAT[k]=a[0][i];
// //                 break;
// //             }
// //         }
// //     }
// //     for(i=0;i<max;i++){
// //         if(DAT[i]!=0)
// //         printf("%d\t%d\n",DAT[i],i);
// //     }
// // }



// //Ayush kumar goel's program 

// #include <stdio.h> 
// int main() 
// {   
//     int data[]={1000,2000,3000,4000,5000,6000};
//     int hash_location[]={2,5,9,0,5,9};
//     int dat[10]={0};
//     int size=6;
//     int k=0;
//     for(int i=0;i<10;i++)
//         printf("%d ",dat[i]);
//     printf("\n");
//     for(int i=0;i<size;i++)
//     {
//         if(dat[hash_location[i]]==0)
//             dat[hash_location[i]]=data[i];
//         else
//         {
//             k=hash_location[i];
//             while (1)
//             {
//                 if(k>=10)
//                     k=k-10;
//                 if(dat[k]==0)
//                 {
//                     dat[k]=data[i];
//                     break;
//                 }    
//                 k++;
//             }
//         }
//     }
//     for(int i=0;i<10;i++)
//         printf("%d ",dat[i]);
//     return 0;
// }