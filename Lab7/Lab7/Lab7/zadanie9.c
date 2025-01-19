#include "zadanie9.h"

double pole(struct figura f) {
    switch (f.fig) {
    case 1: // Tr�jk�t
        return 0.5 * f.wym1 * f.wym2;
    case 2: // Prostok�t
        return f.wym1 * f.wym2;
    case 3: // R�wnoleg�obok
        return f.wym1 * f.wym2;
    case 4: // Trapez
        return 0.5 * (f.wym1 + f.wym2) * f.wym3;
    default:
        return 0.0;
    }
}
