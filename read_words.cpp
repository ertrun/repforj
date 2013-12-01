#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include "read_words.hpp"
using namespace std;

map<string,int> wc(map<string,int> wordcount) {
	string word;
	cout<<"Enter a Random string of words followed by the word end" <<endl;
	cin >> word;
	while (word.compare ("end") !=0){
		++wordcount[word];
		cin>>word;
	}

return wordcount;
}
