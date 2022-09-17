/*
    Name: Addie Duffy
    Lab #: [FILL IN HERE]
    Description: prog5 for lab3, CONVERTING CELCIUS TO FAHRENHEIT & vice versa
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   double fah = 56.0;  //declare and initialize at the same time - page 48
   double cel = 20.0;

   ctof = ((9.0/5.0) * cel) + 32.0;
   ftoc = (5.0/9.0) * (fah - 32.0);

   cout << cel << " degrees Celsius in Fahrenheit is " << ctof << setprecision(3) << endl;
   cout << fah << " degrees Fahrenheit in Celsius is " << ftoc << setprecision(3) << endl;

   return (EXIT_SUCCESS);
}