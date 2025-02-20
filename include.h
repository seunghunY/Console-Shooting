#include <stdio.h>
#include <Windows.h>	//win32 API
#include <time.h>
#include "Define.h"
#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"

void Init();  // ���α׷� ���۽� 1�� �ʱ�ȭ
void Update(); // �� ������ ȣ��
void Draw(); // �� ������ ȣ��
void Release(); // ���α׷� ������ 1�� ȣ��

void DrawStr(int x, int y, const char* str, WORD fcolor, WORD bcolor);
void DrawChar(int x, int y, const char c, WORD fcolor, WORD bcolor);
void EngineSync(int fps);
void ClearScreen();
void Flip();