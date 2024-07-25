#include <iostream>
#include <vector>
#include <chrono>

// P и V - номера деревьев
// Q и M - расстояние на которое можно отойти от начального дерева
// p = 2, v = -4, q = 4, m = 3;

// X {p+q, p-q} - границы множества Васи
// Y {v+m, v-m} - границы множества Маши
// C {11, 7}    - границы множества пересчений X & Y 
// 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -7 

unsigned int get_count_of_tree(int p, int v, int q, int m)
{   
    int sum {(q+m)*2};

    if (true){
        std::pair<int, int> in1 = {p+q, p-q}; // 6  -2
        std::pair<int, int> in2 = {v+m, v-m}; // 0  -7  // {0, -2}

        //std::cout << in1.first << " "<<  in1.second << " " << 
        // in2.first << " " << in2.second << std::endl;

        if (in1.first > in2.first){  
            if (in2.first < in1.second){
                return sum;
            } else {
                return sum - (in2.first - in1.second) + 1;
            }
        } else {
            if (in1.first < in2.second)
            {
                return sum;
            } else {
                return sum - (in1.first - in2.second) + 1;
            }         
        }        
    }  
}


int main()
{
    int p, v, q, m;
    std::cin >> p >> v >> q >> m;

    auto start = std::chrono::high_resolution_clock::now();    
    std::cout << get_count_of_tree(p, v, q, m) << std::endl;
    auto end = std::chrono::high_resolution_clock::now();    

    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end-start);
    return 0;
}
