#include <cmath>
#include "Point.h"

double Point :: distance(const Point &P)
{
    double dx,dy;
    dx = x - P.x;
    dy = y = P.y;
    return sqrt(dx*dx + dy*dy);
}

Point Point ::milieu(const Point &P)
{
    Point M;
    M.x = (P.x + x) /2;
    M.y = (P.y + x) /2;
    return M;
}
