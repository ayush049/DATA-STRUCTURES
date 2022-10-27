#include<stdio.h>
int main()
{
    printf("NAME := AYUSH SHARMA\nROLL. NO. := 2100320100048(CSE A)\n");  
   printf(" AND GATE:- \n");
    for(int i = 0 ;i<2;i++)
    {
          for(int j = 0 ;j<2;j++)
          {
              printf("%d AND %d = %d\n",i,j,i&&j);
          }
    }

    printf("\n OR GATE:- \n");
    for(int i = 0 ;i<2;i++)
    {
          for(int j = 0 ;j<2;j++)
          {
              printf("%d OR %d = %d\n",i,j,i||j);
          }
    }
    printf("\n NOT GATE:- \n");
    for(int i = 0;i<2;i++)
     printf("NOT %d = %d\n", i,!i);
return 0;
}
