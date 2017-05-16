#include <iostream>
#include <math.h>       /* pow */
#include <stdio.h>      /* printf */
using namespace std;

int main() {
   cout << "_________________________\n" << endl;
   cout << "Character types\n" << endl;
   cout << "Size of char : " << sizeof(char) << " Byte >> " << sizeof(char)*8 << " Bit" << endl;
   cout << "Size of char16_t : " << sizeof(char16_t) << " Byte >> " << sizeof(char16_t)*8 << " Bit" << endl;
   cout << "Size of char32_t : " << sizeof(char32_t) << " Byte >> " << sizeof(char32_t)*8 << " Bit" << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << " Byte >> " << sizeof(wchar_t)*8 << " Bit\n" << endl;
   cout << "Integer types\n" << endl;
   cout << "Size of signed char : " << sizeof(signed char) << " Byte >> " << sizeof(signed char)*8 << " Bit" << endl;
   cout << "Size of short int : " << sizeof(short int) << " Byte >> " << sizeof(short int)*8 << " Bit" << endl;
   cout << "Size of int : " << sizeof(int) << " Byte >> " << sizeof(int)*8 << " Bit"  << endl;
   cout << "Size of long int : " << sizeof(long int) << " Byte >> " << sizeof(long int)*8 << " Bit"  << endl;
   cout << "Size of long long int : " << sizeof(long long) << " Byte >> " << sizeof(long long)*8 << " Bit\n"  << endl;
   cout << "Floating-point\n" << endl;
   cout << "Size of float : " << sizeof(float) << " Byte >> " << sizeof(float)*8 << " Bit"  <<  endl;
   cout << "Size of double : " << sizeof(double) << " Byte >> " << sizeof(double)*8 << " Bit"  << endl;
   cout << "Size of long double : " << sizeof(long double) << " Byte >> " << sizeof(long double)*8 << " Bit\n"  << endl;
   cout << "_________________________\n" << endl;

   int x8 = pow (2, 8);
   int x16 = pow (2, 16);
   long x32 = pow (2, 32);
   
   cout << "1 Byte -> 8-Bit -> 2^8 = " << x8 << endl; ;
   cout << "2 Byte ->16-Bit -> 2^16 = " << x16 << endl;
   cout << "4 Byte ->32-Bit -> 2^32 = " << x32 << endl;
   cout << "8 Byte ->64-Bit -> 2^64 = " << "18446744073709551616" << endl; ;
   cout << "16 Byte ->128-Bit -> 2^128 = " << "340282366920938463463374607431768211456" << endl;
  
   
   
   
   
}