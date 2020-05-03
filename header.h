#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

float det_1(float a, float b, float c, float d);

#define det_2(a, b, c, d) a*d - b*c
#define det_3(a) (b) (c) (d) (a*d - b*c)

inline float det_4(float a, float b, float c, float d){
    return a*d - b*c;
}


#endif // HEADER_H
