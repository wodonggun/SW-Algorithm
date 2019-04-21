# 이분 탐색 정리


# 사냥꾼

https://www.acmicpc.net/problem/8983
https://www.youtube.com/watch?v=klA3JxubTqo


[백준 2512번 예산](https://www.acmicpc.net/problem/2512)  



![1](https://user-images.githubusercontent.com/35188271/56458448-a9caf800-63c1-11e9-9c36-70ebcff97194.PNG)
```c++

#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[10001];

int N, money, total = 0;

int right = 0;
int left = 0;


bool valid(int mid)
{
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		result += min(mid, arr[i]);	//상한액(mid)로 예산 합산
	}
	return result <= money;		//합산금액이 예산범위 안에 들어오는지
}

int main()
{
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		right = max(right, arr[i]);	//최대값 저장

		total += arr[i];			//지방 요청 금액 합산
	}

	scanf("%d", &money);			//정부 전체 예산


	if (total > money)	//예산보다 크면
		while (left != right)
		{
			int mid = (left + right + 1) / 2;		//+1하고 나누기2를 통해 중간값을 가짐(0,1일때 무한루프 방지)
			if (valid(mid))	//상한액(mid)로 예산내부에 들어오는지 판단
			{
				left = mid;				//예산이 남으므로 더 높은 상한선
			}
			else
			{
				right = mid - 1;		//예산 초과이므로 더 낮은 상한선
			}
		}
	else			//에산 이내이면
		left = right;

	printf("%d", left);


}
```



https://www.youtube.com/watch?v=dvI9jeMu6BU
