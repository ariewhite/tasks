#include <iostream>
#include <string>
#include <vector>
#include <chrono>

    /*
    0 <= a,b <= 10000 1 < n <= 10000
	if a > b -> return yes
    else
        пусть x - макс (логичное) кол-во задач на одного человека в команде b
        x = n
        тогда мин кол-во участников в комадне minb = b + x - 1 / x

        макс кол-во участников в команде mina = a(каждый челове по 1й задаче)
    ==> if mina > minb -> return yes
        else return no
    */
    


int main() 
{
    int n, a, b;
    std::cin >> a >> b >> n;
    //std::cin >> b;
    //std::cin >> n;
    
    // auto start = std::chrono::high_resolution_clock::now();

    int f = (a + n - 1)/n;
    int s = (b + n - 1)/n;

    if (a > b){
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    // auto end = std::chrono::high_resolution_clock::now();
    // std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end-start) << std::endl;
    return 0;     
} 
