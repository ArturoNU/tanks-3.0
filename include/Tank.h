#ifndef TANK_H
#define TANK_H

class Tank{
    public:
        struct loc{
            float x;
            float y;
        };
        string image;
        float rotation;
        float scale;
        loc location;

        Tank();
        virtual ~Tank();

    protected:

    private:
};

#endif // TANK_H
