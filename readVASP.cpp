#include <iostream>
#include <fstream>
using namespace std;

/*
Module for reading VASP files (OUTCAR, XDATCAR, CONTCAR)
ReadOUTCAR: Function for reading VASP OUTCAR file
ReadCONTCAR: Function for reading VASP CONTCAR file
ReadXDATCAR: Function for reading VASP XDATCAR file
- ReadCONTCAR and ReadXDATCAR can be deprecated
*/

//char file_name[100];

void ReadOUTCAR(char file_name[50], bool tag_read_structure, bool tag_read_force) {
	// Function for reading VASP OUTCAR file
	// file_name (string): location of file
	// tag_read_structure (bool): tag for reading structure form OUTCAR
	//                            structure can be read from XDATCAR or CONTCAR
	// tag_read_force (bool): tag for reading force. if false, only read energy
	ifstream fin;
	char ch;
	fin.open(file_name);

	for (int i = 0; i < 10; i++) {
		fin.get(ch);
		cout << ch;
	}
}