#include<stdio.h>
#include<math.h>
int main()
{
    double m,l,l_final,a1,a2,a3,result1,result2,result3;
    printf("Enter the value of Wevelength in nm(l):");
    scanf("%lf",&l);

    if(l>=380 && l<=750)
    {
        l_final=l/1000;

        printf("\nNow enter the value of m:");
        scanf("%lf",&m);

        printf("\nEnter 1st value of Amplitude in μm(a):");
        scanf("%lf",&a1);

        result1=asin((m*l_final)/a1)*(180/3.1416);

        printf("\nEnter 2nd value of Amplitude in μm(a):");
        scanf("%lf",&a2);

        result2=asin((m*l_final)/a2)*(180/3.1416);

        printf("\nEnter 3rd value of Amplitude μm(a):");
        scanf("%lf",&a3);

        result3=asin((m*l_final)/a3)*(180/3.1416);

        printf("1st result=%.3lf.\n\n",result1);
        printf("2nd result=%.3lf.\n\n",result2);
        printf("3rd result=%.3lf.\n\n",result3);

        if(result1>result2 && result1>result3)
        {
            printf("For the value of 1st amplitude the light will bend most.");
        }
        else if(result2>result1 && result2>result1)
        {
            printf("For the value of 2nd amplitude the light will bend most.");
        }
        else
        {
            printf("For the value of 3rd amplitude the light will bend most.");
        }

    }

    else
    {
        printf("Out of the range.");
    }
    return 0;

}
