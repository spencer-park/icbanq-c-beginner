## 미리 주의사항
C언어는 다른 언어보다 더 어렵습니다. 혹시 여러분이 특정 목적이 없다면 C언어를 배우는 것을 다시 한 번 고민해보세요.
1. 아두이노와 같이 C언어가 필요한 키트나 프로그램을 다루려고 한다 O
1. 게임 프로그래밍에 쓰이는 언어가 C언어라고 들었거나 염두하고있다. X -> C++ 배우세요
1. 프로그래밍 학습이 완전 처음인데, C언어 강의가 너무 어려워요. 계속 들어야 하나요? X -> Python 배우고 다시 도전해보세요.

## 왜 C언어 입문은 입문인데도 어렵나요?
1. 다른 언어에 비해 LowLevel쪽에 위치한 언어
C 언어는 프로그래밍 언어 중에서 상대적으로 낮은 수준의 언어입니다.
이 말은 인간보다 기계에게 더 친숙한 형태라는 의미이며, 데이터 타입과 메모리, 포인터 등에 대한 개념과 이해가 필요합니다. 

2. 내장 메모리 관리 없습니다.
다른 많은 프로그래밍 언어와 달리, C에는 내장 메모리 관리 기능이 없습니다. 
이는 프로그래머가 메모리 할당 및 할당 해제를 관리할 책임이 있음을 의미하며 초보자에게는 어려울 수 있습니다.

3. 포인터의 존재
C에는 포인터라는 개념이 있습니다. 다른 언어에서도 이 개념이 있긴한데 대체로 대부분 알아서 해줍니다.
그런데 C는 포인터도 직접 관리를 해야합니다. 제대로 사용하기 위해선 컴퓨터 메모리 주소에 대해 이해하는 것이 중요합니다.
포인터에 대해 이해하고 활용할 수 있을만큼 학습하는 것은 C언어 필수인데, 해당 내용을 습득하는 난이도가 있어 많은 입문자가 여기에서 포기합니다.

4. 제한된 표준 라이브러리
C 표준 라이브러리는 다른 언어보다 확실히 적습니다.
이 말은 필요한 기능을 직접 구현해야되며, 같은 프로그램이라도 구현하기위해 더 많은 코드를 작성해야합니다.
더 긴 코드를 작성하므로 코드가 복잡해져 학습이 어려울 수 있습니다.

5. 때문에 더 필요하여 학습 시간이 오래 걸립니다.
위 항목들로 인하여 알아야 할 지식과 세부적인 코드 문법과 규칙이 다른 언어보다 많습니다.
이 점은 배경지식이 없는 프로그래밍 입문자가 학습하는데 더 오랜 시간과 더 많은 노력을 요구합니다.

## 그럼 C언어 왜 배우는가
C 언어는 언어 학습임에도 불구하고 잘 이해하고 익힌다면
다른 고급 언어나 시스템 프로그래밍에 대한 이해도가 높아집니다. 
현재 직접적으로 C언어가 많이 쓰이고 있진 않으나, C언어 기반으로 만들어진 프로그래밍 언어들은 현역입니다. (C++, C#, Python)
다른 언어도 심화로 가면 알아야할 내용들이 있는데, C언어는 그걸을 미리 배움, 사전 학습을 할 수 있는 언어입니다.
또한 임베디드나 절차 지향 언어가 필요한 곳에선 C언어는 강력합니다.


## 해당시리즈에서 배울 범위를 정하기
프로그래밍 기초란 범위가 없고 C언어는 학습할 내용도 많습니다. 
때문에 우리가 해당 시리즈에서 어디까지 배울지 정해놓고 시작하려 합니다.

해당 강의는 '이후 아두이노 기초 강의 또는 키트 프로그래밍을 배운다'를 가정하고 구성되어 진행합니다.
- 이런 구체적인 목표나 동기부여가 없는 초심자, C언어 강의를 듣다가 어려움을 느꼈다면 Python을
- 특정 분야에 대한 목적이 잡혀있다면 그 분야에 맞는 언어를 먼저 하는 것을 추천합니다.

구체적으로 살펴보면 `2번. 내장 메모리`은 다루지 않습니다. 
관련 키워드로는 `malloc(), calloc(), realloc(), free()` 함수가 있습니다.
제외한 이유는 아두이노 기초를 배울 때 해당 내용이 등장하지 않거나
여러분이 가까운 시일에 아두이노 프로그램을 만든다고 할 때 쓰지 않을거라 판단되기 때문입니다.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // int형 변수 5개 크기의 메모리 공간을 할당합니다.
    int *arr = (int*)malloc(sizeof(int) * 5);  // malloc() 함수를 사용하여 int형 변수 5개 크기의 메모리 공간을 할당합니다.

    // 메모리 공간을 초기화합니다.
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }

    // 메모리 공간에 저장된 값을 출력합니다.
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 메모리 공간을 해제합니다. 
    // C언어의 장점인 속도를 살리고 메모리 관리를 하려면, 원래 메모리를 할당한 후에는 반드시 해제해야 합니다. 
    // 메모리를 해제하지 않으면 메모리 누수가 발생하여 시스템 자원을 낭비하게 됩니다.
    free(arr);

    return 0;
}

```



`4번. 표준 라이브러리`은 `math.h`와 `time.h` 2개의 기본 코드를 다룹니다.
분명 표준 라이브러리가 적은 편이나, 그래도 학습의 범위로 치면 다룰 내용이 많습니다.
또한 이를 제대로 사용하기위한 문법과 지식을 배우는 건 해당 시리즈의 투자 시간 및 난이도 상승이 예상되어 효율이 좋지 않기 때문입니다.

`3번. 포인터`는 해야합니다. 여러 데이터를 관리할 `배열(array)`과 여러 문자(문장)을 입력받는 `문자열(string)`을 할 때 필수입니다.
또한 여러분이 프로그래밍을 하면 정말 자주 사용할 함수에서 포인터는 자주 사용되므로 꼭 다뤄야한다고 판단됩니다.

`1번 데이터 타입과 메모리, 포인터`등은 배웁니다. 다른 언어보다 데이터 타입의 특징(할당 크기, 할당 방법, 문자열 포맷 방식 등)을 배웁니다.
다만 컴퓨터 메모리란 분야만 팔 순 없으므로, 해당 시리지의 코드를 이해하는 것에 도움이 되는 수준까지만 다루기로 합니다.
가능한 시각적으로 코드가 동작하는 것을 파악하며 진행하고자 합니다.

오늘은 첫 시간으로 C언어 학습 환경을 세팅을 준비하는 것을 마무리로 영상을 마치려 합니다.

## C환경 설정
**에디터 선택지**
`오프라인(많이 쓰이는 순)`
1. Visual Studio Code
1. Code::Blocks
1. Sublime Text
1. Atom
1. Vim
1. Emacs
1. Notepad++
1. Geany

`온라인`
1. JDoodle: https://www.jdoodle.com/online-c-compiler
1. Ideone: https://ideone.com/
1. OnlineGDB: https://www.onlinegdb.com/online_c_compiler
1. Repl.it: https://repl.it/languages/c
1. CodeChef: https://www.codechef.com/ide
1. Tutorialspoint: https://www.tutorialspoint.com/compile_c_online.php
1. Paiza.IO: https://paiza.io/en/projects/new?language=c

수업은 VScode로 진행합니다.
따라하는 건 온라인 IDE인 Repl.it, OnlineGDB, JDoodle로도 충분하니,
먼저 영상을 보고 마음에 설치 방법을 선택하시면 됩니다.

Dev C++은 언어 학습용으로는 괜찮겠으나, 나중에 실제 개발할 때는 비추천합니다.
이전에는 많은 사람들이 사용하였으나, 현재는 개발이 중지되어 보안 이슈와 호환성 문제 등의 문제점이 발생할 가능성이 높아졌습니다. 
또한, 최신 C 언어 버전을 지원하지 않는 등의 한계점이 있어서, 사용을 권장하지 않습니다.

또한 이렇게 다양한 설치 방법을 소개하는 것은, 
여러분의 컴퓨터 환경이 저와 달라 설치가 실패했을 때 이에 대한 해결방법을 전부 제시해줄 수 없기 때문입니다.
원인이 워낙 다양할 수 있거든요.
때문에 혹시라도 맘에드는 설치법에 막히셨다면
1. 스스로 검색해서 해결해보시거나
1. 마음 편하게 온라인 IDE인 Repl.it을 쓰시는 것을 추천합니다.

그래도 되는 이유는 우리는 'C언어로 개발이 아닌 언어의 문법과 활용을 학습하는 것'이기에
에디터 설치 과정에 스트레스 받지말고 가능한 것 간편한 것을 선택하는 것을 추천합니다. 



## VSCode 설치
1. VSCode 설치
2. 파일 `hello.c` 만들기 > Extension 추천
```c
#include <stdio.h>

int main()
{
    printf("Hello world!");
}
```
3. Extension > C/C++, Code Runner 설치
4. Extension 설명란에 Windows gcc 관련 클릭
5. https://code.visualstudio.com/docs/languages/cpp
6. MinGW 설치
7. [링크](https://www.msys2.org/) 명령어 `pacman -S mingw-w64-ucrt-x86_64-gcc`
8. [링크](https://code.visualstudio.com/docs/languages/cpp#_example-install-mingwx64) 명령어 `pacman -S --needed base-devel mingw-w64-x86_64-toolchain`
9. 환경 변수 path에 mingw의 bin폴더 위치 저장 `C:\msys64\mingw64\bin`
10. cmd에 명령어 `C:\msys64\mingw64\bin`
```
C:\Users\{Username}>g++ --version

g++ (Rev2, Built by MSYS2 project) 12.1.0
Copyright (C) 2022 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

C:\Users\{Username}>
```
11. `hello.c` 우클릭 > Run Code 

## 맥은?
보통 기본적으로 gcc가 설치되어있다.
때문에
1. VSCode 설치
2. Extension > C/C++, Code Runner 설치
3. VSCode 설정(단축키 cmd + ,) > coderunner 검색
4. `Code-runner: Clear Previous Output`와 `Run In Terminal`에서 `Whether to clear previous output before each run.`를 체크
    - 그러지 않으면 day04 scanf 실습 때 동작을 안할 수 있다.
    - 출력 창이 아닌 터미널로 실행을 하도록 하여, 입출력 소통이 가능한 환경에서 실행하도록 세팅한 것.