# 별 찍기
- 숫자를 입력 받아 입력받은 줄만큼 별을 입력하는 코드
---
## 코드
---
```c
#include<stdio.h>

int main()
{
	int a, i, j;
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}
```
---
## 코드 설명
----
### 변수선언
```c 
int a, i ,j; 
```
- 출력할 별의 줄의 수를 받는 int형 변수 a, 별을 출력하기 위한 for문을 작동시키기 위한 int형 변수 i, j 선언
### 입력
```c
scanf_s("%d", &a);
```
- a 에 정수를 입력 받음
### 출력
```c
for (i = 1; i <= a; i++)
{
	for (j = 1; j <= a ; j++)
		printf("*");
	printf("\n");
}
```

```c
 for (i = 1; i <= a; i++) 
 ```
1. 입력받은 줄 만큼 반복 되도록 함
```c
for (j = 1; j <= a ; j++)
	printf("*");
```
2. 해당하는 줄만큼 별을 반복해서 입력하도록 함
```c
printf("\n");
```
3. 별을 입력한 후 줄을 바꿈
---
## 예시
---
**입력**
```ㅊ
3
```
*출력*
```c
*
**
***
```