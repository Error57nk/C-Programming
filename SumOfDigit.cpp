#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int SumOfDigit(int n);

int main() {
	
    int n, s;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    s=SumOfDigit(n);
    printf("%d",s);
    return 0;
}
int SumOfDigit(int n){
    int rem=0, sum=0;
    while(n>0){
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    return sum;
}
