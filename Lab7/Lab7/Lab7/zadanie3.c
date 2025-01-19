#include "zadanie3.h"
#include <math.h>

static double odleglosc(struct punkt p1, struct punkt p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

double najmniejsza_odleglosc(struct punkt* tab, int rozmiar) {
    double min_odleglosc = odleglosc(tab[0], tab[1]);
    for (int i = 0; i < rozmiar - 1; i++) {
        for (int j = i + 1; j < rozmiar; j++) {
            double odl = odleglosc(tab[i], tab[j]);
            if (odl < min_odleglosc) {
                min_odleglosc = odl;
            }
        }
    }
    return min_odleglosc;
}
