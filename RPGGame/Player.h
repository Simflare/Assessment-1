#pragma once
#include "Enemy.h"
#include "Goblin.h"

class Player
{
public:
	Player();
	~Player();
	int GetAttack();
	int GetHealth();
	void TakeDamage(Enemy &enemy);
	bool Defend(Enemy &enemy);
	void Attack(Enemy &enemy);
	void Counter(Enemy &enemy);
	int WeaponDamage();
	int ArmourDefense();
	void SetWeapon(int weapon);
private:
	int m_health = 100;
	int m_attack = 5;
	int m_weapon = 0;
	int m_armour = 0;
};

