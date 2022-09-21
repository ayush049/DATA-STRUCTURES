#include <stdio.h>
int main(){
 int a[10],b[10];
    int m,n;
    printf("Enter the size of first array: ");
    scanf("%d",&m);
    printf("Enter elements of the array: ");
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&n);
    printf("Enter elements of the array: ");
    for(int j=0;j<n;j++){
        scanf("%d",&b[j]);
    }   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("(%d,%d)",a[i],b[j]);
            printf(" ");

        }
    }
}