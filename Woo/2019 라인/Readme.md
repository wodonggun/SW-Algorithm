# 2019 상반기 라인 




## 라인 1번
```
#define _CRT_SECURE_NO_WARNINGS
#define ABS_max(a,b) a>b?(a)-(b):(b)-(a)

#include <stdio.h>


typedef long long int m_int;

m_int ans = 100000000000000;

int main()
{
	m_int a;
	m_int N;

	scanf("%lld", &N);
	

	for (m_int i= 1;i <= N; i++)
	{
		if (N%i == 0)
		{
			m_int t = ABS_max(i,N/i);
			if (t < ans)
				ans = t;
		}
	}

	printf("%lld",ans);
	
	return 0;

}
```



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
```
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> head;
vector<string> head2;

#define null_print "NULL"

//테이블 함수
map<int, vector<string>> sol(int count)
{
	map<int, vector<string>> tmp;
	char str[100001];

	for (int k = 1; k < count; k++)
	{
		char *ptr2;
		char str_t[100001];

		gets_s(str_t);

		ptr2 = strtok(str_t, " ");

		//정수넣고
		int a = (*ptr2) - '0';

		ptr2 = strtok(NULL, " ");

		while (ptr2 != NULL)
		{
			string st = ptr2;
			tmp[a].push_back(st);
			ptr2 = strtok(NULL, " ");
		}

	}

	return tmp;
}

int main()
{
	map<int, vector<string>> table1;
	map<int, vector<string>> table2;

	int heng;
	char *ptr;
	char str[100001];




	//================== 테이블1 ===========
	scanf("%d", &heng);
	getchar();


	//테이블1 헤더 구분
	gets_s(str);
	ptr = strtok(str, " ");
	while (ptr != NULL)
	{
		string a = ptr;
		head.push_back(a);
		ptr = strtok(NULL," ");
	}

	//값 파싱
	table1 = sol(heng);




	//================ 테이블2 =================
	scanf("%d", &heng);
	getchar();

	

	//테이블1 헤더 구분
	gets_s(str);
	ptr = strtok(str, " ");

	while (ptr != NULL)
	{
		string a = ptr;
		head2.push_back(a);
		ptr = strtok(NULL, " ");
	}

	//값 파싱
	table2 = sol(heng);




	printf("\n");

	//헤더출력
	for (int i = 0; i < head.size(); i++)
	{
		printf("%10s ", head[i].c_str());
	}

	for (int i = 1; i < head2.size(); i++)
	{
		printf("%10s ", head2[i].c_str());
	}

	printf("\n");


	for (auto i=table1.begin(); i!=table1.end(); ++i)
	{
		printf("%10d ", i->first);
		
		//테이블1
		for (int j =0; j<table1[i->first].size();j++)
		{

			printf("%10s ", table1[i->first].at(j).c_str());
		}

		//테이블2 조인
		if (table2.find(i->first) != table2.end())	//존재하면
		{
			for (int j2 = 0; j2 < table2[i->first].size(); j2++)
			{
				printf("%10s ", table2[i->first].at(j2).c_str());
			}

		}
		else
		{
			for (int j = 0; j < head2.size()-1; j++) 
			{
				printf("%10s", null_print);
			}
		}

		printf("\n");
	}


}
```


- 3번 테스트 케이스
```
/*   < 테스트 케이스 >

6
id name occu
5 Brown Accountant
2 Cony Programmer
3 Sally Doctor
1 James Singer
4 Moon Dancer
7
id city zip
2 Seoul 10008
7 Busan 40002
5 Gwangju 20009
6 Daegu 30008
3 Seoul 40005
1 Seoul 50006



6
id name
5 Brown
2 Cony
3 Sally
1 James
4 Moon
7
id city zip
2 Seoul 10008
7 Busan 40002
5 Gwangju 20009
6 Daegu 30008
3 Seoul 40005
1 Seoul 50006



3
ID NAME
5 Brown
2 Cony
7
ID CITY
2 Seoul
7 Busan
5 Gwangju
6 Daegu
3 Seoul
1 Seoul


3
ID CAFE
1 donggun
2 dong
4
id location
4 CheongJu
2 Suwon
1 NewYork

3
ID CAFE
1 EDIYA
2 START
2
id location
4 CheongJu


2
test number
1 52
2
test place
1 C8

*/
```



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

