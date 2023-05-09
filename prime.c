#include<stdio.h>

int prime (int n)
{
    int i;
    for(i=2;i<n; i++)
    {
        if(n%i != 0)
        return 0;
        else
        return 1;


    }
}
int main(){

int num,res=0;

printf(" enter the number=");
scanf("%d" ,&num);
res=prime(num);
if(res==0)
printf("\n%d is a prime number", num );
else
printf( "\n%d is not a prime number ", num);
return 0;
}































	