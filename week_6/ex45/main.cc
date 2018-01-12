#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	    				  // construct ifstream with 1st given filename
	ifstream inputFile(argv[1]); 
	vector<string> data;  // construct empty vector to store the words
						  // read all words from 1st file into data
	copy(istream_iterator<string>(inputFile), 
		istream_iterator<string>(), back_inserter(data));
						  // close ifstream object to prepare for new file
	
	inputFile.close();		
						  // associate inputFile with 2nd given file
	inputFile.open(argv[2]);	
	vector<string> data2; // construct 2nd empty vector
						  // read all words from 2nd file into data2
	copy(istream_iterator<string>(inputFile), 
		istream_iterator<string>(), back_inserter(data2));
						  
						  // reorder data s.t. "extra"(s) are at the end
	auto last = remove(data.begin(), data.end(), string("extra"));
						  // erase those words from data
	data.erase(last, data.end());
		
						  // add all words in data2 to data
	data.insert(data.end(), data2.begin(), data2.end());
						  // sort data, needed for GA unique
	sort(data.begin(), data.end());	
						  // reorder data s.t. duplicate words are at the end 
	last = unique(data.begin(), data.end());
						  // erase those words
	data.erase(last, data.end());	
						  // shed excess capacity
	vector<string>(data).swap(data);

						  // print words
	for (string &elem: data)
		cout << elem << '\n';
}