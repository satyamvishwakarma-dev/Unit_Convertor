//Made By Satyam Vishwakarma
//Made By Satyam Vishwakarma

#include <stdio.h>


int main()
{
    int unit, tempIn, tempOut, massIn, massOut, volIn, volOut, repeat;
    float temp, mass, vol;
    do
    {
        printf("What unit is you want to convert: \n0 -> Weight\n1 -> Temperature\n2 -> Volume\n");
        scanf("%d", &unit);
        if (unit == 0) // Weight
        {
            printf("What is the INPUT UNIT: \n0 -> MilliGram\n1 -> Gram\n2 -> KiloGram\n");
            scanf("%d", &massIn);
            printf("Enter the value of weight: ");
            scanf("%f", &mass);
            printf("What is the OUTPUT UNIT: \n0 -> MilliGram\n1 -> Gram\n2 -> KiloGram\n");
            scanf("%d", &massOut);
            //-----------
            switch (massIn)
            {
            case 0: // Milligram
                switch (massOut)
                {
                case 0:
                    printf("The Value is already converted.\n");
                    break;
                case 1:
                    printf("The Weight in Gram is %.2f\n", mass / 1000);
                    break;
                case 2:
                    printf("The weight in Kilogram is %.2f\n", mass / 1000000);
                    break;
                }
                break;
                //-----------
            case 1: // Gram
                switch (massOut)
                {
                case 0:
                    printf("The weight in milligram is %.2f\n", mass * 1000);
                    break;
                case 1:
                    printf("No conversion Needed\n");
                    break;
                case 2:
                    printf("The weight in Kilogram is %.2f\n", mass / 1000);
                    break;
                }
                break;
                //-----------
            case 2: // Kg
                switch (massOut)
                {
                case 0:
                    printf("The weight in milligram is %.2f\n", mass * 1000000);
                    break;
                case 1:
                    printf("The weight in gram is %.2f\n", mass * 1000);
                    break;
                case 2:
                    printf("No conversion needed\n");
                    break;
                }
                break;
                //-----------
            default:
                printf("Invalid Input\n");
                break;
            }
        }
        else if (unit == 1) // Temp
        {
            printf("What is the INPUT UNIT: \n0 -> Celsius\n1 -> Fahrenheit\n2 -> Kelvin\n");
            scanf("%d", &tempIn);
            printf("Enter the value of Temperature: ");
            scanf("%f", &temp);
            printf("What is the OUTPUT UNIT: \n0 -> Celsius\n1 -> Fahrenheit\n2 -> Kelvin\n");
            scanf("%d", &tempOut);
            //-----------
            switch (tempIn)
            {
            case 0: // Celsius
                switch (tempOut)
                {
                case 0:
                    printf("No conversion needed\n");
                    break;
                case 1:
                    printf("The Temperature in Fahrenheit is %.2f\n", (temp * (9 / 5.0) + 32));
                    break;
                case 2:
                    printf("The Temperature in Kelvin is %.2f\n", temp + 273.15);
                    break;
                }
                break;
                //-----------
            case 1: // Fah
                switch (tempOut)
                {
                case 0:
                    printf("The Temperature in Celsius is %.2f\n", (temp - 32) * (5 / 9.0));
                    break;
                case 1:
                    printf("No conversion needed\n");
                    break;
                case 2:
                    printf("The Temperature in Kelvin is %.2f\n", (temp - 32) * (5 / 9.0) + 273.15);
                    break;
                }
                break;
                //-----------
            case 2: // kelvin
                switch (tempOut)
                {
                case 0:
                    printf("The Temperature in Celsius is %.2f\n", temp - 273.15);
                    break;
                case 1:
                    printf("The Temperature in Fahrenheit is %.2f\n", (temp - 273.15) * (9 / 5.0) + 32);
                    break;
                case 2:
                    printf("No conversion needed\n");
                    break;
                }
                break;
            default:
                printf("Invalid Input\n");
                break;
            }
        }
        //-----------
        else if (unit == 2) // Vol
        {
            printf("What is the INPUT UNIT: \n0 -> MilliLitre\n1 -> Litre\n2 -> Kilolitre\n");
            scanf("%d", &volIn);
            printf("Enter the value of Volume: ");
            scanf("%f", &vol);
            printf("What is the OUTPUT UNIT: \n0 -> MilliLitre\n1 -> Litre\n2 -> Kilolitre\n");
            scanf("%d", &volOut);
            switch (volIn)
            {
            case 0: // MilliLitre
                switch (volOut)
                {
                case 0:
                    printf("No conversion needed\n");
                    break;
                case 1:
                    printf("The Volume in Litre is %.2f\n", vol / 1000);
                    break;
                case 2:
                    printf("The Volume in Kilolitre is %.2f\n", vol / 1000000);
                    break;
                }
                break;
            case 1: // litre
                switch (volOut)
                {
                case 0:
                    printf("The Volume in Millilitre is %.2f\n", vol * 1000);
                    break;
                case 1:
                    printf("No conversion needed\n");
                    break;
                case 2:
                    printf("The Volume in Kilolitre is %.2f\n", vol / 1000);
                    break;
                }
                break;
                //-----------
            case 2: // kilolitre
                switch (volOut)
                {
                case 0:
                    printf("The Volume in Millilitre is %.2f\n", vol * 1000000);
                    break;
                case 1:
                    printf("The Volume in Litre is %.2f\n", vol * 1000);
                    break;
                case 2:
                    printf("No conversion needed\n");
                    break;
                }
                break;

            default:
                printf("Invalid Input\n");
                break;
            }
        }
        printf("\n");
        printf("Do you the convert again?\n1 -> Yes\n0 -> No\n");
        scanf("%d", &repeat);
    } while (repeat == 1);
    printf("Thank You for using!!\n");
    return 0;
}