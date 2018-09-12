#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

string acroatia[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
int check[100];

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < 8; i++)
    {
        if (str.find(acroatia[i]) != string::npos)
        {
            int start = start = str.find(acroatia[i], 0);
            while (start != string::npos)
            {
                str.replace(start, acroatia[i].size(), "a");
                start = start = str.find(acroatia[i], start + 1);
            }
        }
    }
    cout << str.size() << endl;

}