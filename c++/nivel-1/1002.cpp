#include <iostream>
#include <iomanip>

int main()
{
    const double pi = 3.14159;
    double raio, area;
    std::cin >> raio;
    std::cout << "A="<< std::fixed << std::setprecision(4) << pi*raio*raio << std::endl;

    return 0;
}
