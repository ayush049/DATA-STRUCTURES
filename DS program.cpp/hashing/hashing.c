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

#include <stdio.h>
#include <math.h>
int dat[10];
int DAT[101]={0};
int prime(int n)
{
    if (DAT[n]==1)
    {
        return 0;
    }
    if (n<2)
    {
        DAT[n]=1;
    }
    for(int i=2;i<=(sqrt(n));i++)
    {
        if (DAT[i]==0)
        {
            for(int j=i+i;j<=n;j+=i)
            {
                DAT[j]=1;
            }
        }
    }
    if (DAT[n]==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int h(int key,int m)
{
    return (key%m);
}
int main()
{
    int size = 10; // maximum hash table size
    int n, data, i,m,temp,index,flag;
    printf("\n\nENTER NUMBER OF DATA WANT TO ENTER:");
    scanf("%d", &n);
    printf("\n\nENTER YOUR DATA:\n");
    temp = n;
    while(!prime(temp))
    {
        temp++;
    }
    m=temp--;
    size = m;         // hash table size which is been used

    while (n)
    {
        flag=0;
        scanf("%d", &data);
        for (i = 0; i < size; i++)
        {
            index = (h(data, m) + (i)) % m;
            if (dat[index] == 0)
            {
                dat[index] = data;
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
        printf("NO LOCATION AVAILABLE TO STORE THE %d DATA", data);
        return -1;
        }
        n--;
    }
    printf("\nHASH TABLE:\nINDEX  DATA\n");
    for (i = 0; i < size; i++)
    {
        printf("%5d  %d\n", i, dat[i]);
    }
    return 0;
}
int when_data_value_pair_given()
{
    int size = 10, t, data, location, i, temp;
    printf("\n\nENTER NUMBER OF DATA WANT TO ENTER:");
    scanf("%d", &t);
    printf("\n\nENTER YOUR DATA AND LOCATION:\n");
    while (t)
    {
        scanf("%d%d", &data, &location);
        if (dat[location] == 0)
        {
            dat[location] = data;
        }
        else if (dat[location] != 0)
        {
            temp = location;
            while (dat[temp] != 0)
            {
                temp = temp % 9;
                temp++;
                if (temp == location)
                {
                    printf("NO LOCATION AVAILABLE TO STORE THE %d DATA",data);
                    return -1;
                }
            }
            dat[temp] = data;
        }
        t--;
    }
    printf("\nHASH TABLE:\nINDEX  DATA\n");
    for (i = 0; i < size; i++)
    {
        printf("%5d  %d\n", i, dat[i]);
    }

    return 0;
}