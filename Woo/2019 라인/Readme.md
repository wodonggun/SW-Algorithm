# 2019 상반기 라인 




## 라인 1번




## 라인 2번




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

