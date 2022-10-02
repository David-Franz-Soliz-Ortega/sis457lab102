#include <iostream>

 using namespace std;
 int main()
 {
    
     string palabra = "si";
     while (palabra == "si") {
         cout << "----Biografia personal----" << endl;
         cout << "David Franz Soliz Ortega" << endl;
         cout << "Mi nombre es David Franz Soliz Ortega y tengo 20 años" << endl;
         cout << "nací en Sucre, Bolivia el 16 de junio del 2002" << endl;
         cout << "estudié en el colegio Don Bosco en Sucre y terminé el colegio en 2020" << endl;
         cout << "actualmente estoy estudiando la carrera de ingeniería de sistemas en la USFX" << endl;
         cout << "desearía programar videojuegos y otros programas para tener una empresa de aplicaciones" << endl;
         cout << "  ---------------------------- " << endl;
         palabra = "a";
         while (palabra!="si" && palabra !="no") {
             cout << "¿Quiere volver a imprimir biografia personal (escriba si) o terminar programa (escriba no)?" << endl;
             cin >> palabra;
             if(palabra != "si" && palabra != "no"){
                cout << "-------------------------------------------"<<endl;
                 cout << "Introdujo otra palabra, por favor, vuelva a introducir si o no"<<endl;
                 cout << " " << endl;
             }
         }
     }
     cout << "--------------------" << endl;
     cout << "fin del programa"<<endl;
     cout << "--------------------" << endl;
     return 0;
}