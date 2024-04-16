#include <iostream>
using namespace std;
int md(string s1, int m, string s2, int n) {
    if (m == 0) {
        return n;
    }
    if (n == 0) {
        return m;
    }
    if (s1[m - 1] == s2[n - 1]) {
        return md(s1, m - 1, s2, n - 1);
    }
    int insert = md(s1, m, s2, n - 1);
    int del = md(s1, m - 1, s2, n);
    int replace = md(s1, m - 1, s2, n - 1);
    return 1 + min(insert, min(del, replace));
}

int minDistance(string word1, string word2) {
    return md(word1, word1.size(), word2, word2.size());
}
int main()
{
    return 0;
}