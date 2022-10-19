// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

void combinations()
{
    float villagenumber;
    float buildingPrice;
    float multiplier = 1.86;
    float bag3, bag2, bag1, coin3, coin2, coin1;
    
    printf("Enter village number: ");
    scanf("%f", &villagenumber);
    printf("Enter first building price: ");
    scanf("%f", &buildingPrice);
    
    bag3 = buildingPrice * multiplier;
    bag2 = bag3 / 5;
    bag1 = bag3 / 12;
    coin3 = bag3/ 5.5;
    coin2 = coin3 / 3;
    coin1 = coin3 / 8;
    
    printf("\n3x bag: %.f", bag3);
    printf("\n2x bag: %.f", bag2);
    printf("\n1x bag: %.f", bag1);
    printf("\n3x coin: %.f", coin3);
    printf("\n2x coin: %.f", coin2);
    printf("\n1x coin: %.f", coin1);
    
    printf("\n--------------------------------------------------------\n");
    printf("\nFormated\n");
    printf("\n3x bag: %.f", round(bag3/1000)*1000);
    printf("\n2x bag: %.f", round(bag2/1000)*1000);
    printf("\n1x bag: %.f", round(bag1/1000)*1000);
    printf("\n3x coin: %.f", round(coin3/1000)*1000);
    printf("\n2x coin: %.f", round(coin2/1000)*1000);
    printf("\n1x coin: %.f", round(coin1/1000)*1000);
}

int main() {
    combinations();
    
    return 0;
}
