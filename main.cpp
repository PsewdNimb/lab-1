#include <iostream>
#include <stdlib.h>
#include "Vector.cpp"
using ValueType = double;
using namespace std;
int main(){
    double test[5] = {1,2,3,4,5};
    const ValueType *pv {test};
    Vector vc(pv,128);
    float b = vc[1];
    cout << b << endl;
    return 0;
}