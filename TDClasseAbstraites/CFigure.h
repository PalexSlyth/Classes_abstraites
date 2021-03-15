#pragma once
#include "CRectangle.h"
/*class CFigure
{
protected : 
	int m_x, m_y;
	int m_Largeur, m_Hauteur;

public :
	//r�cup�ration des champs
	void set_data(int m_x, int m_y);

//m�thodes virtuelles pures
//virtual int dessiner() = 0;
virtual int  air() = 0;
virtual int  perimetre() = 0;


};*///ancien code mais dans le m�me fichier

class CFigure
{
protected:
    int m_x, m_y;
public:

	CFigure(int x, int y);//constructeur

	//fonctions virtuelles pures
	virtual void dessiner() = 0;
	virtual void  air() = 0;
	virtual void  perimetre() = 0;

	virtual ~CFigure();//destructeur
};