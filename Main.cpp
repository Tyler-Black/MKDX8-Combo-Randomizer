#include <vector>
#include <string>

#include "FileHandler.h"
#include "MK8DX_Assets.h"

using namespace std;

int WINAPI WinMain(
	HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow
) {
	FileHandler fHandler = FileHandler();
	MK8DX_Assets* Assets = new MK8DX_Assets();
	vector<string> Players;
	
	string strWinUserName = "";
	char WinUserName[UNLEN + 1];
	DWORD WinUserNameSize = sizeof(WinUserName);
	GetUserNameA(WinUserName, &WinUserNameSize);
	
	strWinUserName = WinUserName;
	string nameBaseFilePath = "C:/Users/" + strWinUserName + "/Documents/MKDX8-Combo-Randomizer";
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

	nameFilePath = (nameBaseFilePath + "/Program Data" + "/ComponentsWhitelist");
	if (fHandler.FilesExists(nameFilePath) == 0U) {
		Assets->AddAllComponentDataToWhitelist();
		Assets->WriteComponentWhitelistToFile(fHandler, nameFilePath);
	}
	else Assets->ReadComponentWhitelistFromFile(fHandler, nameFilePath);

	nameFilePath = (nameBaseFilePath + "/Program Data" + "/PlayerList");
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