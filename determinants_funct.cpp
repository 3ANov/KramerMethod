#include "header.h"

void det_1(float a, float b, float c, float d){
    float result = a*d - b*c;
    //тернарный оператор
    result == 0 ? cout << "Бесконечно решений": cout << "Определитель равен " << result << '\n';
}
