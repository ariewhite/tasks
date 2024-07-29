#include <iostream>
#include <vector>

/*
    input:
    3 2 // n & k
    1 3 5 // координаты остановок
    4 1 // запросы

    решение:
    запишем все данные с координатами остановок в вектор, т.к данные отсортированы
    бинарный поиск для поиска ближайших остановок так и просится
    сложность O(log(N))
    
    алгортим обработки нового добавленно запроса:
    1. бинарный поиск исчет ближайший элемент к num
    2. если элементов слева нет, то выводится ближайший правый
       если элементы слева есть, выводится ближайший левый
       


*/
int main()
{
    unsigned int n, k;
    std::cin >> n >> k;

    std::vector<int> *ai = new std::vector<int>;
    std::vector<int> * coords = new std::vector<int>;
    // std::set<int> * set = new std::set<int>;

    for (size_t i = 0; i < n; ++i) // fell a(i)
    {
        int num;
        std::cin >> num;
        ai->push_back(num);
    }
    for (size_t i = 0; i < k; ++i)
    {
        int num;
        std::cin >> num;
        coords->push_back(num);

    }
    
    for (size_t i = 0; i < k; ++i) // fell bus coordinates
    {
        int num = coords->at(i);

        int low = 0; 
        int high = ai->size() - 1;
        int close = -1;
        int closeRight = -1;

        while (low <= high)
        {
            int middle = low + (high - low) / 2;
            //std::cout << "m - " << middle << " ";

            if (num == (*ai)[middle]){
                close = middle;
                break;
            }
            if (num > (*ai)[middle]){
                close = middle;
                low = middle + 1;
            }
            else {
                high = middle - 1;
            }
        }
        //std::cout << std::endl;

        closeRight = close + 1;

        if (close == -1) {
            std::cout << (closeRight < ai->size() ? closeRight + 1 : 1) << std::endl;
        } else if (closeRight < ai->size() && abs((*ai)[closeRight] - num) < abs((*ai)[close] - num)) {
            std::cout << closeRight + 1 << std::endl;
        } else {
            std::cout << close + 1 << std::endl;
        }
    }

    delete ai;
    delete coords;
}

// 1 3 5 7 9 10 13 14 17 20 24 25 27 28