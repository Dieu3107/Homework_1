//Phuong trinh trung phuong
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    double a, b, c, delta, x1, x2, x3, x4, xa, xb;
    printf (" Phuong trinh trung phuong co dang ax^4+bx^2+c=0.\nNhap a b c:");
    scanf ("%lf%lf%lf", &a,&b,&c);
    delta= b*b- 4*a*c; 
    if ( a!=0 && b!=0 && c!=0)
    {
        if (delta >0)
        {  
            xa= (-b + sqrt(delta)) / (2*a);
            xb= (-b - sqrt(delta)) / (2*a);
            if (xa >0 && xb >0) {
               printf (" x1= %lf", +sqrt(xa));
               printf (" x2= %lf", -sqrt(xa));
               printf (" x3= %lf", +sqrt(xb));
               printf (" x4= %lf", -sqrt(xb)); 
            }
            else if ( xa >0 && xb ==0) {
                printf(" x1= %lf", +sqrt(xa)) ;
                printf(" x2= %lf", -sqrt(xa)) ;
                printf(" x3= 0"); 
            }
            else if ( xa ==0 && xb >0) {
                printf(" x1= %lf", +sqrt(xb)) ;
                printf(" x2= %lf", -sqrt(xb)) ;
                printf(" x3= 0");  
            }
            else if (xa >0 && xb < 0) {
               printf (" x1= %lf", +sqrt(xa));
               printf (" x2= %lf", -sqrt(xa)); 
            }
            else if (xa <0 && xb >0) {
                printf (" x1= %lf", +sqrt(xb));
                printf (" x2= %lf", -sqrt(xb)); 
            }
            else if ( xa==0 && xb <0) printf (" x1=0"); 
            else if ( xa <0 && xb==0) printf (" x1=0"); 
            else if ( xa ==0 && xb ==0) printf ("x1=0"); 
            else if ( xa <0 && xb <0) printf (" Phuong trinh vo nghiem:"); 
        }
        else if ( delta <0)  printf (" Phuong trinh vo nghiem:");
        else if ( delta ==0) 
        { 
            xa = -b/ (2*a);
            if (xa >0 ) {
                printf (" x1= %lf", +sqrt(xa));
                printf (" x2= %lf", -sqrt(xa)); 
            }
            else if ( xa ==0) printf(" x1=0") ;
            else if ( xa <0) printf (" Phuong trinh vo nghiem:");
        } 
    }  
    else if ( a!=0 && b!=0 && c==0) 
    {
        xa= -b/a ;
        if (xa >0) {
            printf ("x1= %lf", +sqrt(xa));
            printf ("x2= %lf", -sqrt(xa)); 
        }
        else if (xa==0) printf ("x1=0");
        else if (xa <0) printf (" Phuong trinh vo nghiem:"); 
    }
    else if ( a!=0 && b==0 && c!=0) 
    { 
        xa= -c/a;
        if ( xa >0) {
            printf (" x1= %lf", +sqrt(sqrt(xa)));
            printf (" x2= %lf", -sqrt(sqrt(xa))); 
        }
        else if ( xa <0) printf (" Phuong trinh vo nghiem:");
    }
    else if ( a==0 && b!=0 && c!=0)
    { 
        xa= -c/b;
        if (xa >0) {
            printf (" x1= %lf", +sqrt(xa));
            printf (" x2= %lf", -sqrt(xa)); 
        }
        else if ( xa <0) printf (" Phuong trinh vo nghiem:");
    }
    else if ( a==0 && b==0 && c==0) printf (" Phuong trinh dung voi moi x:");
    else if (( a==0 && b!=0 && c==0)||( a!=0 && b==0 && c==0)) printf (" x1=0");
    else if ( a==0 && b==0 && c!=0) printf (" Phuong trinh vo nghiem:");
}