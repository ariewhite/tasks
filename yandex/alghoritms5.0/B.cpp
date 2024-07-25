#include <iostream>
#include <chrono>


unsigned short solve(const short s11, const short s12,\
const short s21, const short s22, const unsigned short c)
{
    if (c == 1){
        if ((s11 + s21) == (s12 + s22)){
            if (s11 >= s12){
                return 0;
            } else {
                return 1;
            }
        } else {
            return (s12 + s22) - (s11 + s21);
        }
    } else {
        return (s12 + s22) - (s11 + s21) + 1;
    }
    
    return 0;
}
int main()
{
    std::string * col;
    unsigned short s11, s12, s21, s22, c;
    std::cin >> s11 >> *col >> s12;
    std::cin >> s21 >> *col >> s22;
    std::cin >> c;

    delete col;
 
    auto start = std::chrono::high_resolution_clock::now(); 

    std::cout << solve(s11, s12, s21, s22, c) << std::endl;

    auto end = std::chrono::high_resolution_clock::now();    

    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end-start);
    return 0;
}
