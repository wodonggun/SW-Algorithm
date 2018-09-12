#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    //선택정렬 방식
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[i] > a[j])
            {
                //swap
                swap(a[i], a[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

}