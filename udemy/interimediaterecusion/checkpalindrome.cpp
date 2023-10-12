#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0)
{
    if (n == 0)
    {
        return rev;
    }

    int rem = n % 10;
    rev = rev * 10 + rem;

    return reverseNumber(n / 10, rev);
}

bool isPalindrome(int n)
{
    int rev = reverseNumber(n);
    return n == rev;
}

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    if (isPalindrome(n))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
