#include <iostream>
#include <string>

using namespace std;

class IOHandler {
	string sourcePath, destinationPath;
	public:
		IOHandler();
		void setSourcePath(string s);
		void setDestinationPath(string s);
		string getSourcePath();
		string getDestinationPath();


};

IOHandler::IOHandler() {
	sourcePath = "";
	destinationPath = "";
}

void IOHandler::setSourcePath(string s) {
	sourcePath = s;
}

void IOHandler::setDestinationPath(string s) {
	destinationPath = s;
}

string IOHandler::getSourcePath() {
	return sourcePath;
}

string IOHandler::getDestinationPath() {
	return destinationPath;
}


int main(void){
	IOHandler test;
	
	string inputsoure;
	string inputdest;
	cout << "Bitte Pfad der Quell Datei angeben:";
	cin >> inputsoure;

	cout << "\n" << "Bitte Pfad für die Ziel Datei angeben:";
	cin >> inputdest;

	test.setSourcePath(inputsoure);
	test.setDestinationPath(inputdest);
	std::string gettest = test.getSourcePath();
	cout << gettest<< endl;

	return 0;
}
