


/******************************************************************************
  Title          : main.cpp
  Author         : FrancisXIrizarry
  Created on     : October  7, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : ./oddities oddities.txt
  Build with     : g++ -Wall -g -o oddities  main.cpp
  Modifications  :
  Notes:
  The number N below is the number of people on each team.
  This program prints N peculiar facts, called "oddities" here.
  The main program calls N functions, each with the syntax defined
  by the output_function typedef defined below. Each function must be 
  named 
       username_oddity
   where username is the GitHub username of its author.
  For example, 
      output_function  stewartweiss_oddity;
   Oddities are found in the file "oddities.txt" in the project source directory
 
******************************************************************************/
 #include <iostream>
 #include <fstream>
 #include <cstdlib>
 #include <cstdio>
 #include <cstring>
 #include <limits>
 #include <sstream>
 #include <stdlib.h>

  using namespace std;
 /******************************************************************************/
 // The syntax of the output function that must be used to print an oddity.
typedef ostream& (*output_function) ( ostream & out);
 /******************************************************************************
        
                        All Function Definitions
 ******************************************************************************/
//typedef ostream& (*output_function) (const ostream & out);



//Get File String for specific Location
fstream& StrFromLine(fstream& file, unsigned int Exactlocation){
	for(unsigned int currentLoc = 0; currentLoc < Exactlocation-1; currentLoc++){
		file.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return file;
}

ostream& anupamdas104_oddity(ostream & out){
    return out;
}


int main(int argc, char* argv[] )
{
	if(argc < 2){
		cerr << "Usage: ./executable textFile " << endl;
		return 0;
	}

	stringstream strFile(argv[1]); //can also do char *file1 = argv[1]/stringstream(argv[1])
	string fileName;
	strFile >> fileName;
	fstream odditiesFile(fileName.c_str());
	srand (time(NULL));
	StrFromLine(odditiesFile, (rand() % 15 + 1));
	string oddityStr;
	getline(odditiesFile, oddityStr);
	output_function typeFunc;
	typeFunc = anupamdas104_oddity;
	typeFunc(cout << oddityStr << endl);
    return 0;


} 

















