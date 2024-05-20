#pragma once

#include "Mouse.h"
#include "Keyboard.h"



class Computerr: public Mouse, public Keyboard
{
public:
	void Use();

};

