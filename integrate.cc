// 錐台を利用した積分(精度は低い？)
// https://www.sci.kagoshima-u.ac.jp/shigeta/AC-NumericalDiffAndInt-Basic.pdf

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define X_MIN -1.0
#define X_MAX 1.0
#define DIV_NUM 100000000

double f(double x) {
    // ここに体積を求めたい関数
    return abs(x);
}
int main() {
    double integral_x6_h = 0.0;
    double h = (X_MAX - X_MIN) / DIV_NUM;
    double x = X_MIN;
    for (int i=0; i<DIV_NUM; i++) {
        double A = 2*sqrt(1-x*x);
        double a = 2*sqrt(1-(x+h)*(x+h));
        double B = f(x);
        double b = f(x+h);
        integral_x6_h += (a*B+A*b+2*(a*b+A*B));
        x += h;
    }
    std::cout << std::fixed << std::setprecision(12);
    std::cout << "prob = " << integral_x6_h * h / (6.0 * M_PI) << '\n';
}