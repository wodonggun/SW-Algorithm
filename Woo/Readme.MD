# 정리
```
#define 사용시 시간초 훨씬 증가

#define abs(x,y) ((x>y)?(x-y):(y-x)) 사용하지말고 

#include <math.h>를 통한 abs 사용
```



- Algorithm Blog
https://jaimemin.tistory.com/439

- dfs bfs 왕초보
https://www.acmicpc.net/problem/1260

- bfs 기초 
백준 2667 2636 


- dfs 기초 

- dfs + bfs
14502 연구소  



# ABS 절대값 

~~#define ABS_max(a,b) a>b?a-b:b-a~~ 음수를 뺄때 2--1은 성립이 되지 않으므로, 2-(-1)이 되어야 함.  
#define ABS_max(a,b) a>b?(a)-(b):(b)-(a)




# 정렬

서로다른 두 집단의 문자열을 비교할때
```
for(int i=0;i<a.size();i++)
  for(int j=0;j<b.size();j++)
  {
    strlen(a.at(i),b.at(j))           //시간복잡도 O(n^2)
  }
```  

```
sort(a.begin(),a.end());            //미리 정렬후에 O(nlogn)
sort(b.begin(),b.end());                           O(nlogn)

for(int i=0;i<a.size();i++)
{
    strlen(a.at(i),b.at(j))           //시간복잡도 O(nlogn)   n+2nlogn
}
```  
