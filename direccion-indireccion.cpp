#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x =10;
	int &ref = x;
	int *ptr = &x;
	*ptr = 200;
	cout << ref << endl;
	cout << x<< endl;
	return 0;
}

