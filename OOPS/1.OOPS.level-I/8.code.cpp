#include<iostream>
using namespace std;
class Strategy {
    public:
    void printValues(const Strategy & obj){
       cout<< "price is "<<obj.price<<endl;
       cout<< "acc name is "<<obj.acc_name<<endl;
    }
    Strategy(const double prc, const string name){
        price = prc;
        acc_name= name;
    }
    Strategy(const double prc){
        price=prc;
    }
    private:
    double price;
    string acc_name;
};
int main(){
    Strategy obj1(100,"bankss");
    obj1.printValues(obj1);
    cout<<'\n';
    Strategy obj2(101);
    obj2.printValues(obj2);
    return 0;
}