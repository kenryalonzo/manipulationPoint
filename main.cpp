#include <iostream>
#include "Point.h"

using namespace std;

int main()
{ 
   Point A, B, C;
   double d;
   cout << "SAISIR DU POINT A" <<endl;
   cout << "Taper l'abscisse : "; cin >> A.x;
   cout << "Taper l'ordonne : "; cin >> A.y;
   cout << endl;

   cout << "SAISIR DU POINT B" <<endl;
   cout << "Taper l'abscisse : "; cin >> B.x;
   cout << "Taper l'ordonne : "; cin >> B.y;

   C = A.milieu(B);
   d = A.distance(B);
   cout << endl;

   cout << "MILEU DE AB" << endl;
   cout << "L'abscisse vaut : " << C.x << endl;
   cout << "L'ordonne vaut : " << C.y << endl;
   cout << endl;

   cout << "La distance AB vaut : " << d << endl;

    return 0;
}