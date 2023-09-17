#ifndef MATRIX_H
#define MATRIX_H
#include "number.h"
#include <iostream>
using namespace std;
class Matrix
{
    number **Arr;
    int size=3;
public:
    Matrix();
    number** GetArr();
    int GetSize();
    void ShowMatrix(int size,number **Arr);
    void EnterMatrix(int size,number **Arr);
    number DetMatrix(number **Arr);
    int RankMatrix(int size,number **Arr);
    void TransponedMatrix(int size,number **Arr);
    ~Matrix();
};
#endif // MATRIX_H
