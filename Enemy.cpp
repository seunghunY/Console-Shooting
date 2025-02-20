#include "include.h"

Enemy enemy[D_Enemy_Max];

void EnemyInit()
{
	for (int i = 0; i < D_Enemy_Max; i++)
	{
		enemy[i].isAlive = false;
		enemy[i].bColor = BLACK;
		enemy[i].fColor = WHITE;
		enemy[i].x = 0;
		enemy[i].body = 'Y';
		enemy[i].y = 0;
	}
}

void EnemyUpdate()
{

}

void EnemyDraw()
{
	for (int i = 0; i < D_Enemy_Max; i++)
	{
		if (enemy[i].isAlive)
		{
			DrawChar(enemy[i].x, enemy[i].y, enemy[i].body, enemy[i].fColor, enemy[i].bColor);
		}
	}
}

void CreateEnemy(int x, int y)
{
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		if (!bullet[i].isAlive)
		{
			bullet[i].x = x;
			bullet[i].y = y;
			bullet[i].isAlive = true;
			return;
		}
	}
}

void EnemyMove()
{
	for (int i = 0; i < D_Enemy_Max; i++)
	{
		enemy[i].y++;
	}
}

void EnemyClipping()
{

}
