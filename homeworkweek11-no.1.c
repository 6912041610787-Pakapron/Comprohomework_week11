#include <stdio.h>
void inputAndShow()
{
    float math, physics, chemistry;

    printf("Enter Math score: ");
    scanf("%f", &math);

    printf("Enter Physics score: ");
    scanf("%f", &physics);

    printf("Enter Chemistry score: ");
    scanf("%f", &chemistry);

    printf("\nMath = %.2f\n", math);
    printf("Physics = %.2f\n", physics);
    printf("Chemistry = %.2f\n", chemistry);
}

int main(void)
{
    inputAndShow();

    return 0;
}