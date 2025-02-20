#include "include.h"

Bullet bullet[D_BULLET_MAX];

void BulletInit()
{
	for(int i=0; i<D_BULLET_MAX; i++)
	{
		bullet[i].isAlive = false;
		bullet[i].bColor = BLACK;
		bullet[i].fColor = WHITE;
		bullet[i].x = 0;
		bullet[i].y = 0;
		bullet[i].body = '|';
	}
}

void BulletUpdate()
{
	BulletMove();
	BulletClipping();
}

void BulletDraw()
{
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		if (bullet[i].isAlive)
		{
			DrawChar(bullet[i].x, bullet[i].y, bullet[i].body, bullet[i].fColor, bullet[i].bColor);
		}
	}
}

// 
void CreateBullet(int x, int y)
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

void BulletMove()
{
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		if(bullet[i].isAlive)
		bullet[i].y--;
	}
}

void BulletClipping()
{
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		if (bullet[i].y < 0&&bullet[i].isAlive)
		{
			bullet[i].isAlive = false;
		}
	}
}
