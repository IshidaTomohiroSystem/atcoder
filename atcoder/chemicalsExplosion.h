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

	class Material
	{
	public:
		Material();
		Material(int a, int b, int c);
		~Material();

		int A;
		int B;
		int C;

		bool operator==(const Material& rhs) const
		{
			return (A == rhs.A && B == rhs.B && C == rhs.C);
		}

		bool operator!=(const Material& rhs) const
		{
			return (A != rhs.A || B != rhs.B || C != rhs.C);
		}
	};

	class RecipeX
	{
	public:
		RecipeX()
		{
			x = 0;
			y = 0;
		}
		~RecipeX() {}

		int x;
		int y;
	};

private:

	int CulMaxM(int chemicals);
	void CulRecipeX();

	int chemicalsMax;
	int mMax;
	int mNum;

	int chemicalCount;

	std::vector<Material> ChemicalsExplosionRecipes;
};



#endif	// _CHEMICALSEXPLOSION_
