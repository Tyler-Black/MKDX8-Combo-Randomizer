#pragma once

#include <windows.h>
#include <filesystem>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class FileHandler {
public:
	FileHandler();
	~FileHandler();

	unsigned int FilesExists(string& FilePath);
	unsigned int DirectoryExists(string& FilePath);

	bool FilterFileLineViaCharCodes(string& FileLine, vector<int>& Whitelist);

	string RenameViaIteration(string& FilePath, unsigned int Iteration);
	string FloatingToStringAtResolution(float Value, int Resolution);

	bool WriteDataToFile(string& FilePath, vector<string>& Data);
	bool ReadDataFromFile(string& FilePath, vector<string>& Data);

	string CreateFileDirectory(string& FilePath);
	bool DeleteFileDirectory(string& FilePath);
};