#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	ifstream inputFile(argv[1]);	// construct ifstream with 1st given filename
	vector<string> data;			// construct empty vector to store the words
									// read all words from 1st file into data
	copy(istream_iterator<string>(inputFile), 
		istream_iterator<string>(), back_inserter(data));

	inputFile.close();				// close ifstream object to prepare for another file
	inputFile.open(argv[2]);		// associate inputFile with 2nd given file
	vector<string> data2;			// construct 2nd empty vector
									// read all words from 2nd file into data2
	copy(istream_iterator<string>(inputFile), 
		istream_iterator<string>(), back_inserter(data2));
									// reorder data s.t. "extra"(s) are at the end
	auto last = remove(data.begin(), data.end(), string("extra"));
	data.erase(last, data.end());	// erase those words from data
									// add all words in data2 to data
	data.insert(data.end(), data2.begin(), data2.end());
	sort(data.begin(), data.end());	// sort data, needed for GA unique
									// reorder data s.t. duplicate words are at the end 
	last = unique(data.begin(), data.end());
	data.erase(last, data.end());	// erase those words
	vector<string>(data).swap(data);// shed excess capacity

	for (string &elem: data)		// print words
		cout << elem << '\n';
}