//wap to calculate simple and compound interest for given principal rate time
#include <stdio.h>
#include <math.h> 
int main() {
    float principal, rate, time;
    float SI, CI;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    SI = (principal * rate * time) / 100;
    CI = principal * pow(1 + rate / 100, time) - principal;
    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}
