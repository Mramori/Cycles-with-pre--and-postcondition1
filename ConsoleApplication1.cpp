#include <iostream>
#include <cmath> 

int main() {
    const double coefficient = 4.57;
    const double decayConstant = 0.73;

    double timeValues[] = { 0.2, 0.4, 0.6, 0.8, 1.0, 2.0, 3.0, 4.0, 5.0 };
    const int size = sizeof(timeValues) / sizeof(timeValues[0]);

    std::cout << "t (мин)   g (кг)" << std::endl;
    std::cout << "------------------" << std::endl;

    for (int i = 0; i < size; ++i) {
        double t = timeValues[i];
        double g = coefficient * (1 - exp(-decayConstant * t));
        std::cout << t << "       " << g << std::endl;
    }

    return 0;
}
