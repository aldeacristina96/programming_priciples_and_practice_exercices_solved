#include "my.h"
/*Chapter 8 Ex 7.Read 5 names into a vector<string> and 5 ages into a vector<double>.
First print the name and ages in the order they were introduced.
Sort the names vector and match the ages with the sorted names.
*/

int main() {
	vector<string>names;
	vector<double>ages;
	vector <string> names_sorted;
	vector<double>ages_sorted;
	cout << "Type 5 names." << endl;
	read_names(names);
	cout << "Type their ages in the order you enetered the names." << endl;
	read_ages(ages);
	cout << "----------------------------------------\n";
	print_vectors(ages, names);
	copy_vectors(names, names_sorted);
	sort(names_sorted.begin(),names_sorted.end());
	print_names(names_sorted);
	cout << "Matched vectors: " << endl;
	match_ages(names, names_sorted, ages_sorted,ages);
	print_vectors(ages_sorted, names_sorted);

	
	
	//system("pause");
	

}
