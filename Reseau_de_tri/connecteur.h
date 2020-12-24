#ifndef CONNECTEUR_H
#define CONNECTEUR_H
#include <QString>
#include <QList>

class Connecteur
{
private:
    int m_position = 0;
    int m_depuis = 0;
    int m_vers = 0;
    QList<Connecteur *> connecteurList;

public:
    Connecteur(int p, int d, int v);
    int getPosition();
    int getDepuis();
    int getVers();
    QString toString();
    void decrementePosition();
    bool lessPositionThan(Connecteur *c1, Connecteur *c2);
    bool lessDepuisThan(Connecteur *c1, Connecteur *c2);
};

#endif // CONNECTEUR_H
