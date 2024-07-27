#include <iostream>
#include <chrono>
#include <vector>
#include <set>

/*
    input:
    3 2 // n & k 
    1 3 5 // координаты остановок
    4 1 // запросы

    a:
    num - координата автобуса
    ближайшая остановка находится по формуле:
        min((right - num), (num - left))
    если расстояния до правой и левой остановки равны

    
    
*/
int main()
{
    unsigned int n, k;
    std::cin >> n >> k;

    std::set<int> * set = new std::set<int>;
    std::vector<int>    * ai  = new std::vector<int>;
    //std::vector<int> * coords = new std::vector<int>;

    for (size_t i = 0; i < n; ++i) // fell a(i)
    {
        int num; 
        std::cin >> num;
        //ai->push_back(num);
        set->insert(num);
    }
    for (size_t i = 0; i < k; ++i) // fell bus coordina 
    {
        int num;
        std::cin >> num;
        if (set->contains(num))
        {
            std::cout << num << " ";
        }    
    }

    std::cout << 0;ds
}