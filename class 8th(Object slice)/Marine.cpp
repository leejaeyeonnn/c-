#include "Marine.h"
#include<iostream>

Marine::marine()
{
	health = 50;
	maxHP = health;

}

void Marine::Recovery()
{

	health = maxHP;

	cout << "MarineÀÇ Ã¼·Â: " << endl;
}

void Marine::Damage(int damage)
{

}
