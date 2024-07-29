#include <iostream>
#include <vector>
#include <algorithm>

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
        auto lt = std::lower_bound(ai.cbegin(), ai.cend(), num);

        if (lt != ai.cend() && *lt == num){
            std::cout << std::distance(ai.cbegin(), lt) + 1 << std::endl;
        }
        else if (lt == ai.cbegin()){
            
            std::cout << 1 << std::endl;
        }
        else if(lt == ai.cend()){       
            std::cout << n << std::endl;
        }
        else{
            int index = std::distance(ai.cbegin(), lt) + 1; lt--; // right
            int leftIndex = std::distance(ai.cbegin(), lt) + 1; // left

            int leftDistance = abs(*lt - num); lt++;
            int rightDistance = abs(*lt - num);

            if (leftDistance == rightDistance) {
                std::cout << leftIndex << std::endl;
            } else if (rightDistance > leftDistance) {
                
                std::cout << leftIndex << std::endl;
            } else {
                std::cout << index << std::endl;
            }        
        }        
    }
}
