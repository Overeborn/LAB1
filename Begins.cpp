#include <iostream> // i/o library
using namespace std;// instead od prefix std

int main() 
{//header
	cout << "Begin 16" << endl;//start begin 16

	float A, B, C;//declaration

	cout << ("enter a value for A: ");
	cin >> A;
	cout << ("enter a value for B: "); //request and output values 
	cin >> B;
	cout << ("enter a value for C: ");
	cin >> C;

	float tmp = C;//add new variable

	C = B;
	B = A;  //substitution
	A = tmp;

    cout << ("Value A = ") << A << endl; 
	cout << ("Value B = ") << B << endl; //output values 
	cout << ("Value C = ") << C << endl;

	cout << endl;

    cout << "Begin 26" << endl;// start begin 26

	double X, Y, D;//declaration

	cout << ("enter the weight of the candys:");
	cin >> X; 
	cout << ("enter the weight of the cookies:"); //request and output weight values
	cin >> Y;

	cout << ("enter a price for candys: ");
	cin >> A;
	cout << ("enter a price for cookies: "); //request and output price for weight 
	cin >> B;

	C = A / X;
	D = B / Y; //calculation of price per kg

	cout << ("price for one kg candys: ") << C << endl;
	cout << ("price for one kg cookies: ") << D << endl; //output price for one kg 

	X = C / D;//calculation of the difference between prices
	Y = D / C;

	if (C > D)
	 {
		cout << ("Candys are more expensive so much: ") << X << endl; //if candys are more expensive then cookies
	 }
	else //variability
	 {
		cout << ("cookies are more expensive: ") << Y << endl; //if cookies are more expensive then candys 
	 }

	return 0;//return to os
}

	return 0;//return to os
}
