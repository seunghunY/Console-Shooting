#include "include.h"

int main()
{
	Init();

	while (true)
	{
		Update();
		Draw();

		EngineSync(30); // 1�ʿ� 30������ ����
	}

	Release();

	return 0;
}