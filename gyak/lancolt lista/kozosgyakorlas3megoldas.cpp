#include <iostream>
#include <math.h>
#include <iomanip>

double* createRotation(const double alpha)
{
    double *rot = new double[4];
    rot[0] = cos(alpha);
    rot[1] = -sin(alpha);
    rot[2] = sin(alpha);
    rot[3] = cos(alpha);
    return rot;
}

double* createTranslation(const double x, const double y)
{
    double* tr = new double[2];
    tr[0] = x;
    tr[1] = y;
    return tr;
}

double** convertTo2DHomogeneousTransformation(double* r, double* t)
{
    double** res = new double*[3];
    for (unsigned int i = 0; i < 3; i++)
    {
        res[i] = new double[3];        
        for (unsigned int j = 0; j < 3; j++)
            res[i][j] = 0.0;
    }
    for (unsigned int i = 0; i < 2; i++)
    {
        for (unsigned int j = 0; j < 2; j++)
        {
            res[i][j] = r[j + 2 * i];
        }
    }
    for (unsigned int i = 0; i < 3; i++)
    {
        res[i][2] = t[i];
    }
    res[2][2] = 1;
    return res;
}

void printHomogeneousTransformation(double** hom)
{
    std::cout << std::setprecision(3);
    std::cout << std::fixed;
    std::cout << '['<< '\n';
    for (int i = 0; i < 3; i++)
    {
        std::cout << '[';
        for (int j = 0; j < 3; j++)
        {
            std::cout << hom[i][j] << ',';        
        }
        std::cout << ']' << '\n';
    }
    std::cout << ']' << '\n';
}

int main()
{
double* tr = createTranslation(0.0, 0.0);
double *rot = createRotation(0.0);
double **hom = convertTo2DHomogeneousTransformation(rot, tr);
delete tr;
delete rot;
printHomogeneousTransformation(hom);

tr = createTranslation(6.0, 2.0);
rot = createRotation(M_PI);
hom = convertTo2DHomogeneousTransformation(rot, tr);
delete tr;
delete rot;
printHomogeneousTransformation(hom);
}