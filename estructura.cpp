#include<iostream>
using namespace std;
/*
    Estructura:
                Colección de una o más tipos de denominados campos.
*/
struct coleccion_cd2
{
    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char ficha_compra[20];
}cd1,cd2,cd3;

struct coleccion_cd
{
    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char ficha_compra[20];
}; 

int main()
{
    struct coleccion_cd cd1,cd2,cd3;
}