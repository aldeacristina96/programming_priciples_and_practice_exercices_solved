#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void read_names(vector<string> &v);
void read_ages(vector<double> &v);
void print_vectors(const vector<double> &age, const vector<string> &name);
void copy_vectors(const vector<string> &v, vector<string> &copy_v);
void print_names(const vector<string> &v);
//mathces the ages vector to the sorted names vector
void match_ages(const vector<string> &names, const vector<string>&sorted_nms, vector<double> &srt_age, const vector<double> &ages);
