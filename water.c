#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("A typical shower uses 1.5 gallons of water per minute!\n\n");
    
    printf("A gallon is 128 ounces.\n\n");
    
    printf("A bottle of water is around 16 ounces.\n\n");
    
    printf("How many minutes was your shower this morning?: ");
    int x = GetInt();
    
    printf("A %d minute shower could fill %d bottles of water!\n" , x, x * 192 / 16 );    
}
