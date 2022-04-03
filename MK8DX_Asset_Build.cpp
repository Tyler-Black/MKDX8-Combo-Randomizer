#include "MK8DX_Asset_Build.h"

MK8DX_Asset_Build::MK8DX_Asset_Build() {
	Driver = new MK8DX_Asset_Conponent();
	Body = new MK8DX_Asset_Conponent();
	Tires = new MK8DX_Asset_Conponent();
	Glider = new MK8DX_Asset_Conponent();
}
MK8DX_Asset_Build::~MK8DX_Asset_Build() {
	if (Driver != nullptr) delete Driver;
	if (Body != nullptr) delete Body;
	if (Tires != nullptr) delete Tires;
	if (Glider != nullptr) delete Glider;
}

void MK8DX_Asset_Build::AssignDriver(MK8DX_Asset_Conponent* Origin) {
	Driver->CloneFrom(Origin);
}
void MK8DX_Asset_Build::AssignBody(MK8DX_Asset_Conponent* Origin) {
	Body->CloneFrom(Origin);
}
void MK8DX_Asset_Build::AssignTires(MK8DX_Asset_Conponent* Origin) {
	Tires->CloneFrom(Origin);
}
void MK8DX_Asset_Build::AssignGlider(MK8DX_Asset_Conponent* Origin) {
	Glider->CloneFrom(Origin);
}

MK8DX_Asset_Conponent* MK8DX_Asset_Build::GetDriver() {
	return Driver;
}
MK8DX_Asset_Conponent* MK8DX_Asset_Build::GetBody() {
	return Body;
}
MK8DX_Asset_Conponent* MK8DX_Asset_Build::GetTires() {
	return Tires;
}
MK8DX_Asset_Conponent* MK8DX_Asset_Build::GetGlider() {
	return Glider;
}

float MK8DX_Asset_Build::CalculateWeight() {
	return (Driver->GetWeight() + Body->GetWeight() + Tires->GetWeight() + Glider->GetWeight());
}
float MK8DX_Asset_Build::CalculateAcceleration() {
	return (Driver->GetAcceleration() + Body->GetAcceleration() + Tires->GetAcceleration() + Glider->GetAcceleration());
}
float MK8DX_Asset_Build::CalculateOn_Road_Traction() {
	return (Driver->GetOn_Road_Traction() + Body->GetOn_Road_Traction() + Tires->GetOn_Road_Traction() + Glider->GetOn_Road_Traction());
}
float MK8DX_Asset_Build::CalculateOff_Road_Traction() {
	return (Driver->GetOff_Road_Traction() + Body->GetOff_Road_Traction() + Tires->GetOff_Road_Traction() + Glider->GetOff_Road_Traction());
}
float MK8DX_Asset_Build::CalculateMini_Turbo() {
	return (Driver->GetMini_Turbo() + Body->GetMini_Turbo() + Tires->GetMini_Turbo() + Glider->GetMini_Turbo());
}
float MK8DX_Asset_Build::CalculateGround_Speed() {
	return (Driver->GetGround_Speed() + Body->GetGround_Speed() + Tires->GetGround_Speed() + Glider->GetGround_Speed());
}
float MK8DX_Asset_Build::CalculateWater_Speed() {
	return (Driver->GetWater_Speed() + Body->GetWater_Speed() + Tires->GetWater_Speed() + Glider->GetWater_Speed());
}
float MK8DX_Asset_Build::CalculateAnti_Gravity_Speed() {
	return (Driver->GetAnti_Gravity_Speed() + Body->GetAnti_Gravity_Speed() + Tires->GetAnti_Gravity_Speed() + Glider->GetAnti_Gravity_Speed());
}
float MK8DX_Asset_Build::CalculateAir_Speed() {
	return (Driver->GetAir_Speed() + Body->GetAir_Speed() + Tires->GetAir_Speed() + Glider->GetAir_Speed());
}
float MK8DX_Asset_Build::CalculateGround_Handling() {
	return (Driver->GetGround_Handling() + Body->GetGround_Handling() + Tires->GetGround_Handling() + Glider->GetGround_Handling());
}
float MK8DX_Asset_Build::CalculateWater_Handling() {
	return (Driver->GetWater_Handling() + Body->GetWater_Handling() + Tires->GetWater_Handling() + Glider->GetWater_Handling());
}
float MK8DX_Asset_Build::CalculateAnti_Gravity_Handling() {
	return (Driver->GetAnti_Gravity_Handling() + Body->GetAnti_Gravity_Handling() + Tires->GetAnti_Gravity_Handling() + Glider->GetAnti_Gravity_Handling());
}
float MK8DX_Asset_Build::CalculateAir_Handling() {
	return (Driver->GetAir_Handling() + Body->GetAir_Handling() + Tires->GetAir_Handling() + Glider->GetAir_Handling());
}