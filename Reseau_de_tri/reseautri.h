#ifndef RESEAUTRI_H
#define RESEAUTRI_H
#include <QList>
#include <QString>
#include "connecteur.h"

class ReseauTri : public::QList<Connecteur *>
{
private:
    int m_nbFils = 0;
public:
    ReseauTri(int nb);
    // ajoute un connecteur à une position imposée
    void ajouteConnecteur(int p, int d, int v);
    // ajoute un connecteur en dernière position
    void ajouteConnecteur(int d, int v);
    void ajouteConnecteur(Connecteur *c);
    QString toString();
    int getPostMax();
    ReseauTri getConnecteur(int pos);
    QList<int> injecte(QList<int> valeurs);
    bool testZeroUn();
    void parallele();
};

#endif // RESEAUTRI_H
