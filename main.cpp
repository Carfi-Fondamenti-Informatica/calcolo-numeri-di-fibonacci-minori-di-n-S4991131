#include <iostream>
using namespace std;

int main() {
   int n=0, a=0, b=1, c, i;
   cin >> n;
   
   cout << b << endl;
   for (i=0; i<n; i++){
      c=a+b;
      cout << c << endl;
      a=b;
      b=c;
   }   
   return 0;
}
