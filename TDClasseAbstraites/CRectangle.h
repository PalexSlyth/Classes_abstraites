#pragma once
#include "CFigure.h"




class CRectangle : public CFigure
{

protected : 
	int m_Largeur, m_Hauteur; //prot�ger pour qu'il soit accessible depuis les classe ayant l'acc�s public 
public:
	CRectangle(int x, int y);//constructeur
	virtual void air() const;//fonction virtuelle



};