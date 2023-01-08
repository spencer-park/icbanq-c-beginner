## C언어 데이터 타입 종류, 포맷 코드, 크기
| 데이터 타입 | 포맷 코드 | 크기(Size, 단위: bytes) |	
| :-:| :------: | :- |
| **char**	| %c | 1 |
| **short** | %hd | 보통 2 |	
| **int**	| %d, %i | 보통 4, 최소 2~ |	
| **float**	| %f, %g, %G  | 4 | 
| **double** | %lf, %g, %G | 8 | 
| unsigned int | %u | 보통 4, 최소 2~ |


## 표현 범위(부동소수점)
float부터는 부동소수점 방식으로 값을 저장합니다.
각 비트를 나누어 부호, 가수(significand), 기수(base), 지수(exponent)를 표현하여
**근사치**를 저장합니다.

| 데이터 타입 | 범위 | 유효자리수 |	
| :-:| :------: | :- |
| **char** | -128~127 | - |
| **short** | -32,768~32,767| - |
| **int**	| -2147483648 ~ 2147483647 | - |	
| **float**	| 1.175494e-38~3.402823e+38 | 7 | 
| **double** | 2.225074e-308~1.797693e+308 | 16 | 

## 아스키코드 표
[아스키 코드표 확인](https://namu.wiki/jump/KBk2FxLOgqKXvA%2B5byx9GAmaVb%2FHDfqyILlEkBqxYWzsDyFKbTuRQm2DEVWUwC5wQyLn0tBgCMyl7e669hdsNBzSflqJHgRfuWsIw9OTgHI%3D)

## 음수 표현 방식
- 대표 3가지 : 부호화 절대치 방법(Sign Magnitude), 1의 보수 방법(1's Complement), 2의 보수 방법(2's Complement)
- [2의 보수 방법](https://namu.wiki/w/%EC%BB%B4%ED%93%A8%ED%84%B0%EC%97%90%EC%84%9C%EC%9D%98%20%EC%88%98%20%ED%91%9C%ED%98%84#s-2.2.1.2)

## 부동 소수점 표현 방식
- 실수는 컴퓨터 상에서 완벽하게 표현할 수 없다. 근사값을 저장.
- 크게 고정 소수점 방식과 부동 소수점 방식으로 나뉨.
- [부동 소수점 - 비트 배열 방식](https://namu.wiki/w/%EC%BB%B4%ED%93%A8%ED%84%B0%EC%97%90%EC%84%9C%EC%9D%98%20%EC%88%98%20%ED%91%9C%ED%98%84#s-4.1.1)
