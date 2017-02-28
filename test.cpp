#include <iostream>
using namespace std;
#include "readVASP.h"

int main(){
	cout << "hello world!";
	char *file_name = "C:\\Users\\Nanco\\Desktop\\OUTCAR";
	bool tags = false;

	ReadOUTCAR(file_name, tags, tags);

	system("PAUSE"); // Do not work in linux
    return 0;
}
