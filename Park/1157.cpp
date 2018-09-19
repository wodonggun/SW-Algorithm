#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<pair<int, int> > abc;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;   //내림차순
    
}

int main()
{
    for (int i = 0; i < 26; i++)
    {
        abc.push_back(make_pair(0, i));
    }


    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            //대문자이면
            abc[str[i] - 'A'].first += 1;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            //소문자이면
            abc[str[i] - 'a'].first += 1;
        }
    }

    sort(abc.begin(), abc.end(), compare);

    if (abc[0].first == abc[1].first)
    {
        cout << "?" << endl;
    }
    else
    {
        printf("%c", abc[0].second + 'A');
    }
}