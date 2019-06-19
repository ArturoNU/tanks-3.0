#ifndef TANK_H
#define TANK_H

#include<string>
using namespace std;

class Tank{
    public:
        struct coordinate{
            float x;
            float y;
        };
        string image;
        float rotation;
        float size;
        coordinate location;

        Tank();
        virtual ~Tank();

    protected:

    private:
};

#endif // TANK_H
