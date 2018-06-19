/*
Ex 5 from programming principles and exercises using c++ 11
Write two functions that reverse the order of elements in a vector<int>.One should produce a new vector with the reversed values,
the other should revers the elements without producing a new vector
*/
#include<iostream>
#include<vector>

using namespace std;
void simple_swap(const vector<int> &v1, vector<int> &v2);
void write_vector(vector<int> &v);
void read_vector(const vector<int> &v);
void another_swap(vector<int> &v);

int main() {

		vector<int> v;
		vector<int> v2;
		cout << "Introduce a series of int numbers.Press any letter to stop." << endl;
		write_vector(v);
		read_vector(v);
		cout << "Swapping the elemets using a vector to hold the values: " << endl;
		simple_swap(v, v2);
		read_vector(v2);
		cout << "-------------------------------------------------------\n\n" << endl;
		another_swap(v);
		cout << "Swapping the elements inside the vector without using another vector:" << endl;
		read_vector(v);
		//system("pause");




}
void simple_swap(const vector<int> &v1, vector<int> &v2) {
	
	for (int i =(v1.size())-1; i >= 0; i--) {
		v2.push_back(v1[i]);
		
	}
}
void write_vector(vector<int> &v) {
	int a;
	while (cin >> a) {
		v.push_back(a);

	}
}
void read_vector(const vector<int> &v) {
	cout << "The vector contains the following elements: " << endl;
	for (int i = 0;i< v.size(); i++) {
		cout << "v[" << i << "]: " << v[i] << "; ";


	}
	cout << "\n";
}

void another_swap(vector<int> &v) {
	int sz = v.size();
	if (!(sz % 2 == 0)) {
		int j = 0;
		for(int i = sz - 1; i > sz / 2; i--) {
			int aux;
			aux = v[j];
			v[j] = v[i];
			v[i] = aux;
			j++;
		}
	}
	else if (sz % 2 == 0) {
		int j = 0;
		for (int i = sz - 1; i >= (sz+1) / 2; i--) {
			int aux;
			aux = v[j];
			v[j] = v[i];
			v[i] = aux;
			j++;
		}

	}



}
