# sort 정렬
```
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> a;

	a.push_back(2);
	a.push_back(3);
	a.push_back(5);
	a.push_back(1);
	a.push_back(4);


	sort(a.begin(), a.end());		//오름 차순


	for (auto i = a.begin(); i != a.end(); i++)
	{
		printf("%d ", *i);
	}
	printf("\n");


 


	int arr[5];
	
	arr[0] = 10;
	arr[1] = 5;
	arr[2] = 6;
	arr[3] = 1;
	arr[4] = 11;

	sort(arr, arr+5,greater<int>());	//내림 차순


	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");



	return 0;
}
```



# map 정리

- 키값이 중복하지않게 데이터를 필요로 할때  
ex) string은 중복되지않게 int데이터를 필요로 할때(무작위 데이터 1,2,3,4학년을 분류하여 각각 몇명인지 구할때)
```c++
map<string, int> att;    //Key , Value로 구성됨. (Key는 중복 불가능)
	
	
for (int i = 0; i < genres.size(); i++)
{
	att[genres[i]] += plays[i];     //map의 장르별로 재생횟수를 저장하고자할때 att["장르"]에 
					//데이터를 넣으면서 중복검사를하고 value값을 저장.
                                        //중복시에는 해당 장르의 value를 찾아 더하고, 해당 장르가 없으면 
					//장르를 추가하고 value를 저장함. 
}

```

- map 정렬하기
```c++
bool cmp(gen &a, gen& b)
{
	return a.play > b.play;

}

int main()
{
	for (auto iter = att.begin(); iter != att.end(); ++iter)
	{
		vec.push_back({ iter->first, iter->second });

	}
  
	sort(vec.begin(), vec.end(), cmp);
  
}
```

# string 객체 , 문자열 가지고놀기
1. string 객체
```
#include <string>
#include <stdio.h>

int main()
{
  char str[4] = "ccc";
  
  string a = "abc";
  string b = str;
  
  
  
  return 0;
}

```
  
2. 문자열 뒤집기
```
#include <string>
#include <algorithm>
#include <stdio.h>

int main()
{
  
  string a = "abc";
  string b = "abc";
  
  reverse(b.begin(),b.end());
  
  printf("%s",b.c_str());
  
  return 0;
}
```
