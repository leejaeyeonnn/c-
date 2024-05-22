#pragma once
class Terran
{
private:
	int health;
	int maxHP;

public:
	Terran();

	void Recovery();
	void Damage(int damage);
};

