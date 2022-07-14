#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m, Kmin, Kmax;
    cin>> n >> m;
    Kmin = m * (((n - m) / m + 1) * ((n - m) / m)) / 2 + ceil((n - m) / double(m)) * ((n - m) % m);
    Kmax = ((n - m + 1) * (n - m)) / 2;
    cout<< Kmin <<" "<< Kmax;

  return 0;
}
