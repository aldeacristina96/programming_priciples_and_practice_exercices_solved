/*
Guessing game-Bulls&Cows
The user has to input 4 integer values betwee0-9.The values are compared to 4 computer generated values.
For example: generated values by computer 1 2 3 4
generated value by the user: 1  4 2 5
Cows=2 ..2 correct guesses but in the wrong place
Bulls=1 1 correct guess in the correct place
*/
#include<iostream>
#include<vector>
#include<time.h>
#include<stdlib.h>
#include<stdexcept>
using namespace std;
void random_values(vector<int> &v);
void err(string s);
void check(vector<int> v,vector<int> uI);
void printVector(vector<int> v);
int main()
{
    vector<int>v(4);
    vector <int> uI;
    int a=0,b;


    srand(time(NULL));
    random_values(v);
    cout<<"To begin the game eneter 4 different integer numbers between 0-9."<<endl;
    try
    {
        while(a<4)
        {
            cin>>b;
            uI.push_back(b);
            a++;
            if(b<0)
            {
                err("Input cannot be < 0 !!");
            }
            if(b>9)
            {
                err("Input cannot be > 9 !!");
            }

        }
        cout<<"User generated vector: ";
        printVector(uI);
        /*
        cout<<"Computer geneated vector: ";
        printVector(v);*/

        check(v,uI);








    }
    catch(runtime_error &e)
    {
        cout<<e.what()<<endl;
    }
    catch(exception &e)
    {
        cout<<e.what()<<endl;
    }








}
void random_values(vector<int> &v)
{
//Create vector with 4 different random values

    for(int i=0; i<4; i++)
    {
        v[i]=(rand()%9);
        for(int j=0; j<i; j++)
        {
//Check if current value in the vector is the same as the anterior values
            while(v[i]==v[j])
            {
                v[i]=(rand()%9);
            }
        }

    }

}
void err(string s)
{
    throw runtime_error(s);


}
void check(vector<int> v,vector<int> uI)
{
    int cows=0;
    int bulls=0;
    for(int i=0; i<uI.size(); i++)
    {
        for(int j=0; j<v.size(); j++)
        {
            if(uI[i]==v[j])
            {
                if(i==j)
                {
                    bulls++;

                }
                else
                {
                    cows++;
                }
            }
        }

    }
    cout<<"Cows: "<<cows<<endl;
    cout<<"Bulls: "<<bulls<<endl;




}

void printVector(vector<int> v)
{
    cout<<"Vector: ";
    for(int i=0; i<4; i++)
    {
        cout<<v[i]<<" | ";
    }
    cout<<endl;
}
