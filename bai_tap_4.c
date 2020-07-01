// tính e mu x
#include<stdio.h>
#include<math.h>
float luythua(int n, int k) {
    int pow = 1 ;
    for (int i = 1; i <= k; i++)
        pow *= n;
    return (float)pow ;
}
 
float giaithua(int n) {
    int giaithua = 1 ;
    for (int i = 1; i <= n; i++)
        giaithua *= i ;
    return (float)giaithua ;
}
 
float fun(int x) {
    float s= 0 ;
    int i = 0 ;
    while (luythua(x, i) / giaithua(i) > 1e-10 ) {
        s += luythua(x, i) / giaithua(i) ;
        i++ ;
    }
    return s ;
}
 
int main() {
    int x;
    printf("Nhap x: ") ;
    scanf("%d", &x) ;
    printf("s= %4f",fun(x)) ;
    return 0 ;
}