#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int check[1000000];
int main()
{
    string str;
    getline(cin, str);

    int cnt = 0;
    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] == ' ')
        {
           cnt++;
        }
    }
    if (str[0] == ' ')
        cnt -= 1;
    if(str[str.size() - 1] == ' ')
        cnt -= 1;

    cout << cnt + 1 << endl;
}