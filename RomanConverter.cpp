#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int romanToDecimal(const string &roman)
{
    unordered_map<char, int> map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int result = 0;
    for (int i = 0; i < roman.length(); i++)
    {
        int current = map[roman[i]];
        int next = (i + 1 < roman.length()) ? map[roman[i + 1]] : 0;
        if (current < next)
        {
            result -= current;
        }
        else
        {
            result += current;
        }
    }
    return result;
}

int main()
{
    cout << "Roman: ";
    string roman;
    cin >> roman;
    int decimal = romanToDecimal(roman);
    cout << roman << " = " << decimal << endl;
    return 0;
}