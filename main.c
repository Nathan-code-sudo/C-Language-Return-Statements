#include <stdio.h>
#include <stdlib.h>

double cube (double num){
    double result = num * num * num;
    return result;
}


int main()
{
    printf("Answer: %f\n", cube( 5.0));
    return 0;
}
