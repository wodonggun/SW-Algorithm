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


# map 특징

map<string, int> hash_map;
1. map[key값] = value값을 넣을 수 있다.  
2. map은 key값을 기준으로 오름차순으로 정렬이 자동으로 된다.  
```
#include <stdio.h>
#include <map>

using namespace std;

int main()
{
	map<string, int> ma;

	ma["abc"] = 1;
	ma["ccc"] = 2;
	ma["zbc"] = 5;
	ma["aaa"] = 100;

	for(auto iter=ma.begin();iter!=ma.end();++iter)   //순차적으로 map 탐색
	{
		printf("%s %d\n",iter->first.c_str(),iter->second);  //c_str()쓰는 이유는 string객체를 c언어에서는 지원하지 않기 때문
	}
	return 0;

}
```

3. map 맨 끝값 읽기  
- map은 end()함수를 가지고있지만 end가 마지막 데이터가 아닌, 마지막데이터가 끝난 주소를 가리킨다
- 그러므로 `--ma.begin()` --연산자를 통해 주소를 앞으로 이동.
```
printf("%d", (--ma.end())->second);
```
