#include <iostream>
using namespace std;
class Account
{
    double Balance;
    double Amount;
    int Pin;
    
    Account(double balance,double amount,int pin)
    {
      this->Balance =balance;
      this->Amount =amount;
      this->Pin =pin; 
    };
    
    bool check_pin(int pin);
    double check_balance();
    double decrease_balance(double amount);
    double increase_balance(double amount);
    
    void print();
};
bool Account::check_pin(int pin)
{
    pin=this->Pin;
    if(pin!=)
 return 0;
}

int main() {
    
    return 0;
}
