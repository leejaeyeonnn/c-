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

	cout << "Marine�� ü��: " << endl;
}

void Marine::Damage(int damage)
{

}
