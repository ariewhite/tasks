#include<iostream>
#include<vector>
#include<string>

using namespace std;

string isLuckyNumber(const string & str)
{
    int i = str.find_first_not_of('0');

    if (i == string::npos)
    {
        return "0";
    }
    
    return str.substr(i);
    
    
}


int main()
{
    string number;
    cin >> number;
    cout << isLuckyNumber(number) << endl;
    
}