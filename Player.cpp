#include "include.h"

Player player;

void PlayerInit()
{
	player.bColor = BLACK;
	player.fColor = WHITE;
	player.x = 60;
	player.y = 15;
	player.body = 'A';
}

void PlayerUpdate()
{
	PlayerMove();
	PlayerClipping();

	if (GetAsyncKeyState(VK_SPACE))
	{
		CreateBullet(player.x, player.y - 1);
	}
}

void PlayerDraw()
{
	DrawChar(player.x, player.y, player.body, player.fColor, player.bColor);
}

void PlayerMove()
{
	if (GetAsyncKeyState('W') & 0x8000)
		player.y--;

	if (GetAsyncKeyState('A') & 0x8000)
		player.x--;

	if (GetAsyncKeyState('S') & 0x8000)
		player.y++;

	if (GetAsyncKeyState('D') & 0x8000)
		player.x++;
	
}

void PlayerClipping()
{
	if (player.x > 119)
		player.x=119;
	
	if (player.x < 0)
		player.x=0;
	
	if (player.y > 29)
		player.y=29;

	if (player.y<0)
		player.y=0;

}
