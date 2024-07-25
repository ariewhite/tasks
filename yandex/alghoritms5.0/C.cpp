#include <iostream>
#include <chrono>
#include <vector>

int main()
{
    unsigned int n;
    std::cin >> n;

    std::vector<int> * nums = new std::vector<int>;

    for (size_t i = 0; i < n; ++i)
    {
        unsigned int x;
        std::cin >> x;
        nums->push_back(x);
    }

    /*
        space = 1
        tab = 4
        backspace = -1
        
        x - число от 0 до 10^9
        -> x разложить на компоненты из 1, 4 и -1
    */
    
    
}