#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
Module for reading VASP files (OUTCAR, XDATCAR, CONTCAR)
ReadOUTCAR: Function for reading VASP OUTCAR file
ReadCONTCAR: Function for reading VASP CONTCAR file
ReadXDATCAR: Function for reading VASP XDATCAR file
*/

//char file_name[100];

void ReadOUTCAR(string file_name, bool tag_read_structure, bool tag_read_force) {
	// Function for reading VASP OUTCAR file
	// file_name (string): location of file
	// tag_read_structure (bool): tag for reading structure form OUTCAR
	//                            structure can be read from XDATCAR or CONTCAR
	// tag_read_force (bool): tag for reading force. if false, only read energy
	ifstream fin;
	//char ch[256] = "";
	string stri;
	float forces[3];
	fin.open(file_name);

	bool tag_force_start = false;
	int dash_line = 0;

	/*
	for (int i = 0; i < 10; i++) {
		//fin.getline(ch, 256);
		getline(fin, stri);
		cout << stri << endl;
	}
	*/

	while (!fin.eof()) {
		getline(fin, stri);
		if (stri.find("TOTAL") != string::npos) {
			cout << "FOUND" << endl;
			tag_force_start = true;
		}

		if (tag_force_start) {
			if (stri.find("---") == string::npos) {
				cout << stri << endl;
			}
			else
				dash_line++;
		}

		if (dash_line > 1)
			tag_force_start = false;
		//cout << stri.find("TOTAL") << endl;
	}
}