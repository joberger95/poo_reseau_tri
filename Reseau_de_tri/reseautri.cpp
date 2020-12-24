#include "reseautri.h"
#include <QTextStream>

ReseauTri::ReseauTri(int nb): m_nbFils(nb)
{}

void ReseauTri::ajouteConnecteur(int p, int d, int v)
{
    //add a connector to the QList
    append(new Connecteur(p,d,v));
}

void ReseauTri::ajouteConnecteur(int d, int v)
{
    //add a connector to the QList automatically at the last pos
    append(new Connecteur(getPostMax()+1, d, v));
}

void ReseauTri::ajouteConnecteur(Connecteur *c)
{
    //add the connector c to the QList
    append(c);
}

QString ReseauTri::toString()
{
    QString res;
    QTextStream buf(&res);
    buf<<"Ce reseau contient "<<m_nbFils<<" fils et "<<size()<<" connecteurs :";
    foreach (Connecteur *c, *this) {
        buf<<Qt::endl<<"- "<<c->toString();
    }
    return res;
}

int ReseauTri::getPostMax()
{
    //Get the position of the last(s) connector(s)
    int max=-1;
    foreach (Connecteur *c, *this) {
        if(c->getPosition()>max)
            max=c->getPosition();
    }
    return max;
}

ReseauTri ReseauTri::getConnecteur(int pos)
{
    //Return the connector at pos indication
    ReseauTri res(m_nbFils);
    foreach (Connecteur *c, *this) {
        if(c->getPosition()==pos)
            res.append(c);
    }
    return res;
}

QList<int> ReseauTri::injecte(QList<int> valeurs)
{
    //If connector position value is less than nearest, switch them up
    //else continue to check the value list to sort values
    foreach(valeurs, *this){

    }
}

bool ReseauTri::testZeroUn()
{
//    short nb = 4;
//    short v = 0;
//    for(int i=0 ; i<(2^nb) ; i++){
//        QList<int> v_in;
//        v = i;
//        for(int j=0; j<nb; j++){
//            v_in.prepend(v%2);
//            v = v/2;
//        }
//    }
}

void ReseauTri::parallele()
{

}
