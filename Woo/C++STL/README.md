# map 정리

- 키값이 중복하지않게 데이터를 필요로 할때  
ex) string은 중복되지않게 int데이터를 필요로 할때(무작위 데이터 1,2,3,4학년을 분류하여 각각 몇명인지 구할때)
```c++
map<string, int> att;    //Key , Value로 구성됨. (Key는 중복 불가능)
	
	
for (int i = 0; i < genres.size(); i++)
{
	att[genres[i]] += plays[i];           //map의 장르별로 재생횟수를 저장하고자할때 att["장르"]에 데이터를 넣으면서 중복검사를하고 value값을 저장.
                                        //중복시에는 해당 장르의 value를 찾아 더하고, 해당 장르가 없으면 장르를 추가하고 value를 저장함. 
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
