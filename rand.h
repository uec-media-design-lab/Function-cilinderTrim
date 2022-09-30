#ifndef RAND_H
#define RAND_H

#include <cmath>

inline double random_double() {
    // [0,1)の実数乱数を生成
    return rand() / (RAND_MAX + 1.0);
}
inline double random_double(double min, double max) {
    // [min, max)の実数乱数を生成
    return min + (max-min)*random_double();
}

#endif