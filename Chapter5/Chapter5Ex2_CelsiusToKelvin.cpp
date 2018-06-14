#include<iostream>
#include<string>
#include<stdexcept>
//Chapte 5 Exercices 2,3,4 and 5
//Celsiul to Kelvin convertor

using namespace std;
void err(string s)
{
    throw runtime_error(s);
}

double ctoK(double c)
{
    if(c<-273.15)
    {
        err("There is no temperature below 273.15!");
    }
    double k= c+273.15;

    return k;
}
double ktoC(double k)
{
    double c = k-273.15;
    return c;
}

int main()
{
    double c = 0;
    char choice;
    cout<<"To convert Celsius to Kelvin press c\nTo convert Kelvin to Celsius press k"<<endl;
    cin>>choice;
    try
    {
        cout<<"Enter the value you want to convert:"<<endl;
        cin>>c;


        if(choice=='c'){
            double k= ctoK(c);
            cout<<c<<" Celsius in Kelvin is: "<<k<<endl;
        }else if(choice=='k'){
            double kelvin= ktoC(c);
            cout<<c<<" Kelvin in Celsius is: "<<kelvin<<endl;

        }else{
            cout<<"Unknown unit.."<<endl;
        }

    }
    catch(runtime_error &e)
    {
        cout<<e.what()<<endl;

    }


}
