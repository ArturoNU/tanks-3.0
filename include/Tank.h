#ifndef TANK_H
#define TANK_H

#include<string>
using namespace std;

#include "Entity.h"

class Tank:Entity{
    public:
        Tank(string img);
        Tank(string img, float rot, float siz, Entity::Location loc);
        virtual ~Tank();

    protected:

    private:
};

#endif // TANK_H
