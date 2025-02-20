#include <stdio.h>
#include <Windows.h>	//win32 API
#include <time.h>
#include "Define.h"
#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"

void Init();  // 프로그램 시작시 1번 초기화
void Update(); // 매 프레임 호출
void Draw(); // 매 프레임 호출
void Release(); // 프로그램 끝날때 1번 호출

void DrawStr(int x, int y, const char* str, WORD fcolor, WORD bcolor);
void DrawChar(int x, int y, const char c, WORD fcolor, WORD bcolor);
void EngineSync(int fps);
void ClearScreen();
void Flip();