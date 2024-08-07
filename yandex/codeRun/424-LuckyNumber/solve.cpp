#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <cmath>


using namespace std;


string removeLeadingNulls(const string & str)
{
    int i = str.find_first_not_of('0');

    if (i == string::npos)
    {
        return "0";
    }
    
    return str.substr(i);   
}


bool isLuckyNumber(string number)
{
    string sub1 = number.substr(0, number.size()/2);
    string sub2 = number.substr(number.size()/2, number.size());

    unsigned int sum1 = accumulate(sub1.cbegin(), sub1.cend(), 0, [](int sum, char i){
        return sum + (i - '0');
    });

    unsigned int sum2 = accumulate(sub2.cbegin(), sub2.cend(), 0, [](int sum, char i){
        return sum + (i - '0');
    });
 
    if (sum1 == sum2) {
        return true;
    } else {
        if (sum1 < sum2)
        {
            int diff = sum2 - sum1;
            for (char i : sub1)
            {
                cout << i << " h" << endl;
            }
            return false;
            
        }
    }
    return false;
}

// string sumSubStr(string number, int diff)
// {
//     int lenght = number.size();

//     int maxy = pow(9, lenght/2);
      
// }


    //  123 456
    //   6  15 => 9 = diff
    //  159 456
    //   15  15 = true

int main()
{
    string number;
    cin >> number;
    number = removeLeadingNulls(number);
    cout << isLuckyNumber(number) << endl;
     
}