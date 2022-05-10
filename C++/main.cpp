#include <iostream>
#include <string>
#include <math.h>
#include "elementos.h"

float distancia(float vel, float xbla, float ybla, int bandera);

float distancia(float vel, float xbla, float ybla, int bandera)
{
    const float PI = 3.1416;
    const float g = 9.8;
    float theta = PI/6;
    float velx = vel*cos(theta);
    float vely = vel*sin(theta);
    float delta = 0.01;
    Proyectil proy;
    proy.posx = 0;
    proy.posy = 0;
    FILE* pf;
    if(bandera==1)
    {
        pf=fopen("trayecto.txt","wt");
        fprintf(pf, "%.2f\t%.3f\n",proy.posx,proy.posy);
        printf(pf, "%.2f\t%.3f\n",proy.posx,proy.posy);
    }
    while (proy.posx<xbla && proy.posy>=0)
    {
        pory.posx = proy.posx+velx*delta;
        pory.posy = proy.posy+vely*delta;
        vely = vely-g*delta;
        if(bandera==1)
        {
            fprintf(pf, "%.2f\t%.3f\n",proy.posx,proy.posy);
            printf(pf, "%.2f\t%.3f\n",proy.posx,proy.posy);
        }
    }
    if (bandera==1)
    {
        fclose(pf);
    }
    return proy.posy-ybla;
}