#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

bool check[26];

int main()
{
    int t;
    cin >> t;
    int ans = t;
    while (t--)
    {
        for (int i = 0; i < 26; i++)
        {
            check[i] = false;
        }

        string str;
        cin >> str;

        for (int i = 1; i < str.size(); i++)
        {
            if (check[str[i] - 'a'] == false)
            {
                if (str[i - 1] != str[i])
                {
                    check[str[i - 1] - 'a'] = true;
                }
            }
            else
            {
                ans -= 1;
                break;
            }
        }

        
    }
    cout << ans << endl;
    
}