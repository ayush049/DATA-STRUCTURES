#include <stdio.h>
#include<math.h>
int main (){
    float b,ts,hra,da,a,pf;
    char A,B,C,g;
    printf("Enter basic salary: ");
    scanf("%f",&b);
    printf("Enter grade");
    scanf("%c",&g);
    hra=0.2*b;
    da=0.5*b;
    pf=0.11*b;
    if (g=='A'){
        a=1700;
    }
    else if(g=='B'){
        a=1500;
    }
    else if (g=='C'){
        a=1300;
    }
    int x;
    ts=hra+da+a-pf;
    x=round(ts);
    printf("%d",x);

    return 0;
}
