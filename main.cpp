/* 
Gabriel A. Ramos Rivera
Gabterr
801-24-0582
*/
#include<iostream>
using namespace std;

int main(){
  // Despliega el proposito del programa
  cout << "Este programa suma dos fracciones." << endl;

  // Pedir numerador y denominador de ambas fracciones. 
  double nume1, deno1, nume2, deno2;
  cout << "Entre el numerador de la 1ra fracción: ";
  cin >> nume1;
  cout << "Entre el denominador de la 1ra fracción: ";
  cin >> deno1;
  cout << "Entre el numerador de la 2da fracción: ";
  cin >> nume2;
  cout << "Entre el denominador de la 2da fracción: ";
  cin >> deno2;

  // Calcular la suma de las fracciones 
  double nume_result = nume1 * deno2 + deno1 * nume2, deno_result = deno1 * deno2;

  // Despliegar resultado
  cout << "La suma es: " << nume_result << "/" << deno_result << endl;

  return 0;
}
