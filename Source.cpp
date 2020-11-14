#include <iostream>
#include <string>
using namespace std;



int fio2() {

	string yn2;
	//bool yn = true;
	
	

	getline(cin, yn2);


	if (yn2 == "no") {
		cout << "yes" << endl;
	}
	else if (yn2 == "yes") {
		int i = 3;
		cout << "no" << endl;
	
	}

	else if (yn2 == "exit") {
		exit(0);
	}

	else {
		cout << "invalid" << endl;
	}

	return 0;

}

int main() {
	sex:

	cout << "enter yn" << endl;
	//cout << "enter yn" << endl;
	fio2();
	//cout << fio2();

	goto sex;
	
	
	return 0;
}

