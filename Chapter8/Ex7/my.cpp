#include "my.h"
void read_names(vector<string> &v) {
	
	string name;
	while (getline(cin, name)) {
		int sz = v.size();
		if (v.size()<5) {
			v.push_back(name);
			
		}if (v.size() == 5) {
			break;
		}
		
	}
}

void read_ages(vector<double> &v)
{
	
	double age;
	while (cin >> age) {
		
		if (v.size()<5) {
			
			v.push_back(age);
			
		}if(v.size()==5){ break;}
		
	}
}

void print_vectors(const vector<double>& age, const vector<string>& name)
{


	for (int i = 0; i <age.size(); i++) {
		cout << name[i] << " age: " << age[i] << endl;
	}
}
void copy_vectors(const vector<string> &v, vector<string> &copy_v) {
	
	for (int i = 0; i < v.size(); i++) {
		copy_v.push_back(v[i]);
	}
}
void print_names(const vector<string> &v) {
	for (int i = 0; i < v.size(); i++) {
		cout << "names [" << i << "] :" << v[i] << endl;
	}
}

void match_ages(const vector<string> &names, const vector<string>&sorted_nms, vector<double> &srt_age,const vector<double> &ages) {
	
	for (int i = 0; i < names.size(); i++) {
		
		for (int j = 0; j < names.size(); j++) {
			if ((sorted_nms[i].compare(names[j])) == 0) {
				srt_age.push_back(ages[j]);
			}
		}
	}
}
