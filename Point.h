#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        //constructeur
        double x, y;
        double distance(const Point &P);
        Point milieu(const Point &P);     
};

#endif // POINT_H