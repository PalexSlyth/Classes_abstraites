#include "CRectangle.h"
#include"CFigure.h"

CRectangle::CRectangle(int x, int y) : m_Hauteur(x), m_Largeur(y)
{
}

void CRectangle::air() const
{
		return (x * y);
}
