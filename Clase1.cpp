#include <iostream>

using namespace std;

int main(){

float altura, peso, resIMC;

altura = 1.75;
peso = 65.5;
resIMC = altura / (peso * peso);

if(resIMC < 16.5){

    cout << "Empeza a comer";

}else if(resIMC >= 16.5 && resIMC < 18.5){

    cout << "Peso Bajo";

}else if(resIMC >= 18.5 && resIMC < 25){

    cout << "Normal";

}else if(resIMC >= 25 && resIMC < 30){

    cout << "Sobrepeso";

}else if(resIMC >= 30 && resIMC < 35){

    cout << "Obesidad Tipo 1";

}else if(resIMC >= 35 && resIMC < 40){

    cout << "Obesidad Tipo 2";

}else{

    cout << "Obesidad Tipo 3: Morbida";

};

}
