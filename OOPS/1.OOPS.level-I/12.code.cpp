#include<iostream>
using namespace std;
class Strategy {
    double order_qty;
    double price;
    string acc_name;
    public:
    Strategy(double qty, double prc, string name){
        order_qty = qty;
        price = prc;
        acc_name = name;
    }
    void PrintVars(){
        cout<<"order_quantity "<<order_qty<<'\n';
      cout<<"price "<<price<<'\n';
        cout<<"account name "<<acc_name<<'\n';

    }

};
int main(){
    Strategy obj(10,99,"khan");
    obj.PrintVars();
    Strategy obj1(obj);
    obj1.PrintVars();
    return 0;
}