## C환경 설장
### 에디터 : Repl.it, VSCode
수업은 VScode로 진행, 
따라하는 건 Repl.it, Dev C++, Code::Block도 충분
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