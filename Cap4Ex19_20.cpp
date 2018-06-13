#include<iostream>
#include<vector>
using namespace std;
/*
Enter a set of name and score values.Terminate the input with NoName 0.
You can search after a specific score

*/

int main()
{
    vector<int> scores;
    vector<string> names;
    string name;
    int score,score1,a=0;
    bool doubles=false;
    cout<<"Introduce the names followed by the scores.."<<endl;
    while(cin>>name>>score)
    {
        if(name=="NoName"&&score==0)
        {
            break;
        }
        else
        {
            int siz=names.size();
            for(int i=0; i<siz; i++)
            {
                if(names[i]==name)
                {
                    doubles=true;

                }

            }
            if(doubles){
                    cout<<"Error "<<name<<" was already introduced!"<<endl;
                break;
            }else{

            names.push_back(name);
            scores.push_back(score);
            }

        }

    }
    cout<<"**************************************************"<<endl;
    cout<<"All the names and scores: "<<endl;
    for(int i=0;i<scores.size();i++){
        cout<<names[i]<<" got the score: "<<scores[i]<<endl;

    }
    cout<<"**************************************************"<<endl;
    cout<<"Search names with a specific score: "<<endl;
    cin>>score1;
    for(int i=0;i<scores.size();i++){
            if(scores[i]==score1){
                    a=1;
                cout<<"Names with the score "<<score1<<" : "<<names[i]<<endl;


            }


    }
    if(a==0){
        cout<<"No matching scores found!"<<endl;
    }





}
