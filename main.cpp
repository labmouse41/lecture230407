#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int ballNumber[45] = {0};
	int randomNumber;
	int out[6] = { 0 };

	for (int i = 0; i <45; i++)
	{
		ballNumber[i] = i+1;
	}

	srand((unsigned int)time(0));

	for (int i = 0; i < 999; i++)
	{
		int First = rand()%45;
		int Second = rand()%45;
		
		int Temp = ballNumber[First];
		ballNumber[First] = ballNumber[Second];
		ballNumber[Second] = Temp;
	}
	
	for (int i = 0; i < 45; i++)
	{
		cout << ballNumber[i] << endl;
		//randomNumber = rand() % 45;
		//if (ballNumber[randomNumber] != 0)
		//{
		//	out[i] = ballNumber[randomNumber];
		//	ballNumber[randomNumber] = 0;
		//	cout << out[i] << endl;
		//}
	}

	return 0;
}