#include <iostream>
#include <string>
using namespace std;

string intToRoman(int num)
{
    int arrnum[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string roman[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    string ans = "";
    while (num != 0)
    {
        for (int i = 0; i < 13; i++)
        {
            if (arrnum[i] > num)
            {
                int index = i - 1;
                ans += roman[index];
                num -= arrnum[index];
                break;
            }
        }
        if (num >= 1000)
        {
            ans += "M";
            num -= 1000;
        }
    }
    return ans;
}

int main()
{
    int num = 3423;
    string roman_numeral = intToRoman(num);
    cout << roman_numeral << endl;
    return 0;
}
