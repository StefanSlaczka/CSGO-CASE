#include <iostream>
#include <cstdlib>

using namespace std;

void case_odds()
{
	srand(time(NULL));

	int case_num = rand() % 392;


	cout << "Case num is " << case_num << "\n\n";

	if (case_num == 1)
		cout << "You got a knife\n";
	else if (case_num <= 4)
		cout << "You got a Convert\n";
	else if (case_num <= 16)
		cout << "You got a Classified\n";
	else if (case_num <= 79)
		cout << "You got a Restricted\n";
	else if (case_num <= 392)
		cout << "You got a Mil-spec\n";
	else
		cout << "ERROR";
}

int main()
{
	case_odds();
}