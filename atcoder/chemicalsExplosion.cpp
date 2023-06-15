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
	chemicalsMax = 6;
	mMax = CulMaxM(chemicalsMax);
	mNum = 7;
	material mat;
}

void ChemicalsExplosion::UnInitialize()
{
}

void ChemicalsExplosion::Update()
{
}

void ChemicalsExplosion::Draw()
{
}

int ChemicalsExplosion::CulMaxM(int chemicals)
{
	return (chemicals * (chemicals - 1) * (chemicals - 2)) / 6;
}

ChemicalsExplosion::material::material()
{
	A = 0;
	B = 0;
	C = 0;
}

ChemicalsExplosion::material::material(int a, int b, int c)
{
	A = a;
	B = b;
	C = c;
}

ChemicalsExplosion::material::~material()
{
}
