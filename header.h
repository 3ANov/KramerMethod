#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

void det_1(float a, float b, float c, float d);

#define det_2(a, b, c, d) a*d - b*c == 0 ? cout << "Бесконечно решений": cout << "Определитель равен " << a*d - b*c << '\n'

inline void det_4(float a, float b, float c, float d){
    float result = a*d - b*c;
    //тернарный оператор
    result == 0 ? cout << "Бесконечно решений": cout << "Определитель равен " << result << '\n';
}


#endif // HEADER_H
