#pragma once
#ifndef ZADANIE9_H
#define ZADANIE9_H

struct figura {
    int fig; // 1: tr�jk�t, 2: prostok�t, 3: r�wnoleg�obok, 4: trapez
    double wym1, wym2, wym3;
};

double pole(struct figura f);

#endif
#pragma once
