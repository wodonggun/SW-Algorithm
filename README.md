# 백준 알고리즘 스터디 BOJ 
[![Build Status](https://travis-ci.org/y3s-study/algorithm-java.svg?branch=master)](https://travis-ci.org/y3s-study/algorithm-java)


C/C++ 언어로 알고리즘 문제를 풀고 서로의 코드를 공유합니다. 



## 사전 준비
1. 
2. 
3. 

## Visual Studio 2017 권장
1. 
2. 
3. 

## 패키지 생성 가이드
1. `src/main/java` 패키지 밑에 알고리즘 사이트별 패키지를 작성합니다.
    - ex) Baekjoon Online Judge : `src/main/java/baekjoon`
2. 각 사이트별 패키지 밑에 `/{본인 이름}/{단계별 제목}/{p_문제번호}` 형식으로 문제별 패키지를 생성합니다.
    - ex) `github.com/아이디/BOJ/Woo/`
    

# Commit 메시지 규칙

1. 커밋 메시지는 검색의 편의를 위해 알고리즘 사이트명과 문제 번호(ID)가 포함되도록 작성합니다.
    - ex) `[baekjoon] 2750 사다리 타기`
    - ex) `[baekjoon] 10998 AxB`


# 참가자
1. 우동근 2015039035 
2. 박정현 2015039034 
3. 안재광 
4. 염유진 
5. 권희주 ...?



## 기출 모음집

삼성 기출 - https://www.acmicpc.net/workbook/view/1152

삼성 기출 + 삼성  - https://www.acmicpc.net/workbook/view/2063


## 알고리즘 공부

https://kks227.blog.me/   라이님 블로그


https://www.swexpertacademy.com/main/learn/course/courseList.do?#none - SW Expert Academy 무료 강의


https://blog.naver.com/PostList.nhn?blogId=proability&parentCategoryNo=1 - 부지런돈부리






## 에러 팁

- 컴파일 에러
1. gcc 버전마다 조금씩 다를 수 있으므로, 기본 STL 라이브러리만 사용하기
2. 백준에서는 컴파일 에러 원인을 알려주니 참고하여 수정.

- 런타임 에러
1. 배열이나 포인터가 선언하지않은 이상한 곳을 가리킴.
2. 어떠한 값이 NULL을 가리킴.
3. 메모리를 너무 많이 사용해서 초과
4. if(!count<4) 등 연산자 우선순위(`!가 <보다 높음`)를 고려하지 않았을때, 버전에 따른 런타임 오류가 발생할 수 있다.(무조건 연산자 우선순위 고려)

- 시간 초과
1. 무한루프에 빠짐.
2. 탐색한곳을 계속 탐색하는 중복 탐색이 많음
3. 

- 틀렸습니다
1. 걍 너의 코드가 잘못됬다.
2. 어디서인가 예외가 발생하고 있다.
3. 머리속으로 임의의 값을 넣어보고 A4에 풀어보고 그 값이 나오는지 확인 
(ex: 전체 배열을 1로 채우고 탐색하기, 한번도 시도하지 않는 경우 해보기)

### 숫자 따로 받기
```
int main()
{
	int a[9];

	for (int i = 0; i < 9; i++)
	{
		scanf("%1d", &a[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		printf("%d", a[i]);
	}


}
```

### 서로다른 4개의 선택(조합) != 재귀함수를 통한 조합 선택법(dfs)
```
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int l = j + 1; l < n; l++)
				for (int k = l + 1; k < n; k++)
					printf("%d %d %d %d\n", i, j, l, k);
```

```
int sol(int cur, int select) 		// 전체 N개 중에서 M개 선택(cur=현재 선택한 번호, select = 지금까지 선택갯수)
{
	if (select < M) 
	{
		for (int i = cur; i < N; i++)
		{
			que_select.push_back(i);
			sol(i+1, select + 1);
			que_select.pop_back();
		}
	}
	else if(select==M)		//모든 선택을 끝냈을때
	{
	
	}
 }
```

	
- fgets(s,100,stdin);   줄바꿈까지 인식
- scanf("%[\n]\n",s);   띄어쓰기나 줄바꿈 단위로 인식
- getline(cin, s);      줄바꿈은 인식안하고 이전까지 인식
```
