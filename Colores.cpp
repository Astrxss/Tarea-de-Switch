#include <iostream>
using namespace std;
int main()
{
    char letra;
    cout << "Ingrese una letra para conocer su color: " ;
    cin >> letra;
    switch (letra)
    {
        case 'R':
        cout << letra << "Color Rojo " ;
        break;

        case 'Y':
        cout << letra << "Color Amarillo " ;
        break;

        case 'B':
        cout << letra << "Color Azul " ;
        break;

        case 'W':
        cout << letra << "Color Blanco " ;
        break;

        case 'K':
        cout << letra << "Color Negro " ;
        break;

        case 'C':
        cout << letra << "Color Cian " ;
        break;

        case 'G':
        cout << letra << "Color Verde " ;
        break;

         case 'r':
        cout << letra << "Color Rojo " ;
        break;

        case 'y':
        cout << letra << "Color Amarillo " ;
        break;

        case 'b':
        cout << letra << "Color Azul " ;
        break;

        case 'w':
        cout << letra << "Color Blanco " ;
        break;

        case 'k':
        cout << letra << "Color Negro " ;
        break;

        case 'c':
        cout << letra << "Color Cian " ;
        break;

        case 'g':
        cout << letra << "Color Verde " ;
        break;

        default :
        cout << "datos incorrectos \n";
        
    }
    return 0;

}