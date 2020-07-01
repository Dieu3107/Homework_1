//This is Program Equation 2
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    float a,b,c,delta,x1,x2;
    printf("Phuong trinh bac hai co dang ax^2+bx+c=0.\n Nhap a: ");
    scanf("%f",&a);
    printf("Nhap b: ");
    scanf("%f",&b);
    printf("Nhap c: ");
    scanf("%f",&c);
    if (a == 0) {
        if (b==0){
            if (c==0)  printf("Phuong trinh vo so nghiem:");
            else printf("Phuong trinh vo nghiem:"); 
        }
        else{
            x1=-b/c;
            printf("Phuong trinh co 1 nghiem %f",x1);
        }
    }
    else{
        delta=b*b-4*a*c;
        if(delta<0)  printf("Phuong trinh vo nghiem:");
        if(delta==0)
        {
            x1=-b/(2*a);
            printf("Phuong trinh co nghiem kep %0.2f",x1);
        }
        if (delta > 0) {
            x1=(-b + sqrt(delta)) / (2*a);
            x2=(-b - sqrt(delta)) / (2*a);
            printf("Phuong trinh co 2 nghiem phan biet %0.2f", x1, x2);
        }
        }
    return 0;
}