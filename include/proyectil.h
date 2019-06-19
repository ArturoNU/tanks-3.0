#ifndef PROYECTIL_H
#define PROYECTIL_H


class proyectil
{
    public:
        proyectil();
        virtual ~proyectil();

    protected:

    private:
        int damage;
        int efect;
        int type;
        string img;
};

#endif // PROYECTIL_H
