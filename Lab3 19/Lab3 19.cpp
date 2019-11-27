#include <iostream>

using namespace std;

int main()
{
	char str[100];
	bool tfstate = false;
	cout << "Enter email adress: " << endl;
	cin.getline(str,100);
	for (int i = 0; i < 100; i++) {
		if (tfstate) {
			if ((('a' <= str[i]) && (str[i] <= 'z')) || (('A' <= str[i]) && (str[i] <= 'Z')) || (str[i] == '-') || (str[i] == '.') || (str[i] == '_') || (('0' <= str[i]) && (str[i] <= '9'))) {
			}
			else {
				for (int j = i+1; j < 100; j++) {
					if ((('a' <= str[j]) && (str[j] <= 'z')) || (('A' <= str[j]) && (str[j] <= 'Z')) || (str[j] == '-') || (str[j] == '.') || (str[j] == '_') || (('0' <= str[j]) && (str[j] <= '9'))) {
						cout << "Error";
						return 0;
					}
				}
				
			}
			
		}
		if (str[i] == '@') {
			tfstate = true;
		}
	}
	if (!tfstate) {
		cout << "Out of domen";
	}
	cout << "Correct";	
}


