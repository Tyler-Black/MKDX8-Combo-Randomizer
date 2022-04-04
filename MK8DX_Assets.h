#pragma once

#include <windows.h>
#include <random>
#include <filesystem>
#include <fstream>
#include <vector>
#include <string>

#include "FileHandler.h"
#include "MK8DX_Asset_Conponent.h"
#include "MK8DX_Asset_Build.h"

using namespace std;

class MK8DX_Assets {
private:
	vector<MK8DX_Asset_Conponent*> Drivers;
	vector<MK8DX_Asset_Conponent*> Bodies;
	vector<MK8DX_Asset_Conponent*> Tires;
	vector<MK8DX_Asset_Conponent*> Gliders;

	vector<string> DriverWhiteList;
	vector<string> BodiesWhiteList;
	vector<string> TiresWhiteList;
	vector<string> GlidersWhiteList;
	
public:
	MK8DX_Assets();
	~MK8DX_Assets();

	void LoadHardcodedComponentData();
	void LoadDriverComponentData();
	void LoadBodyComponentData();
	void LoadTireComponentData();
	void LoadGliderComponentData();

	void DeleteComponentData();
	void DeleteDriverComponentData();
	void DeleteBodyComponentData();
	void DeleteTireComponentData();
	void DeleteGliderComponentData();

	void AddAllComponentDataToWhitelist();
	void RemoveAllComponentDataToWhitelist();

	bool WriteComponentDataToFile(
		FileHandler& fHandler,
		string& FilePath
	);
	bool ReadComponentDataFromFile(
		FileHandler& fHandler,
		string& FilePath
	);

	bool WriteComponentWhitelistToFile(
		FileHandler& fHandler,
		string& FilePath
	);
	bool ReadComponentWhitelistFromFile(
		FileHandler& fHandler,
		string& FilePath
	);

	bool GetComponentIsWhitelisted(
		MK8DX_Asset_Conponent* Component,
		vector<string>& WhiteList
	);
	
	int GetComponentIndexOfWhitelistIndex(
		int WhiteListIndex,
		vector<string>& WhiteList,
		vector<MK8DX_Asset_Conponent*>& ComponentList
	);

	bool WriteRandomizedBuildToFile(
		FileHandler& fHandler, string&
		FilePath, string&
		Username
	);
};