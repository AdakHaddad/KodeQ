Roman_converter1.cpp
//roman to decimal converter?
#include <iostream>
#include <string>
using namespace std;
// Declare romanType
class romanType{
public: 
    void printRoman(char romanNum);
    int printDecimal(int& total);
    int convertRoman(int& total);
    void setRoman(char& roman);
    romanType(char);
    char romanNum[6];
    int decimal;
    int total;
};

int convertRoman{
    for (int i = 0; i < 6; i++)
    {
        if (romanNum[i] == 'I')
        {
            decimal = 1;
        }
        else if (romanNum[i] == 'V')
        {
            decimal = 5;
        }
        else if (romanNum[i] == 'X')
        {
            decimal = 10;
        }
        else if (romanNum[i] == 'L')
        {
            decimal = 50;
        }
        else if (romanNum[i] == 'C')
        {
            decimal = 100;
        }
        else if (romanNum[i] == 'D')
        {
            decimal = 500;
        }
        else if (romanNum[i] == 'M')
        {
            decimal = 1000;
        }
        else
        {
            decimal = 0;
        }
        total = total + decimal;
    }
    return total;
}
int main(){
    romanType roman;
    char romanNum;
    int total;
    cout << "Enter a roman numeral: ";
    cin >> romanNum;
    roman.setRoman(romanNum);
    roman.printRoman(romanNum);
    roman.convertRoman(total);
    roman.printDecimal(total);
    return 0;
}

