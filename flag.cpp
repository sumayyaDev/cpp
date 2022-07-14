#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=0; i<T; i++) {
			double l;
			cin>>l;
			double w = (l*6)/10;
			double r = l/5;
			double areaR = 3.1416*r*r;
			double areaG = (l*w)-areaR;
			cout<<fixed <<setprecision(2) << areaR<<"  ";
			cout<<fixed <<setprecision(2) << areaG<<endl;
		}

  return 0;
}
