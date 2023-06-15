#pragma once

//#pragma once

#ifndef _CHEMICALSEXPLOSION_		// include guard
#define _CHEMICALSEXPLOSION_

#include <iostream>
#include <vector>

#include "scene.h"


class ChemicalsExplosion : public Scene
{
public:
	ChemicalsExplosion();
	~ChemicalsExplosion();

	void Create();
	void Initialize();
	void UnInitialize();
	void Update();
	void Draw();

	class material
	{
	public:
		material();
		material(int a, int b, int c);
		~material();

		int A;
		int B;
		int C;
	};

private:

	int CulMaxM(int chemicals);

	int chemicalsMax;
	int mMax;
	int mNum;

	std::vector<material> ChemicalsExplosionRecipe;
};



#endif	// _CHEMICALSEXPLOSION_
