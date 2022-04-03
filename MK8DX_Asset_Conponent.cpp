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

string MK8DX_Asset_Conponent::GetName() {
	return Name;
}

string MK8DX_Asset_Conponent::WriteComponentsToString() {
	string Tag = "";
	Tag += (Name + " ");																				Tag += "\n";
	Tag += (Weight_FileTag + " " + ComponentToStringAtResolution(Weight));								Tag += "\n";
	Tag += (Acceleration_FileTag + " " + ComponentToStringAtResolution(Acceleration));					Tag += "\n";
	Tag += (On_Road_Traction_FileTag + " " + ComponentToStringAtResolution(On_Road_Traction));			Tag += "\n";
	Tag += (Off_Road_Traction_FileTag + " " + ComponentToStringAtResolution(Off_Road_Traction));		Tag += "\n";
	Tag += (Mini_Turbo_FileTag + " " + ComponentToStringAtResolution(Mini_Turbo));						Tag += "\n";
	Tag += (Ground_Speed_FileTag + " " + ComponentToStringAtResolution(Ground_Speed));					Tag += "\n";
	Tag += (Water_Speed_FileTag + " " + ComponentToStringAtResolution(Water_Speed));					Tag += "\n";
	Tag += (Anti_Gravity_Speed_FileTag + " " + ComponentToStringAtResolution(Anti_Gravity_Speed));		Tag += "\n";
	Tag += (Air_Speed_FileTag + " " + ComponentToStringAtResolution(Air_Speed));						Tag += "\n";
	Tag += (Ground_Handling_FileTag + " " + ComponentToStringAtResolution(Ground_Handling));			Tag += "\n";
	Tag += (Water_Handling_FileTag + " " + ComponentToStringAtResolution(Water_Handling));				Tag += "\n";
	Tag += (Anti_Gravity_Handling_FileTag + " " + ComponentToStringAtResolution(Anti_Gravity_Handling));Tag += "\n";
	Tag += (Air_Handling_FileTag + " " + ComponentToStringAtResolution(Air_Handling));					Tag += "\n";
	return Tag;
}
string MK8DX_Asset_Conponent::ComponentToStringAtResolution(float Component) {
	string CompStr = to_string(Component);
	size_t PointPosition = CompStr.find(".");

	if (PointPosition != string::npos) {
		return CompStr.substr(0, (int)(PointPosition + 3));
	}
	else return CompStr.substr(0, 4);
}