#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include "read_words.hpp"
using namespace std;

int main() {
	std::map<std::string, int> wordcount;
        wordcount = wc(wordcount);
        int numword = 0;
	for (std::map<std::string, int>::iterator it = wordcount.begin(); it!=wordcount.end(); ++it)
	{		
		numword = numword + it->second ;
	}
        cout<<"The number of words:"<<numword<<endl;
return 0;
}
