// tính tổng S(n)
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int n;
    float s=1, giaithua=1, i=1;
    printf ("\nNhap n:");
    scanf ("%d", &n);
    for ( i=1; i<=n; i++)
    {
        giaithua= giaithua*i;
        s= s+ (float)(1/giaithua);
    }
    printf("s=%0.2f",s);
getch();
}