#include "connecteur.h"

Connecteur::Connecteur(int p, int d, int v): m_position(p), m_depuis(d), m_vers(v)
{

}

int Connecteur::getPosition()
{
    return m_position;
}

int Connecteur::getDepuis()
{
    return m_depuis;
}

int Connecteur::getVers()
{
    return m_vers;
}

QString Connecteur::toString()
{
    QString res;
    res.sprintf("\nConnecteur position %d, depuis %d, vers %d", m_position, m_depuis, m_vers);
    return res;
}

void Connecteur::decrementePosition()
{

}

bool Connecteur::lessPositionThan(Connecteur *c1, Connecteur *c2)
{

}

bool Connecteur::lessDepuisThan(Connecteur *c1, Connecteur *c2)
{

}
