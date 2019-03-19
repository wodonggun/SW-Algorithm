# 2019 상반기 라인 




## 라인 1번




## 라인 2번
```
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

char str[10001];

int main()
{
	vector<string> element;

	vector<int> num;
	scanf("%s", &str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		//원소일때
		if (str[i] >= 65 && str[i] <= 90)
		{
			string tmp;
			//소문자포함일때
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{

				string t1;
				t1= str[i];
				string t2;
				t2 = str[i + 1];
				tmp = t1 + t2;
				element.push_back(tmp);
			}
			else {
				tmp = str[i];
				element.push_back(tmp);
			}

		}
		//기호일때
		else if (str[i] >= 49 && str[i] <= 57)
		{
			num.push_back(str[i]-'0');
		}
		else
			;
			
	}


	//출력 
	if (element.size() != num.size())
	{
		printf("error");
		return 0;
	}
	else
	{
		for (int i = 0; i < element.size(); i++)
		{
			printf("%s", element[i].c_str());

			if(num[i]!=1)
			printf("%d", num[i]);
		}

	}


	return 0;
}
```



## 라인 3번




## 라인 4번

```
#include <stdio.h>

int main()
{
	int a;
	int ans = 0;
	int arr[100001];

	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i <= a; i++)
	{
		for (int j = i + 1; j <= a; j++)
		{
			if (arr[i] > arr[j])
				continue;
			else if (arr[i] <= arr[j])
			{
				if (ans < j - i)
				{
					ans = j - i;
				}
				break;
			}
			else {
				printf("error");
				break;
			}
		}

	}

	printf("%d", ans);

	return 0;
}
```



## 라인 5번

