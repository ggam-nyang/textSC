# textSC

## 프로젝트 소개
스타크래프트의 Unit을 이용한 간단한 게임입니다.  
각 유닛은 라운드 당 1번씩 서로를 공격하고, 해당 내용이 출력되는 프로그램입니다.

현재는 Marine, Firebat으로 구성되어 있습니다.

ps. 실제 스타크래프트의 수치와 다릅니다.


## 설치 및 실행
1. Cmake 설치  
[공식 사이트](https://cmake.org/download/)에서 최신 버전을 다운로드하여 설치합니다.
2. 프로젝트 빌드  
CLI 실행법입니다.  
```bash
$ gh repo clone ggam-nyang/textSC
$ cd textSC
$ cmake -S . -B build
$ cmake --build build
```

3. 실행  
생성된 TextSc.exe를 실행합니다.


클래스 구조에 대한 고민과정은 [여기](https://www.notion.so/TextSC-Damage-155fc9337c154b67bbd1e2d1bdf4d4e8?pvs=4)를 참고해주세요.

