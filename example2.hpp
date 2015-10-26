#include <stdio.h>
#include "simpletypefinder.hpp"


int main(int argc, char const *argv[]) {
    switch (getType(0.5)) {
        case POINTER:
            printf("This is a pointer.\n");
            break;
        case FLOAT32:
        case FLOAT64:
            printf("This is a floating point value.\n");
            break;
        default:
            printf("This is an integer.\n");
            break;
    }
    return 0;
}
