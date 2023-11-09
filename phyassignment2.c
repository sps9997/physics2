#include<stdio.h>
#include<math.h>
int main()
{
    double d,theta1=65.0,m1=3,m2=2,lamda1=530,lamda2= 700,theta2,sin_theta2,degree;
    double w=sin(theta1*M_PI/180);

    d=(m1*lamda1)/w;
    sin_theta2=( m2*lamda2)/d;
    theta2=asin(sin_theta2);
    degree=(180/M_PI)*theta2;

    printf("The angle will be %.2lf degree.\n",degree);

    return 0;
}


