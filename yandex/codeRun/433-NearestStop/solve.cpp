#include <iostream>
#include <vector>

int main()
{
    unsigned int n, k;
    std::cin >> n >> k;

    std::vector<int> ai;
    std::vector<int> coords;

    for (size_t i = 0; i < n; ++i) // fell a(i)
    {
        int num;
        std::cin >> num;
        ai.push_back(num);
    }
    for (size_t i = 0; i < k; ++i)
    {
        int num;
        std::cin >> num;
        coords.push_back(num);

    }
    
    for (int num : coords)
    {
        auto it = std::lower_bound(ai.cbegin(), ai.cend(), num);

        if (it != ai.cend() && *it == num){
            std::cout << std::distance(ai.cbegin(), it) + 1 << std::endl;
        }
        else if (it == ai.cbegin()){
            std::cout << 1 << std::endl;
        }
        else if(it == ai.cend()){       
            std::cout << n << std::endl;
        }
        else{
            int index = std::distance(ai.cbegin(), it);
            std::cout << index << std::endl;
        }        
    }
}

// 1 3 5 7 9 10 13 14 17 20 24 25 27 28