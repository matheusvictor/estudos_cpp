/**
In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 e 1. Print the read value and the list of banknotes.
Input

The input file contains an integer value N (0 < N < 1000000).
Output

Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.

Disponível: https://www.urionlinejudge.com.br/judge/en/problems/view/1018
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

  int saque;
  int notaCem, notaCinq, notaVinte, notaDez, notaCinco, notaDois, notaUm;
  int resto = saque;

  cin >> saque;

  notaCem = saque/100;
  resto = saque % 100;
  notaCinq = resto / 50;
  resto = resto % 50;
  notaVinte = resto / 20;
  resto = resto % 20;
  notaDez = resto / 10;
  resto = resto % 10;
  notaCinco = resto / 5;
  resto = resto % 5;
  notaDois = resto / 2;
  resto = resto % 2;
  notaUm = resto / 1;
  resto = resto % 1;
  
  cout << saque << endl << notaCem << " nota(s) de R$ 100,00" << endl << notaCinq << " nota(s) de R$ 50,00" << endl << notaVinte << " nota(s) de R$ 20,00" << endl << notaDez << " nota(s) de R$ 10,00" << endl << notaCinco << " nota(s) de R$ 5,00" << endl << notaDois << " nota(s) de R$ 2,00" << endl << notaUm << " nota(s) de R$ 1,00" << endl;
    
}