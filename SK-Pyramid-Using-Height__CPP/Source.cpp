#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int height;

	cout << "\n Enter the height of Pyramid (max 20 min 1) : ";
	cin >> height;

	if (height > 20) {
		height = 20;
	} else if (height < 1) {
		height = 1;
	}
		
	cout << endl;

	for (int i = 0; i < height; i++) {

		for (int j = height - i; j > 1; j--) {
			cout << " ";
		}

		for (int k = 0; k < i * 2 + 1; k++) {
			cout << "*";
		}

		cout << "\n";
	}

	_getch();
	return 0;
}