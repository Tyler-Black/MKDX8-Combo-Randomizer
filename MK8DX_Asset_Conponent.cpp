#include "MK8DX_Asset_Conponent.h"

MK8DX_Asset_Conponent::MK8DX_Asset_Conponent(
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
) {
	LoadHardcodedComponentFileTags();
	AssignValues(
		newName,
		newWeight, newAcceleration, newOn_Road_Traction, newOff_Road_Traction, newMini_Turbo,
		newGround_Speed, newWater_Speed, newAnti_Gravity_Speed, newAir_Speed,
		newGround_Handling, newWater_Handling, newAnti_Gravity_Handling, newAir_Handling
	);
}
MK8DX_Asset_Conponent::MK8DX_Asset_Conponent() {
	LoadHardcodedComponentFileTags();
	AssignValues(
		"UDF",
		0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 0.0f
	);
}
MK8DX_Asset_Conponent::~MK8DX_Asset_Conponent() {
	if (ComponentFileTags.size() > 0) {
		for (unsigned int x = (ComponentFileTags.size() - 1); (x >= 0); x--) {
			if (ComponentFileTags[x] != nullptr) delete ComponentFileTags[x];
			ComponentFileTags.erase(ComponentFileTags.begin() + x);
		}
	}
}

void MK8DX_Asset_Conponent::LoadHardcodedComponentFileTags() {
	Weight_FileTag = "Wei";
	Acceleration_FileTag = "Acc";
	On_Road_Traction_FileTag = "OnT";
	Off_Road_Traction_FileTag = "OfT";
	Mini_Turbo_FileTag = "MTo";
	Ground_Speed_FileTag = "GSp";
	Water_Speed_FileTag = "WSp";
	Anti_Gravity_Speed_FileTag = "GSp";
	Air_Speed_FileTag = "ASp";
	Ground_Handling_FileTag = "GHn";
	Water_Handling_FileTag = "WHn";
	Anti_Gravity_Handling_FileTag = "GHn";
	Air_Handling_FileTag = "AHn";
	ComponentFileTags.push_back(&Weight_FileTag);
	ComponentFileTags.push_back(&Acceleration_FileTag);
	ComponentFileTags.push_back(&On_Road_Traction_FileTag);
	ComponentFileTags.push_back(&Off_Road_Traction_FileTag);
	ComponentFileTags.push_back(&Mini_Turbo_FileTag);
	ComponentFileTags.push_back(&Ground_Speed_FileTag);
	ComponentFileTags.push_back(&Water_Speed_FileTag);
	ComponentFileTags.push_back(&Anti_Gravity_Speed_FileTag);
	ComponentFileTags.push_back(&Air_Speed_FileTag);
	ComponentFileTags.push_back(&Ground_Handling_FileTag);
	ComponentFileTags.push_back(&Water_Handling_FileTag);
	ComponentFileTags.push_back(&Anti_Gravity_Handling_FileTag);
	ComponentFileTags.push_back(&Air_Handling_FileTag);
}
vector<string*>& MK8DX_Asset_Conponent::GetComponentFileTags() {
	return ComponentFileTags;
}

void MK8DX_Asset_Conponent::CloneFrom(MK8DX_Asset_Conponent* Target) {
	AssignValues(
		Target->Name,
		Target->Weight, Target->Acceleration,
		Target->On_Road_Traction, Target->Off_Road_Traction, Target->Mini_Turbo,
		Target->Ground_Speed, Target->Water_Speed, Target->Anti_Gravity_Speed, Target->Air_Speed,
		Target->Ground_Handling, Target->Water_Handling, Target->Anti_Gravity_Handling, Target->Air_Handling
	);
}

void MK8DX_Asset_Conponent::AssignName(string newName) {
	Name = newName;
}
void MK8DX_Asset_Conponent::AssignValues(
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
) {
	Name = newName;
	Weight = newWeight;
	Acceleration = newAcceleration;
	On_Road_Traction = newOn_Road_Traction;
	Off_Road_Traction = newOff_Road_Traction;
	Mini_Turbo = newMini_Turbo;
	Ground_Speed = newGround_Speed;
	Water_Speed = newWater_Speed;
	Anti_Gravity_Speed = newAnti_Gravity_Speed;
	Air_Speed = newAir_Speed;
	Ground_Handling = newGround_Handling;
	Water_Handling = newWater_Handling;
	Anti_Gravity_Handling = newAnti_Gravity_Handling;
	Air_Handling = newAir_Handling;
}
void MK8DX_Asset_Conponent::AssignValueByFileTag(string Tag, string Value) {
	if (Tag == "name") Name = Value;
}
void MK8DX_Asset_Conponent::AssignValueByFileTag(string Tag, float Value) {
	if (Tag == Weight_FileTag) Weight = Value;
	else if (Tag == Acceleration_FileTag) Acceleration = Value;
	else if (Tag == On_Road_Traction_FileTag) On_Road_Traction = Value;
	else if (Tag == Off_Road_Traction_FileTag) Off_Road_Traction = Value;
	else if (Tag == Mini_Turbo_FileTag) Mini_Turbo = Value;
	else if (Tag == Ground_Speed_FileTag) Ground_Speed = Value;
	else if (Tag == Water_Speed_FileTag) Water_Speed = Value;
	else if (Tag == Anti_Gravity_Speed_FileTag) Anti_Gravity_Speed = Value;
	else if (Tag == Air_Speed_FileTag) Air_Speed = Value;
	else if (Tag == Ground_Handling_FileTag) Ground_Handling = Value;
	else if (Tag == Water_Handling_FileTag) Water_Handling = Value;
	else if (Tag == Anti_Gravity_Handling_FileTag) Anti_Gravity_Handling = Value;
	else if (Tag == Air_Handling_FileTag) Air_Handling = Value;
}

void MK8DX_Asset_Conponent::SetName(float newName) {
	Name = newName;
}
void MK8DX_Asset_Conponent::SetWeight(float newWeight) {
	Weight = newWeight;
}
void MK8DX_Asset_Conponent::SetAcceleration(float newAcceleration) {
	Acceleration = newAcceleration;
}
void MK8DX_Asset_Conponent::SetOn_Road_Traction(float newOn_Road_Traction) {
	On_Road_Traction = newOn_Road_Traction;
}
void MK8DX_Asset_Conponent::SetOff_Road_Traction(float newOff_Road_Traction) {
	Off_Road_Traction = newOff_Road_Traction;
}
void MK8DX_Asset_Conponent::SetMini_Turbo(float newMini_Turbo) {
	Mini_Turbo = newMini_Turbo;
}
void MK8DX_Asset_Conponent::SetGround_Speed(float newGround_Speed) {
	Ground_Speed = newGround_Speed;
}
void MK8DX_Asset_Conponent::SetWater_Speed(float newWater_Speed) {
	Water_Speed = newWater_Speed;
}
void MK8DX_Asset_Conponent::SetAnti_Gravity_Speed(float newAnti_Gravity_Speed) {
	Anti_Gravity_Speed = newAnti_Gravity_Speed;
}
void MK8DX_Asset_Conponent::SetAir_Speed(float newAir_Speed) {
	Air_Speed = newAir_Speed;
}
void MK8DX_Asset_Conponent::SetGround_Handling(float newGround_Handling) {
	Ground_Handling = newGround_Handling;
}
void MK8DX_Asset_Conponent::SetWater_Handling(float newWater_Handling) {
	Water_Handling = newWater_Handling;
}
void MK8DX_Asset_Conponent::SetAnti_Gravity_Handling(float newAnti_Gravity_Handling) {
	Anti_Gravity_Handling = newAnti_Gravity_Handling;
}
void MK8DX_Asset_Conponent::SetAir_Handling(float newAir_Handling) {
	Air_Handling = newAir_Handling;
}

string MK8DX_Asset_Conponent::GetName() {
	return Name;
}
float MK8DX_Asset_Conponent::GetWeight() {
	return Weight;
}
float MK8DX_Asset_Conponent::GetAcceleration() {
	return Acceleration;
}
float MK8DX_Asset_Conponent::GetOn_Road_Traction() {
	return On_Road_Traction;
}
float MK8DX_Asset_Conponent::GetOff_Road_Traction() {
	return Off_Road_Traction;
}
float MK8DX_Asset_Conponent::GetMini_Turbo() {
	return Mini_Turbo;
}
float MK8DX_Asset_Conponent::GetGround_Speed() {
	return Ground_Speed;
}
float MK8DX_Asset_Conponent::GetWater_Speed() {
	return Water_Speed;
}
float MK8DX_Asset_Conponent::GetAnti_Gravity_Speed() {
	return Anti_Gravity_Speed;
}
float MK8DX_Asset_Conponent::GetAir_Speed() {
	return Air_Speed;
}
float MK8DX_Asset_Conponent::GetGround_Handling() {
	return Ground_Handling;
}
float MK8DX_Asset_Conponent::GetWater_Handling() {
	return Water_Handling;
}
float MK8DX_Asset_Conponent::GetAnti_Gravity_Handling() {
	return Anti_Gravity_Handling;
}
float MK8DX_Asset_Conponent::GetAir_Handling() {
	return Air_Handling;
}

vector<string> MK8DX_Asset_Conponent::WriteToVectorStringWithTag(FileHandler& fHandler) {
	vector<string> rStrings;

	rStrings.push_back(Weight_FileTag);
	rStrings.push_back(Acceleration_FileTag);
	rStrings.push_back(On_Road_Traction_FileTag);
	rStrings.push_back(Off_Road_Traction_FileTag);
	rStrings.push_back(Mini_Turbo_FileTag);
	rStrings.push_back(Ground_Speed_FileTag);
	rStrings.push_back(Water_Speed_FileTag);
	rStrings.push_back(Anti_Gravity_Speed_FileTag);
	rStrings.push_back(Air_Speed_FileTag);
	rStrings.push_back(Ground_Handling_FileTag);
	rStrings.push_back(Water_Handling_FileTag);
	rStrings.push_back(Anti_Gravity_Handling_FileTag);
	rStrings.push_back(Air_Handling_FileTag);

	return rStrings;
}
vector<string> MK8DX_Asset_Conponent::WriteComponentsToVectorStringWithTag(FileHandler& fHandler) {
	vector<string> rStrings = WriteToVectorStringWithTag(fHandler);

	for (unsigned int x = 0; (x < rStrings.size()); x++) rStrings[x] += " ";
	rStrings[0] += fHandler.FloatingToStringAtResolution(Weight, 2);
	rStrings[1] += fHandler.FloatingToStringAtResolution(Acceleration, 2);
	rStrings[2] += fHandler.FloatingToStringAtResolution(On_Road_Traction, 2);
	rStrings[3] += fHandler.FloatingToStringAtResolution(Off_Road_Traction, 2);
	rStrings[4] += fHandler.FloatingToStringAtResolution(Mini_Turbo, 2);
	rStrings[5] += fHandler.FloatingToStringAtResolution(Ground_Speed, 2);
	rStrings[6] += fHandler.FloatingToStringAtResolution(Water_Speed, 2);
	rStrings[7] += fHandler.FloatingToStringAtResolution(Anti_Gravity_Speed, 2);
	rStrings[8] += fHandler.FloatingToStringAtResolution(Air_Speed, 2);
	rStrings[9] += fHandler.FloatingToStringAtResolution(Ground_Handling, 2);
	rStrings[10] += fHandler.FloatingToStringAtResolution(Water_Handling, 2);
	rStrings[11] += fHandler.FloatingToStringAtResolution(Anti_Gravity_Handling, 2);
	rStrings[12] += fHandler.FloatingToStringAtResolution(Air_Handling, 2);

	rStrings.insert(rStrings.begin(), Name);

	return rStrings;
}