#include<stdio.h>
#include<conio.h>
int main()
{
    long n,j,k,s=2;
    j=2;
    k=1;
    do
    {
        n=j+k;
        k=j;
        j=n;
        if(n%2==0)
            s=s+n;
    }while(n<=4000000);
    printf("even sum %d",s);
    getch();
}
