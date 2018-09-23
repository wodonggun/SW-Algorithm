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




## 기출 모음집

https://www.acmicpc.net/workbook/view/2063




## 팁

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
- fgets(s,100,stdin);   줄바꿈까지 인식
- scanf("%[\n]\n",s);   띄어쓰기나 줄바꿈 단위로 인식
- getline(cin, s);      줄바꿈은 인식안하고 이전까지 인식
```
