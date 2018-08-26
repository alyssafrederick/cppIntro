#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int add(int num1, int num2)
{
	return num1 + num2;
}

int subtract(int num1, int num2)
{
	return num1 - num2;
}

int multiply(int num1, int num2)
{
	return num1 * num2;
}

int divide(int num1, int num2)
{
	return num1 / num2;
}


int main()
{
	//hello world
	cout << "enter your name: ";
	string word;
	cin >> word;
	cout << "Hello " << word << "!" << endl << endl;


	//mad libs
	cout << "MADLIBS" << endl;

	cout << "enter something that requires a driver: ";
	string blank0;
	cin >> blank0;
	cout << "enter a past tense verb: ";
	string blank01;
	cin >> blank01;
	cout << "enter a noun: ";
	string blank1;
	cin >> blank1;
	cout << "enter a number greater than 4: ";
	string blank2;
	cin >> blank2;
	cout << "enter a verb: ";
	string blank3;
	cin >> blank3;

	cout << "Yesterday I got really pissed when a " << blank0 << " " << blank01 << " my " << blank1 << " for the " << blank2 << "th time. I told the driver that I would " << blank3 << " him if he ever " << blank01 << " it again." << endl << endl;


	//guessing game
	cout << "GUESSING GAME" << endl;
	srand(time(NULL));
	int number = rand() % 100;
	cout << "I have chosen a number between 0 and 100. What is your first guess? ";
	int guess;
	cin >> guess;

	while (guess != number)
	{
		if (guess > number)
		{
			cout << "Your guess is too high" << endl;
		}
		else
		{
			cout << "Your guess is too low" << endl;
		}

		cout << "What is your next guess? ";
		cin >> guess;
	}

	if (guess == number)
	{
		cout << "That is correct!" << endl << endl;
	}


	//reverse guessing game
	cout << "REVERSE GUESSING GAME" << endl;
	cout << "Choose a number between 0 and 100. When I guess a number, tell me 'high' if it's too high or 'low' if it's too low. Tell me 'correct' if my guess is correct." << endl;
	int low = 0;
	int high = 100;
	int middle = round((low + high) / 2);
	cout << middle << endl;
	string hint;
	cin >> hint;

	while (hint != "correct")
	{
		if (hint == "high")
		{
			high = middle;
		}
		else if (hint == "low")
		{
			low = middle;
		}

		middle = round((low + high) / 2);
		cout << middle << endl;
		cin >> hint;
	}

	if (hint == "correct")
	{
		cout << "yay!" << endl << endl;
	}


	//simple calculator
	cout << "SIMPLE CALCULATOR" << endl;
	cout << "I will ask for two numbers and then an operator (+, -, /, *)" << endl;
	cout << "what is your first number? ";
	int num1;
	cin >> num1;
	cout << "what is your second number? ";
	int num2;
	cin >> num2;
	cout << "what is your operator? ";
	string op;
	cin >> op;

	int answer;
	if (op == "+")
	{
		answer = add(num1, num2);
	}
	else if (op == "-")
	{
		answer = subtract(num1, num2);
	}
	else if (op == "*")
	{
		answer = multiply(num1, num2);
	}
	else if (op == "/")
	{
		answer = divide(num1, num2);
	}
	cout << "the answer is " << answer << endl;

	//show pass by reference with her operation functions

	system("pause");
	return 0;
}