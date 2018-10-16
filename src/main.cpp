
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
