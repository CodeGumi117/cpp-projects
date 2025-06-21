// This is still being updated! this is not the final version.
#include <iostream>
#include <string>
using namespace std;
void intro() {
	cout << "#################\n";
	cout << "#    \033[31mC++ OS\033[0m     #\n";
	cout << "#################";
	cout << "\nCreator: GumiCodz (https://github.com/CodeGumi117)";
	cout << "\nInspired By: sixpennyfox4 (https://github.com/sixpennyfox4/)\n\n";
	cout << "Type 'help' to get started!\n\n";
}
int main() {
	intro();
	string cmds[5]
	{"help > prints this message", 
	 "credits > info about the authors of the os", 
	 "systeminfo > info about your system", 
	 "echo {text} > prints text", 
	 "clear > clears the page (theres also 'reboot' to clear screen and reload intro", 
	 };
    
	while (true) {
		string input;
		cout << "> ";
		std::getline(cin, input);
		if (input == "credits") {
			cout << "\nCreator: GumiCodz (https://github.com/CodeGumi117)";
			cout << "\nInspired By: sixpennyfox4 (https://github.com/sixpennyfox4/)\n\n";
		}
		else if (input == "clear") {
			cout << "\033[2J\033[H" << std::flush;
		}
		else if (input == "systeminfo") {
			cout << "\nOS: C++ OS";
			cout << "\nVERSION: 0.1";
			cout << "\nCREATOR: GumiCodz (https://github.com/CodeGumi117)\n\n";
		}
		else if (input.rfind("echo ", 0) == 0) {
			
			string b = input.substr(5);

			cout << b;
			cout << "\n\n";
		}
		else if (input == "help") {
			cout << "\n\n";
			for (string c : cmds) {
				cout << c << '\n';
			}
			cout << "\n\n";
		}
		else if (input == "reboot") {
			cout << "\033[2J\033[H" << std::flush;
			intro();
		}	
	}
	return 0;
}
