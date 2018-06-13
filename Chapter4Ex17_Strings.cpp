#include<iostream>
#include<string>
#include<algorithm>
//See what character in a string was repeted the most


using namespace std;
string removeSpace(string &s);

int main(){
string s,s1;


getline(cin,s);
int contor=0,maxim=0;
char mode;
s1=removeSpace(s);
cout<<s1;



for(char c: s1){
        contor=0;
    for(char c1: s1){
        if(c==c1){
            contor++;
        }
        if(contor>maxim){
        maxim=contor;
        mode=c;
       }

    }

}
cout<<"\nCharacter : "<<mode<<" was repedet "<<maxim<<" times."<<endl;


}
string removeSpace(string &s){
int c=0;
for(int i=0;s[i];i++){

    if(s[i]!=' '){
        s[c++]=s[i];
    }
}
return s;
}
