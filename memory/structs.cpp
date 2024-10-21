#include <iostream>

using namespace std;


template< typename AnyPointer>

struct Points{
    AnyPointer x;
    AnyPointer y;

    Points( AnyPointer x, AnyPointer y ): x( x ), y( y ){};
};

struct Point {
    int y;
    int x;
};

struct OtherPoint {
    int y;
    int x;

    OtherPoint( int y, int x ): y( y ), x( x ){};
};

struct PointPointer {
    int x;
    int y;

    PointPointer(int x, int y ): x( x ), y( y ) {};
};

int main(){

    Point p;

    p.x = 2;
    p.y = 3;

    cout << "Punto en y: " << p.y << " y punto en x " << p.x << endl;

    cout << "Punteros con contructores\n";

    OtherPoint p2( 1, 3);

    cout << "punto en y: " << p2.y << " punto en x: " << p2.x << "\n";

    cout << "Structs genericos" << endl;

    Points ps( 2.4, 2.3 );

    cout << "puntero en x: " << ps.x << " puntero en y: " << ps.y << endl;

    cout << "structs como punteros\n";

    PointPointer pl( 23, 28 );
    PointPointer* pr = &pl;

    cout << "su punto en y es:  " << pr->y << " y su punto en x es: " << pr->x;


}