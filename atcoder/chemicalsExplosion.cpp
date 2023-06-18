#include "ChemicalsExplosion.h"

ChemicalsExplosion::ChemicalsExplosion()
{
	chemicalsMax = 0;
	mMax = 0;
	mNum = 0;
}

ChemicalsExplosion::~ChemicalsExplosion()
{
}

void ChemicalsExplosion::Create()
{
	Initialize();
}

void ChemicalsExplosion::Initialize()
{
	//hemicalCount = 0;
	//hemicalsMax = 4;
	//Max = CulMaxM(chemicalsMax);
	//Num = 2;
	//aterial mat1(1, 2, 3);
	//aterial mat2(1, 2, 4);
	//Material mat3(2, 4, 5);
	//Material mat4(1, 2, 3);
	//Material mat5(4, 5, 6);
	//Material mat6(2, 5, 6);
	//Material mat7(1, 3, 5);

	chemicalCount = 0;
	chemicalsMax = 6;
	mMax = CulMaxM(chemicalsMax);
	mNum = 7;
	Material mat1(1, 2, 5);
	Material mat2(2, 3, 5);
	Material mat3(2, 4, 5);
	Material mat4(1, 2, 3);
	Material mat5(4, 5, 6);
	Material mat6(2, 5, 6);
	Material mat7(1, 3, 5);

	ChemicalsExplosionRecipes.push_back(mat1);
	ChemicalsExplosionRecipes.push_back(mat2);
	ChemicalsExplosionRecipes.push_back(mat3);
	ChemicalsExplosionRecipes.push_back(mat4);
	ChemicalsExplosionRecipes.push_back(mat5);
	ChemicalsExplosionRecipes.push_back(mat6);
	ChemicalsExplosionRecipes.push_back(mat7);
}

void ChemicalsExplosion::UnInitialize()
{
}

void ChemicalsExplosion::Update()
{
	CulRecipeX();
}

void ChemicalsExplosion::Draw()
{
	std::cout << chemicalCount << std::endl;
	std::cin.get();
}

int ChemicalsExplosion::CulMaxM(int chemicals)
{
	return (chemicals * (chemicals - 1) * (chemicals - 2)) / 6;
}

void ChemicalsExplosion::CulRecipeX()
{
	int tempCount = 0;

	for (auto recipeA : ChemicalsExplosionRecipes)
	{
		RecipeX recipeX1;
		recipeX1.x = recipeA.A;
		recipeX1.y = recipeA.B;
		RecipeX recipeX2;
		recipeX2.x = recipeA.A;
		recipeX2.y = recipeA.C;
		RecipeX recipeX3;
		recipeX3.x = recipeA.B;
		recipeX3.y = recipeA.C;

		std::vector<RecipeX> RecipeXs;
		RecipeXs.push_back(recipeX1);
		RecipeXs.push_back(recipeX2);
		RecipeXs.push_back(recipeX3);

		for (auto recipeX : RecipeXs)
		{
			for (auto recipe : ChemicalsExplosionRecipes)
			{
				if ((recipeX.x == recipe.A && recipeX.y == recipe.B) ||
					(recipeX.x == recipe.A && recipeX.y == recipe.C) ||
					(recipeX.x == recipe.B && recipeX.y == recipe.C))
				{
					tempCount++;
				}
			}

			if (chemicalCount < tempCount)
			{
				chemicalCount = tempCount;
			}

			tempCount = 0;
		}

	}

}

ChemicalsExplosion::Material::Material()
{
	A = 0;
	B = 0;
	C = 0;
}

ChemicalsExplosion::Material::Material(int a, int b, int c)
{
	A = a;
	B = b;
	C = c;
}

ChemicalsExplosion::Material::~Material()
{
}
