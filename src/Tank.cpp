#include "Tank.h"

Tank::Tank(string img):Entity(img){

}

Tank::Tank(string img, float rot, float siz, Entity::Location loc):Entity(img, rot, siz, loc){

}



Tank::~Tank()
{
    //dtor
}
