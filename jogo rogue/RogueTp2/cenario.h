#ifndef CENARIO_H
#define CENARIO_H
#include "GameObject.h"

class Cenario : public GameObject
{
    int matrix01[15][15], matrix02[15][15];
public:
    Cenario()
    {
        //seta posititons das bordas
        for(int j = 0, i = 0; j < 15; ++j)
            matrix01[i][j] = 1;
        for(int j = 0, i = 0; i < 15; ++i)
            matrix01[i][j] = 1;
        for(int j = 0, i = 14; j < 15; ++j)
            matrix01[i][j] = 1;
        for(int j = 14, i = 0; i < 15; ++i)
            matrix01[i][j] = 1;

        //Posititons Wall:
        matrix01[1][4] = 1;
        matrix01[1][11] = 1;
        matrix01[2][2] = 1;
        matrix01[2][6] = 1;
        matrix01[3][3] = 1;
        matrix01[3][7] = 1;
        matrix01[3][11] = 1;
        matrix01[4][4] = 1;
        matrix01[4][8] = 1;
        matrix01[4][13] = 1;
        matrix01[5][2] = 1;
        matrix01[5][5] = 1;
        matrix01[5][9] = 1;
        matrix01[5][11] = 1;
        matrix01[6][2] = 1;
        matrix01[6][6] = 1;
        matrix01[2][9] = 1;
        matrix01[7][8] = 1;
        matrix01[7][11] = 1;
        matrix01[7][12] = 1;
        matrix01[7][13] = 1;
        matrix01[8][1] = 1;
        matrix01[8][5] = 1;
        matrix01[8][8] = 1;
        matrix01[9][2] = 1;
        matrix01[9][6] = 1;
        matrix01[9][11] = 1;
        matrix01[10][3] = 1;
        matrix01[10][7] = 1;
        matrix01[11][4] = 1;
        matrix01[11][8] = 1;
        matrix01[11][11] = 1;
        matrix01[11][13] = 1;
        matrix01[12][2] = 1;
        matrix01[12][5] = 1;
        matrix01[12][9] = 1;
        matrix01[13][11] = 1;
        //Enemy:
        matrix01[1][8] = 2;
        matrix01[1][12] = 2;
        matrix01[4][12] = 2;
        matrix01[6][4] = 2;
        matrix01[7][1] = 2;
        matrix01[10][1] = 2;
        matrix01[10][5] = 2;
        matrix01[10][13] = 2;
        matrix01[13][1] = 2;
        matrix01[13][8] = 2;
        matrix01[13][13] = 2;
        //Treasure
        matrix01[1][13] = 3;
        matrix01[2][7] = 3;
        matrix01[6][1] = 3;
        matrix01[6][5] = 3;
        matrix01[6][13] = 3;
        matrix01[8][12] = 3;
        matrix01[9][1] = 3;
        matrix01[9][5] = 3;
        matrix01[11][12] = 3;
        matrix01[13][2] = 3;
        matrix01[13][9] = 3;

        //Segundo cenario

        for(int j = 0, i = 0; j < 15; ++j)
            matrix02[i][j] = 1;
        for(int j = 0, i = 0; i < 15; ++i)
            matrix02[i][j] = 1;
        for(int j = 0, i = 14; j < 15; ++j)
            matrix02[i][j] = 1;
        for(int j = 14, i = 0; i < 15; ++i)
            matrix02[i][j] = 1;
        //Wall:
        matrix02[1][5] = 1;
        matrix02[1][9] = 1;
        matrix02[2][2] = 1;
        matrix02[2][4] = 1;
        matrix02[2][6] = 1;
        matrix02[2][8] = 1;
        matrix02[2][10] = 1;
        matrix02[2][12] = 1;
        matrix02[4][2] = 1;
        matrix02[4][4] = 1;
        matrix02[4][6] = 1;
        matrix02[4][8] = 1;
        matrix02[4][10] = 1;
        matrix02[4][12] = 1;
        matrix02[5][1] = 1;
        matrix02[5][13] = 1;
        matrix02[6][2] = 1;
        matrix02[6][4] = 1;
        matrix02[6][6] = 1;
        matrix02[6][8] = 1;
        matrix02[6][10] =1;
        matrix02[6][12] = 1;
        matrix02[8][2] = 1;
        matrix02[8][4] = 1;
        matrix02[8][6] = 1;
        matrix02[8][8] = 1;
        matrix02[8][10] = 1;
        matrix02[8][12] = 1;
        matrix02[9][1] = 1;
        matrix02[9][13] = 1;
        matrix02[10][2] = 1;
        matrix02[10][4] = 1;
        matrix02[10][6] = 1;
        matrix02[10][8] = 1;
        matrix02[10][10] = 1;
        matrix02[10][12] = 1;
        matrix02[12][2] = 1;
        matrix02[12][4] = 1;
        matrix02[12][6] = 1;
        matrix02[12][8] = 1;
        matrix02[12][10] = 1;
        matrix02[12][12] = 1;
        matrix02[13][5] = 1;
        matrix02[13][9] = 1;

        //Enemy:
        matrix02[1][7] = 2;
        matrix02[3][3] = 2;
        matrix02[3][9] = 2;
        matrix02[3][13] = 2;
        matrix02[5][3] = 2;
        matrix02[5][9] = 2;
        matrix02[7][3] = 2;
        matrix02[7][9] = 2;
        matrix02[7][13] = 2;
        matrix02[9][3] = 2;
        matrix02[9][9] = 2;
        matrix02[11][3] = 2;
        matrix02[11][9]=2;
        matrix02[13][7] = 2;
        matrix02[13][13] = 2;

        //Treasure:
        matrix02[1][8] = 3;
        matrix02[1][13] = 3;
        matrix02[3][1] = 3;
        matrix02[6][13] = 3;
        matrix02[7][5] = 3;
        matrix02[7][8] =3;
        matrix02[9][5] = 3;
        matrix02[11][1] = 3;
        matrix02[11][13] = 3;
        matrix02[13][3] = 3;
        matrix02[13][8] = 3;
    }

    int getM01(int x, int y){
       return matrix01[x][y];
    }
    int getM02(int x, int y){
       return matrix02[x][y];
    }
};

#endif // CENARIO_H
