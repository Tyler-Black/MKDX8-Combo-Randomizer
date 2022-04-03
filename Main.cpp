#include <iostream>
#include <vector>
#include <string>

#include "MK8DX_Assets.h"

using namespace std;

int main() {
	MK8DX_Assets* Assets = new MK8DX_Assets();
	vector<string> Players;

	string nameBaseFilePath = "C:/Users/CV/Documents/MK8DX Randomizer Assets";
	string nameFilePath;
	string ResolvedPath;

	Players.push_back("Esk");

	nameFilePath = nameBaseFilePath;
	if (Assets->DirectoryExists(nameFilePath) == 0U) {
		ResolvedPath = Assets->CreateBuildDirectory(nameFilePath);
	}

	nameFilePath = (nameBaseFilePath + "/Program Data");
	if (Assets->DirectoryExists(nameFilePath) == 0U) {
		ResolvedPath = Assets->CreateBuildDirectory(nameFilePath);
	}
	nameFilePath = (nameBaseFilePath + "/Program Data" + "/Components List");
	if (Assets->FilesExists(nameFilePath) == 0U) {
		Assets->LoadHardcodedComponentData();
		Assets->WriteComponentDataToFile(nameFilePath);
	}
	else Assets->ReadComponentDataFromFile(nameFilePath);

	nameFilePath = (nameBaseFilePath + "/Randomized Builds");
	if (Assets->DirectoryExists(nameFilePath) == 0U) {
		ResolvedPath = Assets->CreateBuildDirectory(nameFilePath);
	}

	nameFilePath = (nameBaseFilePath + "/Randomized Builds" + "/Build");
	Assets->DeleteBuildDirectory(nameFilePath);
	ResolvedPath = Assets->CreateBuildDirectory(nameFilePath);
	for (unsigned int x = 0; (x < Players.size()); x++) {
		string UniquePath = (ResolvedPath + "/" + Players[x]);
		Assets->WriteRandomizedBuildToFile(UniquePath, Players[x]);
	}

	return 0;
}