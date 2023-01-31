#include <iostream>

int** vec2diagMtx(const int* vector, int n) {
    int** matrix = nullptr;

    matrix = new int* [n];

    for(int i = 0; i < n; i++){
        matrix[i] = new int[n];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix[i][j] = 0;
            if(i == j){
                matrix[i][j] = vector[i];
            }
        }
    }
    return matrix;
}

int main(){
    int v[] = {1, 2, 3};
    int n = sizeof(v)/sizeof(v[0]);
    int** m = vec2diagMtx(v, n);
}