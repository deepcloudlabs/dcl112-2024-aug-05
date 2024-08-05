#include <iostream>
#include "liba.h"
#include "libb.h"
using namespace std;

int main(){
   // linker error: multiple definition of `fun(int, int)';
   int result = libb::fun(3,5);
   cout << "result is " << result << endl;
   return 0;
}