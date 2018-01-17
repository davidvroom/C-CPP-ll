#include "main.ih"

int main(int argc, char **argv)
{
	ofstream out(argv[1]);
	cout << "Give text: \n";
	string txt;
	getline(cin, txt);

	mutex shiftMutex;

	Handler object;
	thread th(callShift, ref(object), ref(out), ref(txt), ref(shiftMutex));

	object.shift(out, txt, shiftMutex);
	th.join();
}