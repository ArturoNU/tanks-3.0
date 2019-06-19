#ifndef ENTITY_H
#define ENTITY_H

#include<string>
using namespace std;

class Entity{
    public:
        struct Location{
            float x;
            float y;
        };
        Entity(string img);
        Entity(string img, float rot, float siz, Location loc);

        ~Entity();

    private:
        string image;
        float rotation;
        float size;
        Location location;
};

#endif // ENTITY_H
