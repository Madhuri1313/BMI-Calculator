#include <stdio.h>

int main()
   {
    float height, weight,heightm, BMI;

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    printf("Enter your height (cm): ");
    scanf("%f", &height);
    
    if (weight <= 0)
   {
    printf("ERROR: Weight must be greater than 0\n");
    return 0;
   }


    if (height <= 0) 
    {
        printf("ERROR: Height must be greater than 0\n");
        return 0;
    }

    heightm=height/100;
    BMI = weight / (heightm * heightm);

    printf("\nYour BMI: %.2f\n", BMI);
    printf("CATEGORY: ");

    if (BMI < 18.5) 
    {
        printf("Underweight");
    } else if 
       (BMI >= 18.5 && BMI < 25)
    {
        printf("Normal");
    }
    else if (BMI >=25 && BMI < 30)
    {
        printf("Overweight");
    } else
    {
        printf("Obese");
    }

    return 0;
}
