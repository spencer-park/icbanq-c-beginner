// 생각해보기
// int와 같은 단독 데이터 scanf할 땐 왜 &변수를 쓰고 ex)03_input_char.c
// 문자열(string)과 같은 여러 데이터가 있을 땐 그냥 변수를 쓸까? ex)05_strlen.c
// 1. 배열과 같은 데이터는, 변수에 데이터 시작 주소가 저장된다.
// 2. 그래서 단독 데이터는 변수 이름만 부르면 바로 값이 나오고
// 3. 배열은 뒤에 [0]와 같은 인덱스로 몇번째 데이터임이 나온다.
// 4. 아래코드를 pythontutor - show memory address, byte-level view of data 로 확인해보자.
// none : 단순한 구조
// show memory : a은 값과 메모리 주소가 보인다. 반면 arr은 변수 메모리는 없고 배열만 담겨있다. 배열 요소들은 메모리 값이 있다.
// byte-level : arr 메모리 값과 arr[0]의 메모리 값이 동일, int는 4바이트이므로 a의 바이트 값과 arr[2] 바이트에 저장된 값이 같다.
#include <stdio.h>

int main()
{
    int a = 3;
    int arr[] = {1, 2, 3};

    printf("%d ", a);
    printf("%p ", &a);

    // printf("%d ", arr);  // error
    printf("%p ", arr);
    return 0;
}