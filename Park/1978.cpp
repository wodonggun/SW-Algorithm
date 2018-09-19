#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
#include<string>

using namespace std;
int a[100];

bool sosu(int x)
{
    if (x == 1) return false;
    if (x == 2) return true;

    for (int i = 2; i < x - 1; i++)
    {
        if (x%i == 0)
            return false;       //나누어 떨어지면 소수 아니다.
    }

    return true;        //나누어 떨어지는 수를 찾지 못했다. 소수이다.
}

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (sosu(a[i]))
            cnt += 1;
    }
  
    cout << cnt << endl;
}