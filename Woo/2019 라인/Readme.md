#라인 1번




#라인 2번




#라인 3번




#라인 4번

```
#include <stdio.h>

int main()
{
	int a;
	int ans = 0;
	int arr[1000001];

	scanf("%d", &a);

	for (int i = 0; i <= a; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = a; i <= a; i++)
	{
		for (int j = a + 1; j <= a; j++)
		{
			if (arr[i] > arr[j])
				continue;
			else if (arr[i] <= arr[j])
			{
				if (ans < j - i)
				{
					ans = j - i;
				}

			}
		}

	}

	printf("%d", ans);

}
```



#라인 5번

