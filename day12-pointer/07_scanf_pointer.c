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
    int n1 = 3;

    // CASE 1: scanf -> n1
    printf("Enter N1 : ");
    scanf("%d", &n1);
    getchar();
    
    printf("n1의 주소 : %p, 내용 : %d\n", &n1, n1);
    printf("\n");

    // CASE 2: scanf -> * n2
    int * n2 = &n1;
    printf("Enter N2 : ");
    scanf("%d", n2);  // 입력할 땐 그냥 포인터 변수 이름으로(주소니까!)

    printf("n1의 주소 : %p, 내용 : %d\n", &n1, n1);
    printf("n2의 주소 : %p, 내용 : %d\n", n2, *n2);  // 내용 확인할 땐 *변수
    
    return 0;
}