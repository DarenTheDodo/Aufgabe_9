// cgrahl3s ; kzande3s
// Es wird aus einer Zahl x und einer Genauigkeit n der sin(x) bestimmt
// Test: x= 1 ; n= 100
// Ergebnis: sin(x)= 0.841471
#include <stdio.h>
#include <math.h>

// Fakultaet Funktion aus Aufgabe 7
double fak(double n) {
    double fak = 1;
    for (int i = 1; i <= n; i++){
        fak = i*fak;
    }
    return fak;
}

int main() {
    int n;
    double x, sinn, zaehler, nenner, sinx;

    printf("x= ");
    scanf("%lf",&x);
    printf("n= ");
    scanf("%i",&n);

    for(int i= 0;i < n;i++){
        nenner = 2*i+1;
        zaehler = pow(x, nenner);
        nenner = fak(nenner);
        sinn = pow(-1,i);
        sinn = sinn*(zaehler/nenner);
        sinx = sinx + sinn;
    }
    printf("sin(x)= %lf\n", sinx);
    return 0;
}