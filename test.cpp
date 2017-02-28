#include <iostream>
#include <string>
using namespace std;
#include "readVASP.h"

int main(){
	cout << "hello world!";
	string file_name = "C:\\Users\\Nanco\\Desktop\\OUTCAR";
	//string file_name;
	bool tags = false;

	//getline(cin, file_name);
	ReadOUTCAR(file_name, tags, tags);

	system("PAUSE"); // Do not work in linux
    return 0;
}
