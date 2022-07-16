#include<iostream>
#include<map>
using namespace std;

int main() {

	//------------------------------- creating a " multimap "
	multimap<int, string> value;

	//------------------------------- evaluating the " multimap "
	value.insert(make_pair(30, "A"));
	value.insert(make_pair(20, "B"));
	value.insert(make_pair(1, "B"));
	value.insert(make_pair(30, "C"));

	//------------------------------- setting an iterator
	multimap<int, string>::iterator it = value.begin();

	//------------------------------- going through the " multimap "
	for (it; it != value.end(); it++) {
		cout << " | " << it->first << " | " << it->second << endl;
	}
	cout << endl;

	//------------------------------- inorder to find multiple " keys " from a range we do the following :
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = value.equal_range(30);

	//------------------------------- we use " its " pointer to get the ronge from the first element to the second which is the end and print them out
	for (multimap<int, string>::iterator it = its.first; it != its.second; it++) {
		cout << " | " << it->first << " | " << it->second << endl;
	}
	return 0;

}