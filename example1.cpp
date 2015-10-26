#include <stdio.h>
#include "simpletypefinder.hpp"


int main(int argc, char const *argv[]) {
    printf("type = %s\n", typeNames[getType(8)]);
    printf("type = %s\n", typeNames[getType(42L)]);
    printf("type = %s\n", typeNames[getType(":-)")]);
    printf("type = %s\n", typeNames[getType(0.0)]);
    printf("type = %s\n", typeNames[getType(0.f)]);
    return 0;
}
