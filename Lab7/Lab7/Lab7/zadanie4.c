#include "zadanie4.h"

void przepisz_tablice(struct punkt* tab1, struct punkt* tab2, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tab2[i] = tab1[i];
    }
}
