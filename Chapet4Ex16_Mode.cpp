#include<iostream>
#include<vector>

/*
Get a set of values from the user and see which value repeted the most*/
using namespace std;


int main()
{
    vector<int> v;
    int a,contor=0,maxim=0;
    int value;
    //get the values from the user
    cout<<"Plese introduce integer values.Press any leter to stop"<<endl;


    while(cin>>a)
    {

        v.push_back(a);
    }

    //compare every value with all the values in the vector
    for(int i=0; i<v.size(); i++)
    {
        contor=0;
        for(int j=0; j<v.size(); j++)
        {
            if(v[i]==v[j])
            {
                contor++;
                //how much the current value repeted itself
            }
            if(contor>maxim){
                maxim=contor;
                value=v[i];
            }

        }

    }
    cout<<"Value : "<<value<<" repetead "<<maxim<<" times."<<endl;

}
