/*
 * Input weight(in kg) and height(in meters) → calculate BMI and classify:
 *	BMI = weight / (height * height)
 *		BMI < 18.5 → Underweight
 *		18.5–24.9 → Normal
 *		25–29.9 → Overweight
 *		30+ → Obese
 */

#include <stdio.h>

int main()
{
    float weight, height;
    float BMI;

    printf("Enter Weight(in kg) : ");
    scanf("%f", &weight);

    printf("Enter Height(in meters) : ");
    scanf("%f", &height);

    BMI = weight / (height * height);

    if (BMI < 18.5)
        printf("UnderWeight");
    else if (BMI > 18.5 && BMI < 24.9)
        printf("Normal");
    else if (BMI > 25 && BMI < 29.9)
        printf("Overweight");
    else
        printf("Obese");
    return 0;
}