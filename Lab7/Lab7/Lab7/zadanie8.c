#include "zadanie8.h"

struct zespolone dodaj(struct zespolone z1, struct zespolone z2) {
    struct zespolone wynik;
    wynik.re = z1.re + z2.re;
    wynik.im = z1.im + z2.im;
    return wynik;
}
