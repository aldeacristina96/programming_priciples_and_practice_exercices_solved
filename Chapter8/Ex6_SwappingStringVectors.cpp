/*
Ex 6 from programming principles and exercises using c++ 11
Write two functions that reverse the order of elements in a vector<string>.One should produce a new vector with the reversed values,
the other should revers the elements without producing a new vector
*/
#include<iostream>
#include<vector>
#include <string>
using namespace std;
void simple_swap(const vector<string> &v1, vector<string> &v2);
void write_vector(vector<string> &v);
void read_vector(const vector<string> &v);
void another_swap(vector<string> &v);

int main() {

	vector<string> v;
	vector<string> v2;
	cout << "Introduce a series of strings.Press | to stop." << endl;
	
	write_vector(v);
	read_vector(v);
	cout << "Swapping the elemets using a vector to hold the values: " << endl;
	simple_swap(v, v2);
	read_vector(v2);
	cout << "-------------------------------------------------------\n" << endl;
	another_swap(v);
	cout << "Swapping the elements inside the vector without using another vector:" << endl;
	read_vector(v);
	//system("pause");




}
void simple_swap(const vector<string> &v1, vector<string> &v2) {

	for (int i = (v1.size()) - 1; i >= 0; i--) {
		v2.push_back(v1[i]);

	}
}
void write_vector(vector<string> &v) {
	string a;
	while (getline(cin,a)) {
		if(a.compare("|")!=0){

		v.push_back(a);
		continue;
		}
	
		break;
	

	}
}
void read_vector(const vector<string> &v) {
	cout << "The vector contains the following elements: " << endl;
	for (int i = 0; i < v.size(); i++) {
		for (char c : v[i]) {
			cout << c;

		}
		cout << " | ";
	}




	cout << "\n";
}

void another_swap(vector<string> &v) {
	int sz = v.size();
	if (!(sz % 2 == 0)) {
		int j = 0;
		for (int i = sz - 1; i > sz / 2; i--) {
			string aux;
			aux = v[j];
			v[j] = v[i];
			v[i] = aux;
			j++;
		}
	}
	else if (sz % 2 == 0) {
		int j = 0;
		for (int i = sz - 1; i >= (sz + 1) / 2; i--) {
			string aux;
			aux = v[j];
			v[j] = v[i];
			v[i] = aux;
			j++;
		}

	}



}
