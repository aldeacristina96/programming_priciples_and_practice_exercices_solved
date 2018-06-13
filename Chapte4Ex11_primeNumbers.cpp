#include<iostream>
#include<vector>
//Create a program that find prime numbers between 1-n

using namespace std;
bool isPrime(int nr);

int main(){
    vector<int> v;
    int maxim;
    cout<<"Enter a value..."<<endl;
    cin>>maxim;

    for(int i=2;i<maxim;i++){
        if(isPrime(i)){
            v.push_back(i);

        }
    }
    cout<<"The prime numbers from 2 to "<<maxim<<" are:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
bool isPrime(int nr)
{
    bool is_prime=true;
    for(int i=2; i<nr; i++)
    {
        if(nr%i==0)
        {
            is_prime=false;
            break;
        }

    }
    return is_prime;


}
