#include <stdio.h>
#include <math.h>
#include <cs50.h>
 
int main(int argc, const char * argv[]) {
   
    float total = 0, cents, change;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    printf("How much change are you owed? \n");
    change = GetFloat();
    if (change <= .0)
    {
        printf("Bogus amount, try again:\n");
        change = GetFloat();
    }
   
    cents = (int) round(change * 100);
   
    do
    { //nested do-while loop.
        while (cents >= 25) {
            cents = cents - 25;
            quarters++;
            total++;
        }
        while (cents >= 10) {
            cents = cents - 10;
            dimes++;
            total++;
        }
        while (cents >= 5) {
            cents = cents - 5;
            nickels++;
            total++;
        }
        while (cents >= 1) {
            cents = cents - 1;
            pennies++;
            total++;
        }
            }
    while (cents!=0); {
        
    }
    printf("%.f\n", total++);
   return 0;
}
