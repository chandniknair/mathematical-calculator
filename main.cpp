#include <iostream>
#include "Calculator.h"
 
int main() {
    Calculator calc;
    int result = calc.add(5, 3);
    std::cout << "The result of addition is: " << result << std::endl;
    return 0;
}