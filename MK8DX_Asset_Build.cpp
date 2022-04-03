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