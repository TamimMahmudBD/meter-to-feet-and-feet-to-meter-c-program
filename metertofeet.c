#include <stdio.h>

int main() {
    float meters, feet;
    int input;
    
    // Prompt user for input in meters
    printf("Press 1 for Meter to Feet and Press 2 for Feet to Meter: ");
    scanf("%d", &input);

    // Calculation and Display result
    if(input ==1){
        printf("Enter distance in Meters: ");
        scanf("%f", &meters);
        feet = meters * 3.28084;
        printf("%.2f meters is equal to %.2f feet.\n", meters, feet);
    }else if(input == 2){
        printf("Enter distance in Feet: ");
        scanf("%f", &feet);
        meters = feet * 0.3048;
        printf("%.2f Feet is equal to %.2f meters.\n", feet, meters);
    }else{
        printf("Error: Invalid input! Please enter 1 or 2.\n");
    }
    return 0;
}
