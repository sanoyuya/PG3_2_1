#include "Enemy.h"
#include<stdio.h>
#include<Windows.h>

bool Enemy::isAlive = true;

void Enemy::Initialize()
{
	printf("敵を生成\n");
}

void Enemy::Update()
{
	Kill();
}

void Enemy::Draw()
{
	if (isAlive)
	{
		printf("敵が生きている\n");
	}
	else
	{
		printf("敵が死んでいる\n");
	}
}

void Enemy::Kill()
{
	isAlive = false;
	printf("敵が死んだ\n");
}