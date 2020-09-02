// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//




#include <iostream>

#include <cmath>

using namespace std;

int main() {

	//  ⁄—Ì› „ €Ì—Â«

	double a, b, c, d;

	cout << "ax^2 + bx + c = 0";

	// ê—› ‰ ÷—«Ì» „⁄«œ·Â œ—ÃÂ œÊ„

	cout << "nnInput values of a : ";

	cin >> a;

	cout << "nInput values of b : ";

	cin >> b;

	cout << "nInput values of c : ";

	cin >> c;

	// „Õ«”»Â Å«—«„ — œ· «

	d = b * b - (4 * a*c);

	if (d >= 0)

	{

		// ç‰«‰çÂ „⁄«œ·Â œ«—«Ì —Ì‘Â Â«Ì ÕﬁÌﬁÌ »«‘œ

		cout << "nThe first real root is : " << (-b + sqrt(d)) / (2 * a);

		cout << "nThe second real root is : " << (-b - sqrt(d)) / (2 * a);

	}

	else {

		// ç‰«‰çÂ „⁄«œ·Â œ«—«Ì —Ì‘Â Â«Ì „ÊÂÊ„Ì »«‘œ

		cout << "nThe first Complex root is : " << (-b) / (2 * a) << " + i " << sqrt(-d) / (2 * a);

		cout << "nThe first Complex root is : " << (-b) / (2 * a) << " - i " << sqrt(-d) / (2 * a);

	}

	return 0;

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
