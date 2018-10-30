//
//  main.cpp
//  plantillas
//
//  Created by Pepe Hdez hdez on 4/10/18.
//  Copyright © 2018 Pepe Hdez hdez. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
template<class Matrix>
void muestraMatriz(Matrix mat, int size){
    for (int i=0; i<size; i++){
        for (int c=0; i<size; i++){
            cout << mat[i][c] << " ";
        }
        cout << endl;
    }
}
template<class Matr>
void muestraCol(Matr mat, int size, int colu){
for (int i=0; i<size; i++){
    cout << mat[i][colu] << endl;
}
}
    template<class Mat>
    Mat datoMayor(Mat mat[10][10], int size){
        Mat mayor=mat[0][0];
        for (int i=0; i<size; i++){
            for (int c=0; c<size; c++){
                if (mat[i][c]>mayor){
                    mayor=mat[i][c];
                }
            }
        }
        return mayor;
    }
int main() {
    double dMatNum[10][10]  = { {2.5, 3.8, 4.7},
        {2.2, 4.4, 6.6},
        {2.5, 3.7, 5.9}};
    string sMatLet[10][10]  = {{"a1", "b2", "c3"},
        {"dado", "lente", "tren"},
        {"gato", "iguana", "canario"}};
    int iSize = 3;
    int iColumna;
    double dMayor;
    string sMayor;
    cout << endl << "Cual columna quieres copiar ";
    cin >> iColumna;
    
    cout << "primera matriz "<< endl;
    muestraMatriz(dMatNum, iSize);
    cout << "Columna de la primera matriz son " << endl;
    muestraCol(dMatNum, iSize, iColumna);
    cout << "el dato mayor de la matriz es " << endl;
    dMayor = datoMayor(dMatNum, iSize);
    cout << dMayor << endl;
    
    cout << "segunda matriz "<< endl;
    muestraMatriz(sMatLet, iSize);
    cout << "Columna de la primera matriz son " << endl;
    muestraCol(sMatLet, iSize, iColumna);
    cout << "el dato mayor de la matriz es " << endl;
    sMayor = datoMayor(sMatLet, iSize);
    cout << sMayor << endl;

    return 0;
}
