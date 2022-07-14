#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float code, amount, price;
    cin>>code;
    cin>>amount;

    if(code==1){
        price=4;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<(amount*price)<<endl;

    }
    else if(code==2){
      price=4.50;
      cout<<"Total: R$ "<<fixed<<setprecision(2)<<(amount*price)<<endl;
    }
    else if(code==3){
      price=5.00;
      cout<<"Total: R$ "<<fixed<<setprecision(2)<<(amount*price)<<endl;
    }
    else if(code==4){
      price=2;
      cout<<"Total: R$ "<<fixed<<setprecision(2)<<(amount*price)<<endl;
    }
    else if(code==5){
      price=1.50;
      cout<<"Total: R$ "<<fixed<<setprecision(2)<<(amount*price)<<endl;
    }

    return 0;
}
