#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
#include<string>

using namespace std;


int main()
{
    string str;
    cin >> str;

    sort(str.begin(), str.end(), greater<char>());

    for (int i = 0; i < str.size(); i++)
        cout << str[i];
}