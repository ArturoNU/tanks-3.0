#include "proyectil.h"

proyectil::proyectil(string img):Entity(img){
}



proyectil::proyectil(string img, float rot, float siz, Entity::Location loc):Entity(img, rot, siz, loc){
}



proyectil::proyectil(string img, int d, int e, int t):Entity(img){
    damage = d;
    efect = e;

    type = t;
    //ctor
}

proyectil::~proyectil()
{
    //dtor
}


