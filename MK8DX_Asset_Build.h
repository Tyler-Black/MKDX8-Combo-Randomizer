#pragma once

#include <string>

#include "MK8DX_Asset_Conponent.h"

using namespace std;

class MK8DX_Asset_Build {
private:
	MK8DX_Asset_Conponent* Driver;
	MK8DX_Asset_Conponent* Body;
	MK8DX_Asset_Conponent* Tires;
	MK8DX_Asset_Conponent* Glider;

public:
	MK8DX_Asset_Build();
	~MK8DX_Asset_Build();

	void AssignDriver(MK8DX_Asset_Conponent* Origin);
	void AssignBody(MK8DX_Asset_Conponent* Origin);
	void AssignTires(MK8DX_Asset_Conponent* Origin);
	void AssignGlider(MK8DX_Asset_Conponent* Origin);

	MK8DX_Asset_Conponent* GetDriver();
	MK8DX_Asset_Conponent* GetBody();
	MK8DX_Asset_Conponent* GetTires();
	MK8DX_Asset_Conponent* GetGlider();

	float CalculateWeight();
	float CalculateAcceleration();
	float CalculateOn_Road_Traction();
	float CalculateOff_Road_Traction();
	float CalculateMini_Turbo();
	float CalculateGround_Speed();
	float CalculateWater_Speed();
	float CalculateAnti_Gravity_Speed();
	float CalculateAir_Speed();
	float CalculateGround_Handling();
	float CalculateWater_Handling();
	float CalculateAnti_Gravity_Handling();
	float CalculateAir_Handling();
};