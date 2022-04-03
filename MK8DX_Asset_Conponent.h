#pragma once

#include <vector>
#include <string>

using namespace std;

class MK8DX_Asset_Conponent {
private:
	string Name;

	float Weight;
	float Acceleration;
	float On_Road_Traction;
	float Off_Road_Traction;
	float Mini_Turbo;
	float Ground_Speed;
	float Water_Speed;
	float Anti_Gravity_Speed;
	float Air_Speed;
	float Ground_Handling;
	float Water_Handling;
	float Anti_Gravity_Handling;
	float Air_Handling;

	vector<string*> ComponentFileTags;
	string Weight_FileTag;
	string Acceleration_FileTag;
	string On_Road_Traction_FileTag;
	string Off_Road_Traction_FileTag;
	string Mini_Turbo_FileTag;
	string Ground_Speed_FileTag;
	string Water_Speed_FileTag;
	string Anti_Gravity_Speed_FileTag;
	string Air_Speed_FileTag;
	string Ground_Handling_FileTag;
	string Water_Handling_FileTag;
	string Anti_Gravity_Handling_FileTag;
	string Air_Handling_FileTag;

public:
	MK8DX_Asset_Conponent(
		string newName,
		float newWeight,
		float newAcceleration,
		float newOn_Road_Traction,
		float newOff_Road_Traction,
		float newMini_Turbo,
		float newGround_Speed,
		float newWater_Speed,
		float newAnti_Gravity_Speed,
		float newAir_Speed,
		float newGround_Handling,
		float newWater_Handling,
		float newAnti_Gravity_Handling,
		float newAir_Handling
	);
	MK8DX_Asset_Conponent();
	~MK8DX_Asset_Conponent();

	void LoadHardcodedComponentFileTags();
	vector<string*>& GetComponentFileTags();

	void CloneFrom(MK8DX_Asset_Conponent* Target);

	void AssignName(string newName);
	void AssignValues(
		string newName,
		float newWeight,
		float newAcceleration,
		float newOn_Road_Traction,
		float newOff_Road_Traction,
		float newMini_Turbo,
		float newGround_Speed,
		float newWater_Speed,
		float newAnti_Gravity_Speed,
		float newAir_Speed,
		float newGround_Handling,
		float newWater_Handling,
		float newAnti_Gravity_Handling,
		float newAir_Handling
	);
	void AssignValueByFileTag(string Tag, string Value);
	void AssignValueByFileTag(string Tag, float Value);

	string GetName();

	string WriteComponentsToString();
	string ComponentToStringAtResolution(float Component);
};