// CHESTS
#include <stdio.h>
#include <math.h>

void prices()
{
    float planetNumber = 12;
    float initialPrice = 200000;
    float ex = 0.9;
    float villageNumber;
    float result;
    
    printf("------------------------------------------------\n");
    printf("Wooden Chest\n");
    for(int i=1; i<=planetNumber; i++){
        result = initialPrice * (pow(i,ex));
        int res = (int)result - (int)result%100000;
        printf("Planet %d: %.0d\n", i, res);
    }
}

int main() {
    prices();
    
    return 0;
}
