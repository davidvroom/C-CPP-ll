#include <iostream>
#include <fstream>
#include "handler/handler.h"

using namespace std;

int main()
{
	Handler object;
	string txt = "mouse";
	ofstream out("output.txt");
	object.shift(out, txt);
}