#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include "read_words.hpp"
using namespace std;

int main() {
	std::map<std::string, int> wordcount;
        wordcount = wc(wordcount);
        cout<<setw(10)<<"Words"<<setw(10)<<"Count"<<endl;
	for (std::map<std::string, int>::iterator it = wordcount.begin(); it!=wordcount.end(); ++it)
	{
		
		cout << setw(10) <<it->first << setw(10) <<it->second<<endl;
	}
return 0;
}
