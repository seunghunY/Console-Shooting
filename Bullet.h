#pragma once
struct Bullet
{
	bool isAlive;
	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;
};

void BulletInit();
void BulletUpdate();
void BulletDraw();

void CreateBullet(int x, int y);
void BulletMove();
void BulletClipping();

extern Bullet bullet[D_BULLET_MAX]; // 전역변수 다른 파일에서도 쓸수있게