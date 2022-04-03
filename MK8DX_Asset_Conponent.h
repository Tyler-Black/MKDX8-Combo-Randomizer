#pragma once

#include <vector>
#include <string>

#include "FileHandler.h"

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

	void SetName(float newName);
	void SetWeight(float newWeight);
	void SetAcceleration(float newAcceleration);
	void SetOn_Road_Traction(float newOn_Road_Traction);
	void SetOff_Road_Traction(float newOff_Road_Traction);
	void SetMini_Turbo(float newMini_Turbo);
	void SetGround_Speed(float newGround_Speed);
	void SetWater_Speed(float newWater_Speed);
	void SetAnti_Gravity_Speed(float newAnti_Gravity_Speed);
	void SetAir_Speed(float newAir_Speed);
	void SetGround_Handling(float newGround_Handling);
	void SetWater_Handling(float newWater_Handling);
	void SetAnti_Gravity_Handling(float newAnti_Gravity_Handling);
	void SetAir_Handling(float newAir_Handling);

	string GetName();
	float GetWeight();
	float GetAcceleration();
	float GetOn_Road_Traction();
	float GetOff_Road_Traction();
	float GetMini_Turbo();
	float GetGround_Speed();
	float GetWater_Speed();
	float GetAnti_Gravity_Speed();
	float GetAir_Speed();
	float GetGround_Handling();
	float GetWater_Handling();
	float GetAnti_Gravity_Handling();
	float GetAir_Handling();

	vector<string> WriteToVectorStringWithTag(FileHandler& fHandler);
	vector<string> WriteComponentsToVectorStringWithTag(FileHandler& fHandler);
};