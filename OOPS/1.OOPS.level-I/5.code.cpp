#include<iostream>
using namespace std;

 class Strategy{
    protected:
    double qty;
    public:
    double price;
    void printPriceQty(){
        cout<<"quantity "<<qty<<'\n';
        cout<<"Price "<<price<<'\n';
    };
 };
 int main(){
    Strategy obj;
    obj.price=10;
    obj.qty=90;
    obj.printPriceQty();
     return 0; 
 }