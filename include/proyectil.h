#ifndef PROYECTIL_H
#define PROYECTIL_H

#include<string>
using namespace std;

class proyectil
{
    public:
        proyectil(int, int, int, string);
        virtual ~proyectil();

    protected:

    private:
        int damage;
        int efect;
        int type;
        string img;
};

#endif // PROYECTIL_H
