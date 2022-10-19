// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

void prices()
{
    float price;
    
    
    printf("Enter first building price: ");
    scanf("%f", &price);
        
    for (int i = 1; i < 9; i++){
            printf("\nWheel reward %d: %.f", i, price * i * pow((1.30),i/1.4));
    }
    
    printf("\n\n----------------------------------------------\n");
    
        for (int i = 1; i < 9; i++){
            printf("\nWheel reward %d: %.f", i, round(price * i * pow((1.30),i/1.4)/1000)*1000);
        }
}

int main() {
    prices();
    
    return 0;
}
