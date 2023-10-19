#include <iostream>
using namespace std;

int L;

void displayBanner()
{
	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

int main()
{
	const string message = "Welcome to Computer Science, the suffering begins";

	L = message.length();

	//Write the banner above
	displayBanner();

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	//Write the banner below
	displayBanner();

	//Tell the calling shell all is well
	return 0;
}