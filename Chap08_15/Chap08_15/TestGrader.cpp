// Chap08_15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>
#include "TestGrader.h"

/*** TestGrader Class Defintion ***/
TestGrader::TestGrader()
{

}


TestGrader::TestGrader(const char key[20])
{
	for (int i = 0; i < 20; i++)
	{
		this->key[i] = key[i];
	}
}



int main()
{
    return 0;
}

