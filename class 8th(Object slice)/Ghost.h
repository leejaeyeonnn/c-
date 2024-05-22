#pragma once
#include "Terran.h"
class Ghost :   public Terran 
{

public:
	ghost(); 

	void Recovery() override;
	void Damage(int damage) override;

};

