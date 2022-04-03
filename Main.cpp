#include <iostream>
#include <vector>
#include <string>

#include "FileHandler.h"
#include "MK8DX_Assets.h"

using namespace std;

int main() {
	FileHandler fHandler = FileHandler();
	MK8DX_Assets* Assets = new MK8DX_Assets();
	vector<string> Players;

	string nameBaseFilePath = "C:/Users/CV/Documents/MK8DX Randomizer Assets";
	string nameFilePath;
	string ResolvedPath;

	nameFilePath = nameBaseFilePath;
	if (fHandler.DirectoryExists(nameFilePath) == 0U) {
		ResolvedPath = fHandler.CreateFileDirectory(nameFilePath);
	}

	nameFilePath = (nameBaseFilePath + "/Program Data");
	if (fHandler.DirectoryExists(nameFilePath) == 0U) {
		ResolvedPath = fHandler.CreateFileDirectory(nameFilePath);
	}
	nameFilePath = (nameBaseFilePath + "/Program Data" + "/ComponentsList");
	if (fHandler.FilesExists(nameFilePath) == 0U) {
		Assets->LoadHardcodedComponentData();
		Assets->WriteComponentDataToFile(fHandler, nameFilePath);
	}
	else Assets->ReadComponentDataFromFile(fHandler, nameFilePath);

	nameFilePath = (nameBaseFilePath + "/User Player List");
	if (fHandler.DirectoryExists(nameFilePath) == 0U) {
		ResolvedPath = fHandler.CreateFileDirectory(nameFilePath);
	}
	nameFilePath = (nameBaseFilePath + "/User Player List" + "/PlayerList");
	if (fHandler.FilesExists(nameFilePath) == 0U) {
		for (unsigned int x = 0; (x < 12); x++) Players.push_back("Player " + to_string(x + 1));
		fHandler.WriteDataToFile(nameFilePath, Players);
	}
	else fHandler.ReadDataFromFile(nameFilePath, Players);

	nameFilePath = (nameBaseFilePath + "/Randomized Builds");
	if (fHandler.DirectoryExists(nameFilePath) == 0U) {
		ResolvedPath = fHandler.CreateFileDirectory(nameFilePath);
	}
	nameFilePath = (nameBaseFilePath + "/Randomized Builds" + "/Build");
	//fHandler.DeleteFileDirectory(nameFilePath);
	ResolvedPath = fHandler.CreateFileDirectory(nameFilePath);
	for (unsigned int x = 0; (x < Players.size()); x++) {
		string UniquePath = (ResolvedPath + "/" + Players[x]);
		Assets->WriteRandomizedBuildToFile(fHandler, UniquePath, Players[x]);
	}

	return 0;
}