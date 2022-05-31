#include "Array.h"
#include "Hex.h"

using namespace std;

int main() {
	Array A(5);
	A[0] = 'H';
	A[1] = 'e';
	A[2] = 'l';
	A[3] = 'l';
	A[4] = 'o';
	cout << "A: " << A << endl;

	Hex H1(5);
	H1[0] = 'W';
	H1[1] = 'o';
	H1[2] = 'r';
	H1[3] = 'l';
	H1[4] = 'd';
	cout << "H1: " << H1 << endl;

	Hex H2(3);
	H2[0] = '0';
	H2[1] = '1';
	H2[2] = '2';
	cout << "H2: " << H2 << endl;

	H1.Add(H2);
	cout << "H1.Add(H2) " << endl;
	cout << "H1: " << H1 << endl;

	Hex H3;
	H3 = H1 + H2;
	cout << "H3 = H1 + H2" << endl;
	cout << "H3: " << H3 << endl;

	Hex H4;
	H4 = H1 - H2;
	cout << "H4 = H1 - H2" << endl;
	cout << "H4: " << H4 << endl;

	cout << "H4 == H1: " << (H4 == H1) << endl;
	cout << "H4 == (H1-H2): " << (H4 == (H1 - H2)) << endl;

	return 0;
}
