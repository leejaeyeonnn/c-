#pragma once
#include<iostream>
#include "Terran.h"
using namespace std;

class Marine : public Terran
{
public:
	marine();

	void Recovery() override; 
	void Damage(int damage) override;





};

