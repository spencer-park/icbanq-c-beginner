## 기본 switch문
```c
switch (표현식){
    case 값A(상수):
        // A코드 실행
        break;
    case 값B(상수):
        // B코드 실행
        break;
    default:
        // 기본 코드 실행   
}

```
- break를 걸지않으면 A->B->default 또는 B->default 순으로 실행됨

## 아쉬운 점
- case 값에서 값은 숫자 또는 문자가 가능하다.
- 문자열은 안된다.