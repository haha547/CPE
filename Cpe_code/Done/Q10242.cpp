#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;
typedef struct pnode{
    double x,y;
    pnode (double a, double b){x = a;y = b;};
    pnode(){};
}point;

int main() {

    point a, b, c, d;
    while (cin >> a.x >> a.y >> b.x >> b.y) {
        cin >> c.x >> c.y >> d.x >> d.y;
        //调整，让b和c坐标相同
        if (a.x == c.x && a.y == c.y)
            swap(a, b);
        if (a.x == d.x && a.y == d.y) {
            swap(a, b);
            swap(c, d);
        }
        if (b.x == d.x && b.y == d.y)
            swap(c, d);
        point e = point(a.x + d.x - c.x, a.y + d.y - c.y);
        printf("%.3lf %.3lf\n", e.x, e.y);
    }
    return 0;

}