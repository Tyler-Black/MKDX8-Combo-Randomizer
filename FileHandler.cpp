#include "FileHandler.h"

FileHandler::FileHandler() {
}
FileHandler::~FileHandler() {
}

unsigned int FileHandler::FilesExists(string& FilePath) {
	unsigned int Iteration = 0;
	bool InstanceFound = false;

	ifstream File(FilePath + ".txt");
	InstanceFound = File.is_open();
	File.close();

	if (InstanceFound) {
		do {
			Iteration++;
			File.open(RenameViaIteration(FilePath, Iteration) + ".txt");
			InstanceFound = File.is_open();
			File.close();
		} while (InstanceFound);
		return Iteration;
	}
	else return 0U;
}
unsigned int FileHandler::DirectoryExists(string& FilePath) {
	unsigned int Iteration = 0;
	bool InstanceFound = false;

	DWORD Atts = GetFileAttributesA(FilePath.c_str());
	InstanceFound = (Atts <= 0x400000);

	if (InstanceFound) {
		do {
			Iteration++;
			Atts = GetFileAttributesA(RenameViaIteration(FilePath, Iteration).c_str());
			InstanceFound = (Atts <= 0x400000);
		} while (InstanceFound);
		return Iteration;
	}

	return 0U;
}

bool FileHandler::FilterFileLineViaCharCodes(string& FileLine, vector<int>& Whitelist) {
	string FilteredLine = "";
	char TestChar;
	int CharCode;

	for (size_t x = 0; (x < FileLine.length()); x++) {
		TestChar = FileLine.c_str()[x];
		CharCode = (int)(TestChar);

		for (unsigned int x = 0; (x < Whitelist.size()); x++) {
			if (CharCode == Whitelist[x]) {
				FilteredLine += TestChar;
				break;
			}
		}
	}
	if (FilteredLine.length() > 0) {
		for (size_t x = (FilteredLine.length() - 1); (x >= 0); x--) {
			TestChar = FileLine.c_str()[x];
			CharCode = (int)(TestChar);
			if (CharCode != 32) {
				if (x < (FilteredLine.length() - 1)) FilteredLine = FilteredLine.substr(0, (x + 1));
				break;
			}
		}
	}
	if (FilteredLine.length() > 0) {
		for (size_t x = 0; (x < FilteredLine.length()); x++) {
			TestChar = FileLine.c_str()[x];
			CharCode = (int)(TestChar);
			if (CharCode != 32) {
				if (x > 0) FilteredLine = FilteredLine.substr(x, (FilteredLine.length() - 1));
				break;
			}
		}
	}

	FileLine = FilteredLine;
	return true;
}

string FileHandler::RenameViaIteration(string& FilePath, unsigned int Iteration) {
	return (FilePath + " (" + to_string(Iteration) + ")");
}
string FileHandler::FloatingToStringAtResolution(float Value, int Resolution) {
	string CompStr = to_string(Value);
	size_t PointPosition = CompStr.find(".");

	if (PointPosition != string::npos) {
		return CompStr.substr(0, (int)(PointPosition + Resolution + 1));
	}
	else return CompStr;
}

bool FileHandler::WriteDataToFile(string& FilePath, vector<string>& Data) {
	unsigned int WriteIteration = FilesExists(FilePath);
	ofstream File;
	bool Success = false;

	if (WriteIteration == 0U) File.open(FilePath + ".txt");
	else File.open(RenameViaIteration(FilePath, WriteIteration) + ".txt");
	
	if (Data.size() > 0) {
		for (unsigned int x = 0; (x < Data.size()); x++) {
			File << Data[x];
			File << "\n";
		}
		Success = true;
	}

	if (File.is_open()) File.close();
	return Success;
}
bool FileHandler::ReadDataFromFile(string& FilePath, vector<string>& Data) {
	unsigned int WriteIteration = FilesExists(FilePath);
	ifstream File;
	string FileLine;
	bool Success = false;

	if (WriteIteration > 0U) {
		File.open(FilePath + ".txt");

		if (File.is_open()) {
			while (getline(File, FileLine)) Data.push_back(FileLine);
			Success = true;
		}
	}
	if (File.is_open()) File.close();

	return Success;
}

string FileHandler::CreateFileDirectory(string& FilePath) {
	unsigned int WriteIteration = DirectoryExists(FilePath);
	string Directory;

	if (WriteIteration == 0U) Directory = FilePath;
	else Directory = RenameViaIteration(FilePath, WriteIteration);

	CreateDirectoryA(Directory.c_str(), NULL);

	return Directory;
}
bool FileHandler::DeleteFileDirectory(string& FilePath) {
	unsigned int WriteIteration;
	string Directory;
	bool success = false;

	do {
		WriteIteration = DirectoryExists(FilePath);

		if (WriteIteration == 0U) break;
		else if (WriteIteration == 1U) Directory = FilePath;
		else Directory = RenameViaIteration(FilePath, (WriteIteration - 1));

		if (WriteIteration > 0U) {
			for (const auto& e : filesystem::directory_iterator(Directory)) filesystem::remove_all(e.path());
			RemoveDirectoryA(Directory.c_str());
			success = true;
		}
	} while (WriteIteration > 1U);

	return success;
}