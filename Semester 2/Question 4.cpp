// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

class passanger
{
    public:
    bool payed;
    int stop_no_collected;
    int stop_no_drop;
    double payment_system(double);
    passanger(bool payed,int collected,int drop)
    {
        this->payed=payed;
        this->stop_no_collected=collected;
        this->stop_no_drop=drop;
    }
};

double passanger::payment_system(double payed_amount)
{
    double amount;
    double fee=12.50;
    int x=stop_no_drop;
    int y=stop_no_collected;
    if(stop_no_drop!=8)
    {
        amount=(x-y)*fee;
    }
    return (amount-payed_amount);
}






int stops(int no_stops,passanger p)
{
	if(no_stops>0)
	{
	   
	    if(p.stop_no_collected<p.stop_no_drop)
	        if(p.payed==true)
	        {
		        stops(no_stops-1,p);
		        no_stops--;
		        cout<<no_stops<<endl;
	        }else
	        {
	            cout<<"Not payed"<<endl;
	        }
	        else
	        {
	            cout<<"Passanger has not exited"<<endl;
	        }
	}
	return 0;
}


int main() {
    passanger P(true,2,5);
    if(P.payment_system(0)>0){
    stops(9,P);
    }
    else
    {
        cout<<"Passanger Has no access"<<endl;
    }
    
    return 0;
}
