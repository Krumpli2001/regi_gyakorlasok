#include <iostream>
#include <math.h>
#include <iomanip>

double* createRotation(const double alpha)
{
    double* vektor = new double[4];
    vektor[0] = cos(alpha);
    vektor[1] = -sin(alpha);
    vektor[2] = sin(alpha);
    vektor[3] = cos(alpha);
    return vektor;
}

double* createTranslation(const double x, const double y)
{
    double* eltolasvektor = new double[2];
    eltolasvektor[0] = (double)x;
    eltolasvektor[1] = (double)y;
    return eltolasvektor;
}

double** convertTo2DHomogeneousTransformation(double* r, double* t)
{
    double** matrix = new double* [3];
    for(int i = 0; i < 3; i++)
    {
        matrix[i] = new double[3];
    }
    
    matrix[0][0] = r[0];
    matrix[0][1] = r[1];
    matrix[0][2] = t[0];
    matrix[1][0] = r[2];
    matrix[1][1] = r[3];
    matrix[1][2] = t[1];
    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 1;
    
    return matrix;
}

void printHomogeneousTransformation(double** hom)
{
    std::cout<<"[\n";
    std::cout << std::fixed;
    for(int i = 0; i < 3; i++)
    {
        std::cout<<"[";
        for(int j = 0; j < 3; j++)
        {
            //if(abs(hom[i][j]) > 0.001)
            //{
                std::cout << std::setprecision(3) << hom[i][j] << ",";
            //}
            //else
            //std::cout << std::setprecision(3) << 0.0 <<" ";
        }
        std::cout<<"]";
        std::cout<<"\n";
    }
    std::cout<<"]";
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