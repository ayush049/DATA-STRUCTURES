// For unsorted array

#include<stdio.h>
// Quick sort
int hoarse(int a[],int lo,int hi)
  {
        int p = a[lo];
        int i = lo-1;
        int j = hi+1;
        while(1)
        {
              do{
                  i++;
              }while(a[i]<p);
              do{
                  j--;
              }while(a[j]>p);
              if(i>=j) return j;
              int temp = a[i];
              a[i] = a[j];
              a[j] = temp;
        }
  }

  void qsortt(int a[],int lo,int hi)
  {
      if(lo<hi)
      {
          int  prt = hoarse(a,lo,hi);
          qsortt(a,lo,prt);
          qsortt(a,prt+1,hi);
      }
  }
void mergearray(int a[],int m,int b[],int n)
{
    int c[m+n],i=0,j=0,k=0,c1=0;
    while(i<m&&j<n)
    {
        if(a[i]<b[j])
       {
        i++;
       }
       else if(b[j]<a[i])
       {
        j++;
        }
       else
      { 
        c[k]=a[i];
        k++; 
        i++;
        j++;
        c1++;
      }
    }
   
 for(i=0;i<c1;i++)
 {
    printf("%d ",c[i]);
 }
}
int main()
{
    int n1,n2,i;
    scanf("%d%d",&n1,&n2);
    int a[n1],b[n2];
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);}
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);}
    qsortt(a,0,n1-1);
    qsortt(b,0,n2-1);
    mergearray(a,n1,b,n2);
    return 0;
    //qsortt(a,0,n1-1);
    //qsortt(b,0,n2-1);
    return 0;
}