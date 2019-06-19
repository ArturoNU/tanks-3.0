#include "proyectil.h"

int damage;
int efect;
int type;
string img;

proyectil::proyectil(int d, int e, int t, string i)
{
    damage = d;
    efect = e;
    type = t;
    img = i;
    //ctor
}

proyectil::~proyectil()
{
    //dtor
}


