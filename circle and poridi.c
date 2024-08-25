#include<stdio.h>
int main()
{
    double r;
    scanf("%lf",&r);
    const double pi = 3.14159265358979323846;
    double area=pi*r*r;
    double p=2*pi*r;
    printf("%.6lf %.6lf",area,p);
}
