//thang va nam
#include<stdio.h>
int main ()
{
    int t,n;
    printf ("Nhap vao thang can kiem tra:");
    scanf ("%d",&t);
    printf ("Nhap nam:");
    scanf ("%d",&n);
    switch(t) 
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:  printf (" Thang co 31 ngay! \n"); break;
        case 4:
        case 6:
        case 9:
        case 11:  printf (" Thang co 30 ngay! \n"); break;
        case 2:
        if ( n%4 == 0) printf (" Thang do la thang nhuan co 29 ngay:");
        else printf (" Thang do co 28 ngay:");
        break;
    }
return 0;
}