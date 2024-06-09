﻿#include <cstdio>
#include <cmath>
#include <iostream>

int main() {
    double S = 0, Sn, E;
    int n = 1;
    printf("Введите E: ");
    std::cin >> E;
    while (true) {
        Sn = std::pow(1.0 / (n + 1), n);
        if (Sn < E) {
            break;
        }
        S += Sn;
        ++n;
    }
    printf("Сумма S: %lf\n", S);
    return 0;
}