#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int check[26] = { 2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9 };
int daial[10] = { 11,2,3,4,5,6,7,8,9,10 };

int main()
{
    string str;
    cin >> str;

    int time = 0;
    for (int i = 0; i < str.size(); i++)
    {
        time += daial[check[str[i]-'A']];
    }

    cout << time << endl;
}