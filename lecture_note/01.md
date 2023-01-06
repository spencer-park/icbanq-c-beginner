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