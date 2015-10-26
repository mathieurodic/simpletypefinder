#ifndef INCLUDE_SIMPLETYPEFINDER_HPP
#define INCLUDE_SIMPLETYPEFINDER_HPP

#include <stdint.h>

enum Types {
    POINTER = 1,
    UINT8 = 2,
    INT8 = 3,
    UINT16 = 4,
    INT16 = 5,
    UINT32 = 6,
    INT32 = 7,
    UINT64 = 8,
    INT64 = 9,
    FLOAT32 = 10,
    FLOAT64 = 11
};

const char* typeNames[] = {
    "unknown",
    "pointer (void*)",
    "8 bits integer (int8_t)",
    "8 bits unsigned integer (uint8_t)",
    "16 bits integer (int16_t)",
    "16 bits unsigned integer (uint16_t)",
    "32 bits integer (int32_t)",
    "32 bits unsigned integer (uint32_t)",
    "64 bits integer (int64_t)",
    "64 bits unsigned integer (uint64_t)",
    "floating point value (float)",
    "floating point value (double)",
    "floating point value (long double)",
};

// identify pointers

inline Types getType(const void* key_zero) {
    return POINTER;
}

// identify integers

inline Types getType(const uint8_t key_zero) {
    return UINT8;
}

inline Types getType(const int8_t key_zero) {
    return INT8;
}

inline Types getType(const uint16_t key_zero) {
    return UINT16;
}

inline Types getType(const int16_t key_zero) {
    return INT16;
}

inline Types getType(const uint32_t key_zero) {
    return UINT32;
}

inline Types getType(const int32_t key_zero) {
    return INT32;
}

inline Types getType(const uint64_t key_zero) {
    return UINT64;
}

inline Types getType(const int64_t key_zero) {
    return INT64;
}

// identify floating point values

inline Types getType(const float key_zero) {
    return FLOAT32;
}

inline Types getType(const double key_zero) {
    return FLOAT64;
}


#endif // INCLUDE_SIMPLETYPEFINDER_HPP
