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
