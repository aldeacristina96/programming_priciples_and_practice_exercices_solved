#include<iostream>
#include<vector>
#include<stdexcept>

//Enter a set ov double values and save them into a vector.Create a vector with the difference between adjacent values from the first vecto
//Ask the user for a number n and add the first n number in the first vector
//Catch exceptions:n bigger than v.size(),v has no elements
//think about other possible exceptions

using namespace std;
void err(string s)
{
    throw runtime_error(s);
}

int main()

{
    try
    {
    vector<double> v;
    vector<double> diff;
    int n;
    double a,sum=0.0;

    cout<<"Enter the number of values you want to add.\n";
    cin>>n;
    cout<<"Enter a series of integers.Press | to stop."<<endl;
    while(cin>>a)
    {
        v.push_back(a);


    }

    for(int i=1;i<(v.size());i++){

        a=v[i]-v[i-1];
        diff.push_back(a);
    }
    cout<<"Differences vector: "<<endl;
    for(int i=0;i<diff.size();i++){
        cout<<diff[i]<<" | ";
    }
    cout<<"\n------------------------------------------------------------------"<<endl;


        //exceptions
        if(v.size()<1)
        {
            err("Vector has no elements!");
        }

        if(n>v.size())
        {
            err("The number you enetered is bigger than the size of the vector.");
        }
        if(n<=0)
        {
            err("Cannot add 0 or less than 0 numbers!!");
        }

        cout<<"The sum of first "<<n<<" numbers in the vector: ";

        for(int i=0; i<n; i++)
        {
            cout<<" "<<v[i]<<", ";
            sum+=v[i];
        }
        cout<<" is : "<<sum<<endl;



    }
    catch(runtime_error &e)
    {
        cerr<<e.what()<<endl;
    }
    catch(exception &e){
        cerr<<e.what()<<endl;

    }catch(...){

        cout<<"Unknown exception"<<endl;
    }



}
