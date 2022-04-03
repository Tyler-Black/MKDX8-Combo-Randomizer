#pragma once

#include <windows.h>
#include <random>
#include <filesystem>
#include <fstream>
#include <vector>
#include <string>

#include "MK8DX_Asset_Conponent.h"
#include "MK8DX_Asset_Build.h"

using namespace std;

class MK8DX_Assets {
private:
	vector<MK8DX_Asset_Conponent*> Drivers;
	vector<MK8DX_Asset_Conponent*> Bodies;
	vector<MK8DX_Asset_Conponent*> Tires;
	vector<MK8DX_Asset_Conponent*> Gliders;
	
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

	string RenameViaIteration(string& FilePath, unsigned int Iteration);
	unsigned int FilesExists(string& FilePath);
	unsigned int DirectoryExists(string& FilePath);

	void WriteComponentDataToFile(string& FilePath);
	void ReadComponentDataFromFile(string& FilePath);

	string CreateBuildDirectory(string& FilePath);
	void DeleteBuildDirectory(string& FilePath);
	void WriteRandomizedBuildToFile(string& FilePath, string& Username);
};