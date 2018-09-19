#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
#include<string>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else
    {
        return a.first < b.first;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, string> > a;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        a.push_back(make_pair(s.size(), s));
    }

    sort(a.begin(), a.end(), compare);

    cout << a[0].second << endl;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1].second == a[i].second)
            continue;
        else 
            cout << a[i].second << endl;
    }
}