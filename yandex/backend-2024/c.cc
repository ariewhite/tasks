#include <iostream>
#include <vector>
#include <unordered_set>

using std::cout;
using std::cin;

int main()
{
    int n, ans;
    cin >> n;

    std::vector<int> A(n);
    std::vector<int> B(n);
    std::vector<int> C(n);

    std::vector<int> uniq_merge;

    for (size_t i = 0; i < n; ++i)
    {
        cin >> A[i];     
    }
    for (size_t i = 0; i < n; ++i)
    {
        cin >> B[i];
    } 
    for (size_t i = 0; i < n; ++i)
    {
        cin >> C[i];
    }
  
    //A 7 6 1 2 3 4 5       1 3 5
    //B 7 4 3 1 1 5 5   ->  3 1 5
    //C 2 6 5 4 1 7 3       5 1 3

    //A 7 6 * 2 * 4 *    -> 
    //B 7 4 * 1 * 5 *
    //C 2 6 * 4 * 7 *

    std::unordered_set<int> sA(A.begin(), A.end());
    std::unordered_set<int> sB(B.begin(), B.end());
    std::unordered_set<int> sC(C.begin(), C.end());
    
    std::unordered_set<int> temp;

    for (size_t i = 0; i < n; ++i)
    {
        if (!(sB.count(A[i]) && sC.count(A[i])))
        {
            temp.insert(A[i]);
        }
        
    }

    for (int x : temp)
    {
        for (size_t i = 0; i < n; ++i)
        {
            if (A[i] == x || B[i] == x || C[i] == x)
            {
                ans++;
            }
            
        }
    }

    cout << ans;

    return 0;
}