 #include<iostream>
 using namespace std;
 class OrderBuilder{
        public:
        OrderBuilder(string name, int id)
        {
            exchange_name = name;
            exchange_id = id;
        }
        string exchange_name;
        int exchange_id;
 };

  class Strategy {
        double order_qty;
        double price;
        string user_name;
        public:
        OrderBuilder* ob;
        Strategy(double qty,double prc, string name):order_qty(qty),price(prc),user_name(name){
              cout<<"inside contructorrrr "<<'\n';
              OrderBuilder* obj = new OrderBuilder("CME", 107);
              ob = obj;
        };
        Strategy(const Strategy& obj){
            cout<<"here it is ";
            order_qty = obj.order_qty;
            price = obj.price;
            user_name = obj.user_name;
            ob = new OrderBuilder(obj.ob->exchange_name, obj.ob->exchange_id);
        }
        ~Strategy(){
            cout<<"decontructor called "<<'\n';
            delete ob;
        }
        void PrintVars(){
            cout<<"qty "<<order_qty<<'\n';
            cout<<"price "<<price<<'\n';
            cout<<"name "<<user_name<<'\n';
            cout<<"exchange_name "<<ob->exchange_name<<'\n';

        }
  };
 int main(){
    Strategy* obj1 = new Strategy(10,101,"khan");
    obj1->PrintVars();

    Strategy obj2(*obj1);
    delete obj1;
    obj2.PrintVars();
    return 0;
 }