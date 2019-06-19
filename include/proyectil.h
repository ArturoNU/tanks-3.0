#ifndef PROYECTIL_H
#define PROYECTIL_H

#include<string>
using namespace std;

#include "Entity.h"

class proyectil:Entity{
    public:

        proyectil(string);
        proyectil(string, float, float, Entity::Location);

        proyectil(string, int, int, int);
        virtual ~proyectil();

    protected:

    private:
        int damage;
        int efect;
        int type;
        string img;
};

#endif // PROYECTIL_H
