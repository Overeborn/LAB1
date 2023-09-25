#include <iostream> // i/o library
using namespace std;// instead od prefix std

int main() {//header
	cout << "Begin 16" << endl;//start begin 16

	int V{}, N{}, T{};//declaration

	cout << ("enter a value for V:");
	cin >> V;
	cout << ("enter a value for N:"); //request and output values 
	cin >> N;
	cout << ("enter a value for T:");
	cin >> T;

	int tmp = T;//add new variable

	T = N;
	N = V;  //substitution
	V = tmp;


	cout << ("Value V =") << V << endl; 
	cout << ("Value N =") << N << endl; //output values 
	cout << ("Value T =") << T << endl;

    cout << "Begin 26" << endl;// start begin 26

	float X{}, Y{}, A{}, B{}, F{}; //declaration

	cout << ("enter the weight of the candys:");
	cin >> X; 
	cout << ("enter the weight of the cookies:"); //request and output weight values
	cin >> Y;

	cout << ("enter a price for candys:");
	cin >> A;
	cout << ("enter a price for cookies:"); //request and output price for weight 
	cin >> B;

	float c{ A / X };  
	float d{ B / Y }; //calculation of price per kg

	cout << ("price for one kg candys:") << c << endl;
	cout << ("price for one kg cookies:") << d << endl; //output price for one kg 

	float f{ c / d };//calculation of the difference between prices
	float x{ d / c };

	if (c > d)
	 {
		cout << ("Candys are more expensive so much:") << f << endl; //if candys are more expensive then cookies
	 }
	else //variability
	 {
		cout << ("cookies are more expensive:") << x << endl; //if cookies are more expensive then candys 
	 }

	return 0;//return to os
}
