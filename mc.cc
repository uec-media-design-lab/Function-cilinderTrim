#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#include "vec3.h"

// 円柱空間からサンプリングし、体積を求める。

int N = 10000;  // サンプル数

double alpha = 0.01;

double f(double x) {
    // ここに体積を求めたい関数
    return abs(x);
}

bool tof(vec3 p) {
    return p.z()<f(p.x());
}

int main() {
    int count = 0;
    for (int i=0; i<N; i++) {
        vec3 p = random_in_cilinder();
        count += tof(p)==true ? 1 : 0;
    }
    std::cout << std::fixed << std::setprecision(12);
    std::cout << "I = " << double(count)/N << '\n';
}