#pragma once
#include "CFigure.h"




class CRectangle : public CFigure
{

protected : 
	int m_Largeur, m_Hauteur; //protéger pour qu'il soit accessible depuis les classe ayant l'accès public 
public:
	CRectangle(int x, int y);//constructeur
	virtual void air() const;//fonction virtuelle



};