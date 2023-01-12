#include <stdio.h>
struct car
{
    /* data */
    float speed;
    int numOfWheels;
    float weight;
};

int main() {
    struct car matiz;
    printf("number of wheels: %d", matiz.numOfWheels);
};
