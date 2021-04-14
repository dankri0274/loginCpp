#include <iostream>
using namespace std;

int main() {
	string username, passwd, passwdConf;
	int tries = 0, maxTries = 5;

	restart:

	cout << "Enter username: ";
	cin >> username;
	cout << "Register password: ";
	cin >> passwd;
	cout << "Confirm password: ";
	cin >> passwdConf;

	if (username.length() < 6) {
		cout << endl << "Minimum length for usernae is 6 digits!" << endl << endl;
	}

	if (passwd.length() < 8 || passwdConf.length() < 8) {
		cout << endl << "Minimum length for passwords is 8 digits" << endl << endl;
		goto restart;
	}

	else {
		cout << "___LOGIN___" << endl;
		string userLogin, passwdLogin;

		while (tries < maxTries) {
			cout << "Username: " << endl;
			cin >> userLogin;
			cout << "Password: ";
			cin >> passwdLogin;

			if (userLogin == username && passwdLogin == passwdConf) {
				tries++;
				cout << "Welcome " << username << endl;
				break;
			}
			else {
				cout << "Wrong login credentials entered, try again!" << endl;
				tries++;
			}
			if (tries == maxTries) {
				cout << "You have used all 5 tries, please restart the program" << endl;
			}
		}
	}
}