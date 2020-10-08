/**
Read two integer values. After this, calculate the product between them and store the result in a variable named PROD. Print the result like the example below. Do not forget to print the end of line after the result, otherwise you will receive “Presentation Error”.
Input

The input file contains 2 integer numbers.
Output

Print the message "PROD" and PROD according to the following example, with a blank space before and after the equal signal

Disponível: https://www.urionlinejudge.com.br/judge/en/problems/view/1004
*/

#include <iostream>
 
using namespace std;
 
int main() {
  
  int numero1, numero2;
  
  cin >> numero1 >> numero2;
  
  int PROD = numero1 * numero2;

  cout << "PROD = " << PROD << endl;
  
  return 0;
}
