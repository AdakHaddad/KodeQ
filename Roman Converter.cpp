//Program converts a number entered in Roman numerals to decimal. Program consist of a class, say, romanType?

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
    romanType();
    romanType(char);

private:
    char romanNum[6];
    int decimal;
    int total;
};

void romanType::setRoman(char& roman)
{
    romanNum = roman;
}

void romanType::printRoman(char romanNum)
{
    cout << romanNum << endl;
}

int romanType::convertRoman(int& total)
{
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
            cout << "Invalid input" << endl;
        }
        total += decimal;
    }
    return total;
}

int romanType::printDecimal(int& total)
{
    cout << total << endl;
    return total;
}

romanType::romanType(char roman)
{
    romanNum = roman;
}

romanType::romanType()
{
    romanNum = ' ';
}
int main()
{
    char romanInput;
    int total = 0;
    romanType roman;
    cout << "Enter a Roman numeral: ";
    cin >> romanInput;
    roman.setRoman(romanInput);
    roman.printRoman(romanInput);
    roman.convertRoman(total);
    roman.printDecimal(total);
    return 0;
}