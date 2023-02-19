## C연산자 우선순위
- [참조:C Operator Precedence](https://en.cppreference.com/w/c/language/operator_precedence#cite_note-1)

여기서 배울 연산자 중   
알아야할 핵심 우선순위 높은 것부터 살펴보면

| 기호 | 설명 |
| :---------: | :- |
| () | 수학 () 처럼 우선 연산 범위 지정 |
| ++ --<br>! | 증감/감산 연산자<br>NOT연산자 |
| * / %| 산술 곱셈, 나눗셈 |
| + - | 산술 덧셈 뺄셈 |
| < <= > >= | 비교(관계) 연산자 |
| && | AND 연산자 |
| \|\| | OR 연산자 |
| = += -= *= /= %=| 할당 연산자 |


## 공통 연산자 정리

Common operators
| assignment | increment<br>decrement | arithmetic | logical | comparison | member access | other |
| - | - | - | - | - | - | - |
| a = b <br>a += b<br>a -= b<br>a *= b<br>a /= b<br>a %= b<br>a &= b<br>a \|= b<br>a ^= b<br>a <<= b<br>a >>= b | ++a<br>--a<br>a++<br>a-- | +a<br>-a<br>a + b<br>a - b<br>a * b<br>a / b<br>a % b<br>~a<br>a & b<br>a \| b<br>a ^ b<br>a << b<br>a >> b | !a<br>a && b<br>a \|\| b | a == b<br>a != b<br>a < b<br>a > b<br>a <= b<br>a >= b | a[b]<br>*a<br>&a<br>a->b<br>a.b | a(...)<br>a, b<br>(type) a<br>a ? b : c<br>sizeof |
