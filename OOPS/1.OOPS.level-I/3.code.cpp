#include<bits/stdc++.h>
using namespace std;
class Strategy {
    public:
    int order_qty;
    void Print_order_qty(){
        cout<<"Order qty "<<order_qty<<endl;
    }
};
int main(){
    //automatic storage allocation
  Strategy obj;//obj is object allocated on the stack
   obj.order_qty= 10;
   obj.Print_order_qty();

   //dynamic storage allocation
   Strategy* obj1 = new Strategy();//the obj1 is a pointer
    obj1->order_qty= 99;
    obj1->Print_order_qty();

    delete obj1; //explicitly deleting the object: bcz of heap m/m allocation

   return 0;
}
