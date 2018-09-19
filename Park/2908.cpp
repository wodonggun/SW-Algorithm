#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool check[26];

int main()
{
    string a, b;
    cin >> a >> b;

    string tmp, tmp2;
    for (int i = a.size()-1; i >= 0; i--)
    {
        tmp += a[i];
    }
    for (int i = b.size() - 1; i >= 0; i--)
    {
        tmp2 += b[i];
    }
    int x, y;
    x = stoi(tmp);
    y = stoi(tmp2);

    if (max(x, y) == x)
        cout << x;
    else
        cout << y;

}