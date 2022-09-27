#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>

// 円柱空間からサンプリングし、体積を求める。

int N = 10000;  // サンプル数

double alpha = 0.01;

inline double pdf(double x) {
    // ここにサンプルされる確率
    return 0;
}
inline double f(double x) {
    // ここに体積を求めたい関数
    return 0;
}
sample_cilinder() {
    return;
}

int main() {
    auto sum = 0.0;
    for (int i=0; i<N; i++) {
        auto x = sample_cilinder();
        sum += f(x);
    }
    std::cout << std::fixed << std::setprecision(12);
    std::cout << "I = " << sum/N << '\n';
}