#include <iostream>
#include <vector>
#include <algorithm>
#include "A.h"
#include "B.h"

bool pred(int a, int b) {
    return a > b;
}






int main()
{
    std::vector <int> vec{5, 4, 3, 7, 9, 0};
    for (const auto el : vec) {
        std::cout << el << " ";
    }
    std::cout << std::endl;

    std::sort(vec.begin(), vec.end(), pred);
    for (const auto el : vec) {
        std::cout << el << " ";
    }
    std::cout << std::endl;

     
    std::sort(vec.begin(), vec.end(), [](int a, int b) {
        return a < b;
        });
    //callback - проброс указателя на функцию в функцию (лямбды как пример) C++ QT, JS React
    const auto x = [](int a) {
        std::cout << a << std::endl;
    };
    x(4);

    for (const auto el : vec) {
        std::cout << el << " ";
    }
    std::cout << std::endl;


    //создание 2-у мерного массива stl
   std::vector <std::vector<int>> vec2{{1,2,3}, {4,5,6}};
    for (size_t i = 0; i < vec2.size(); i++) {
        for (size_t j = 0; j < vec2[i].size(); j++) {
            std::cout << vec2[i][j] << " ";
        }
        std::cout << std::endl;
    }
}



//Изучить самостоятельно
//патерны стратегия, pimpl, singleton - антипатеррн
//симантика перемещения
//коллстек