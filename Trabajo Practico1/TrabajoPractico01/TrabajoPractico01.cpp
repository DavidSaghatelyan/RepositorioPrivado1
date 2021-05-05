#include <iostream>
using namespace std;

//El cin es para asignarle el valor a una variable (tenes que tenerla declarada antes!)

//El cout es para mostrar lo que quieras en pantalla

// int = NUMERO SIN COMA
// float = NUMERO CON COMA

//if(si pasa tal cosa)
//{
// 
// hago esto
// 
//}
//else         SI NO PASA LO DE ARRIBA
//{
// hago esto otro
// }
//




int main()
{
    
    int menuDesicion = 1;

    float kmh;
    float mts;

    float pendiente1;
    float pendiente2;
    float primerOrdenada;
    float segundaOrdenada;

    float pX;
    float pY;

    cout << "Elija 1 o 2 para iniciar un ejercicio" << endl;
    cin >> menuDesicion;


    if (menuDesicion == 1)
    {

        cout << "Ingrese una velocidad km/h para convertirlo en mts/s" << endl;
        cin >> kmh;

        mts = (kmh) / 3.6;

        cout << mts << endl;

    }
    else if (menuDesicion == 2)

    {
        cout << "Ingrese una pendiente" << endl;
        cin >> pendiente1;
        cout << "Ingrese una primer ordenada" << endl;
        cin >> primerOrdenada;
        cout << "Ingrese la segunda pendiente" << endl;
        cin >> pendiente2;
        cout << "Ingrese la segunda ordenada" << endl;
        cin >> segundaOrdenada;

        if (pendiente1 == pendiente2 && primerOrdenada == segundaOrdenada)
        {
            cout << "Las rectas son iguales por lo tanto la recta es la interseccion" << endl;
        }

        else if (pendiente1 == pendiente2)
        {
            cout << "Son paralelas, no hay interseccion" << endl;
        }
        else
        {
            pX = (primerOrdenada - segundaOrdenada) / (pendiente2 - pendiente1);
            pY = pendiente1 * pX + primerOrdenada;

            cout << "Son perpendiculares y los puntos son " << pX << " , " << pY << endl;
        }
    }
    
    else 
    {
        cout << "No es una opcion valida" << endl;

    }
}