#include "MK8DX_Assets.h"

MK8DX_Assets::MK8DX_Assets() {
}
MK8DX_Assets::~MK8DX_Assets() {
	DeleteComponentData();
}

void MK8DX_Assets::LoadHardcodedComponentData() {
	LoadDriverComponentData();
	LoadBodyComponentData();
	LoadTireComponentData();
	LoadGliderComponentData();
}
void MK8DX_Assets::LoadDriverComponentData() {
	MK8DX_Asset_Conponent* BabyPeach = new MK8DX_Asset_Conponent(
		"Baby Peach", 2.0f, 4.0f, 4.25f, 4.25f, 4.0f, 2.25f, 2.0f, 2.5f, 2.75f, 5.0f, 5.0f, 4.5f, 5.0f
	);
	MK8DX_Asset_Conponent* BabyDaisy = new MK8DX_Asset_Conponent();
	BabyDaisy->CloneFrom(BabyPeach); BabyDaisy->AssignName("Baby Daisy");

	MK8DX_Asset_Conponent* BabyRosalina = new MK8DX_Asset_Conponent(
		"Baby Rosalina", 2.0f, 4.25f, 3.75f, 3.75f, 4.0f, 2.25f, 2.0f, 2.5f, 2.75f, 4.75f, 4.75f, 4.25f, 4.75f
	);
	MK8DX_Asset_Conponent* Lemmy = new MK8DX_Asset_Conponent();
	Lemmy->CloneFrom(BabyRosalina); Lemmy->AssignName("Lemmy");

	MK8DX_Asset_Conponent* BabyMario = new MK8DX_Asset_Conponent(
		"Baby Mario", 2.25f, 4.25f, 4.0f, 4.0f, 3.75f, 2.5f, 2.25f, 2.75f, 3.0f, 4.5f, 4.5f, 4.0f, 4.5f
	);
	MK8DX_Asset_Conponent* BabyLuigi = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* DryBones = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* LightMii = new MK8DX_Asset_Conponent();
	BabyLuigi->CloneFrom(BabyMario); BabyLuigi->AssignName("Baby Luigi");
	DryBones->CloneFrom(BabyMario); DryBones->AssignName("Dry Bones");
	LightMii->CloneFrom(BabyMario); LightMii->AssignName("Mii (Light)");

	MK8DX_Asset_Conponent* Toadette = new MK8DX_Asset_Conponent(
		"Toadette", 2.5f, 4.25f, 3.5f, 3.5f, 3.75f, 2.75f, 2.5f, 3.0f, 3.25f, 4.25f, 4.25f, 3.75f, 4.25f
	);
	MK8DX_Asset_Conponent* Wendy = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* Isabelle = new MK8DX_Asset_Conponent();
	Wendy->CloneFrom(Toadette); Wendy->AssignName("Wendy");
	Isabelle->CloneFrom(Toadette); Isabelle->AssignName("Isabelle");

	MK8DX_Asset_Conponent* KoopaTroopa = new MK8DX_Asset_Conponent(
		"Koopa Troopa", 2.5f, 4.0f, 4.25f, 4.25f, 3.75f, 2.75f, 2.5f, 3.0f, 3.25f, 4.5f, 4.5f, 4.0f, 4.5f
	);
	MK8DX_Asset_Conponent* Lakitu = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* BowserJr = new MK8DX_Asset_Conponent();
	Lakitu->CloneFrom(KoopaTroopa); Lakitu->AssignName("Lakitu");
	BowserJr->CloneFrom(KoopaTroopa); BowserJr->AssignName("Bowser Jr");

	MK8DX_Asset_Conponent* Toad = new MK8DX_Asset_Conponent(
		"Toad", 2.75f, 4.0f, 4.0f, 4.0f, 3.5f, 3.0f, 2.75f, 3.25f, 3.5f, 4.25f, 4.25f, 3.75f, 4.25f
	);
	MK8DX_Asset_Conponent* ShyGuy = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* Larry = new MK8DX_Asset_Conponent();
	ShyGuy->CloneFrom(Toad); ShyGuy->AssignName("Shy Guy");
	Larry->CloneFrom(Toad); Larry->AssignName("Larry");

	MK8DX_Asset_Conponent* CatPeach = new MK8DX_Asset_Conponent(
		"Cat Peach", 2.75f, 4.0f, 3.75f, 3.75f, 3.5f, 3.25f, 3.0f, 3.5f, 3.75f, 4.0f, 4.0f, 3.5f, 4.0f
	);
	MK8DX_Asset_Conponent* InklingGirl = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* FemaleVillager = new MK8DX_Asset_Conponent();
	InklingGirl->CloneFrom(CatPeach); InklingGirl->AssignName("Inkling Girl");
	FemaleVillager->CloneFrom(CatPeach); FemaleVillager->AssignName("Villager (Female)");

	MK8DX_Asset_Conponent* Peach = new MK8DX_Asset_Conponent(
		"Peach", 3.0f, 3.75f, 3.75f, 3.75f, 3.5f, 3.5f, 3.25f, 3.75f, 4.0f, 3.75f, 3.75f, 3.25f, 3.75f
	);
	MK8DX_Asset_Conponent* Daisy = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* Yoshi = new MK8DX_Asset_Conponent();
	Daisy->CloneFrom(Peach); Daisy->AssignName("Daisy");
	Yoshi->CloneFrom(Peach); Yoshi->AssignName("Yoshi");

	MK8DX_Asset_Conponent* TanookiMario = new MK8DX_Asset_Conponent(
		"Tanooki Mario", 3.25f, 3.75f, 3.25f, 3.25f, 3.5f, 3.5f, 3.25f, 3.75f, 4.0f, 3.75f, 3.75f, 3.25f, 3.75f
	);
	MK8DX_Asset_Conponent* InklingBoy = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* MaleVillager = new MK8DX_Asset_Conponent();
	InklingBoy->CloneFrom(TanookiMario); InklingBoy->AssignName("Inkling Boy");
	MaleVillager->CloneFrom(TanookiMario); MaleVillager->AssignName("Villager (Male)");

	MK8DX_Asset_Conponent* Mario = new MK8DX_Asset_Conponent(
		"Mario", 3.5f, 3.5f, 3.5f, 3.5f, 3.25f, 3.75f, 3.5f, 4.0f, 4.25f, 3.5f, 3.5f, 3.0f, 3.5f
	);
	MK8DX_Asset_Conponent* Ludwig = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* MediumMii = new MK8DX_Asset_Conponent();
	Ludwig->CloneFrom(Mario); Ludwig->AssignName("Ludwig");
	MediumMii->CloneFrom(Mario); MediumMii->AssignName("Mii (Medium)");

	MK8DX_Asset_Conponent* Luigi = new MK8DX_Asset_Conponent(
		"Luigi", 3.5f, 3.5f, 3.25f, 3.25f, 3.25f, 3.75f, 3.5f, 4.0f, 4.25f, 3.75f, 3.75f, 3.25f, 3.75f
	);
	MK8DX_Asset_Conponent* Iggy = new MK8DX_Asset_Conponent();
	Iggy->CloneFrom(Luigi); Iggy->AssignName("Iggy");

	MK8DX_Asset_Conponent* Rosalina = new MK8DX_Asset_Conponent(
		"Rosalina", 3.75f, 3.25f, 3.75f, 3.75f, 3.25f, 4.0f, 3.75f, 4.25f, 4.5f, 3.25f, 3.25f, 2.75f, 3.25f
	);
	MK8DX_Asset_Conponent* KingBoo = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* Link = new MK8DX_Asset_Conponent();
	KingBoo->CloneFrom(Rosalina); KingBoo->AssignName("King Boo");
	Link->CloneFrom(Rosalina); Link->AssignName("Link");

	MK8DX_Asset_Conponent* MetalMario = new MK8DX_Asset_Conponent(
		"Metal Mario", 4.5f, 3.25f, 3.25f, 3.25f, 3.0f, 4.25f, 4.0f, 4.5f, 4.75f, 3.25f, 3.25f, 2.75f, 3.25f
	);
	MK8DX_Asset_Conponent* GoldMario = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* PinkGoldPeach = new MK8DX_Asset_Conponent();
	GoldMario->CloneFrom(MetalMario); GoldMario->AssignName("Gold Mario");
	PinkGoldPeach->CloneFrom(MetalMario); PinkGoldPeach->AssignName("Pink Gold Peach");

	MK8DX_Asset_Conponent* Waluigi = new MK8DX_Asset_Conponent(
		"Waluigi", 4.0f, 3.25f, 3.0f, 3.0f, 3.0f, 4.5f, 4.25f, 4.75f, 5.0f, 3.0f, 3.0f, 2.5f, 3.0f
	);
	MK8DX_Asset_Conponent* DonkeyKong = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* Roy = new MK8DX_Asset_Conponent();
	DonkeyKong->CloneFrom(Waluigi); DonkeyKong->AssignName("Donkey Kong");
	Roy->CloneFrom(Waluigi); Roy->AssignName("Roy");

	MK8DX_Asset_Conponent* Wario = new MK8DX_Asset_Conponent(
		"Wario", 4.25f, 3.0f, 3.25f, 3.25f, 2.75f, 4.75f, 4.5f, 5.0f, 5.25f, 2.75f, 2.75f, 2.25f, 2.75f
	);
	MK8DX_Asset_Conponent* DryBowser = new MK8DX_Asset_Conponent();
	DryBowser->CloneFrom(Wario); DryBowser->AssignName("Dry Bowser");

	MK8DX_Asset_Conponent* Bowser = new MK8DX_Asset_Conponent(
		"Bowser", 4.5f, 3.0f, 3.0f, 3.0f, 2.75f, 4.75f, 4.5f, 5.0f, 5.25f, 2.5f, 2.5f, 2.0f, 2.5f
	);
	MK8DX_Asset_Conponent* Morton = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* HeavyMii = new MK8DX_Asset_Conponent();
	Morton->CloneFrom(Bowser); Morton->AssignName("Morton");
	HeavyMii->CloneFrom(Bowser); HeavyMii->AssignName("Mii (Heavy)");

	Drivers.push_back(BabyPeach); Drivers.push_back(BabyDaisy);
	Drivers.push_back(BabyRosalina); Drivers.push_back(Lemmy);
	Drivers.push_back(BabyMario); Drivers.push_back(BabyLuigi); Drivers.push_back(DryBones);
		Drivers.push_back(LightMii);
	Drivers.push_back(Toadette); Drivers.push_back(Wendy); Drivers.push_back(Isabelle);
	Drivers.push_back(KoopaTroopa); Drivers.push_back(Lakitu); Drivers.push_back(BowserJr);
	Drivers.push_back(Toad); Drivers.push_back(ShyGuy); Drivers.push_back(Larry);
	Drivers.push_back(CatPeach); Drivers.push_back(InklingGirl); Drivers.push_back(FemaleVillager);
	Drivers.push_back(Peach); Drivers.push_back(Daisy); Drivers.push_back(Yoshi);
	Drivers.push_back(TanookiMario); Drivers.push_back(InklingBoy); Drivers.push_back(MaleVillager);
	Drivers.push_back(Mario); Drivers.push_back(Ludwig); Drivers.push_back(MediumMii);
	Drivers.push_back(Luigi); Drivers.push_back(Iggy);
	Drivers.push_back(Rosalina); Drivers.push_back(KingBoo); Drivers.push_back(Link);
	Drivers.push_back(MetalMario); Drivers.push_back(GoldMario); Drivers.push_back(PinkGoldPeach);
	Drivers.push_back(Waluigi); Drivers.push_back(DonkeyKong); Drivers.push_back(Roy);
	Drivers.push_back(Wario); Drivers.push_back(DryBowser);
	Drivers.push_back(Bowser); Drivers.push_back(Morton); Drivers.push_back(HeavyMii);
}
void MK8DX_Assets::LoadBodyComponentData() {
	MK8DX_Asset_Conponent* StandardKart = new MK8DX_Asset_Conponent(
		"Standard Kart", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
	);
	MK8DX_Asset_Conponent* _300SLRoadster = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* TheDuke = new MK8DX_Asset_Conponent();
	_300SLRoadster->CloneFrom(StandardKart); _300SLRoadster->AssignName("300 SL Roadster");
	TheDuke->CloneFrom(StandardKart); TheDuke->AssignName("The Duke");

	MK8DX_Asset_Conponent* PipeFrame = new MK8DX_Asset_Conponent(
		"Pipe Frame", -0.25f, 0.5f, 0.25f, 0.25f, 0.5f, -0.5f, -0.5f, 0.0f, -0.5f, 0.5f, 0.25f, 0.5f, -0.25f
	);
	MK8DX_Asset_Conponent* Varmint = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* CityTripper = new MK8DX_Asset_Conponent();
	Varmint->CloneFrom(PipeFrame); Varmint->AssignName("Varmint");
	CityTripper->CloneFrom(PipeFrame); CityTripper->AssignName("City Tripper");

	MK8DX_Asset_Conponent* Mach8 = new MK8DX_Asset_Conponent(
		"Mach 8", 0.25f, -0.25f, 0.25f, 0.25f, 0.0f, 0.0f, 0.5f, 0.0f, 0.25f, -0.25f, 0.25f, 0.0f, -0.25f
	);
	MK8DX_Asset_Conponent* SportsCoupe = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* Inkstriker = new MK8DX_Asset_Conponent();
	SportsCoupe->CloneFrom(Mach8); SportsCoupe->AssignName("Sports Coupe");
	Inkstriker->CloneFrom(Mach8); Inkstriker->AssignName("Inkstriker");

	MK8DX_Asset_Conponent* SteelDriver = new MK8DX_Asset_Conponent(
		"Steel Driver", 0.5f, -0.75f, 0.0f, 0.0f, -0.5f, 0.25f, -0.25f, 0.5f, -0.75f, -0.5f, -0.5f, 0.75f, -0.5f
	);
	MK8DX_Asset_Conponent* TriSpeeder = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* BoneRattler = new MK8DX_Asset_Conponent();
	TriSpeeder->CloneFrom(SteelDriver); TriSpeeder->AssignName("Tri-Speeder");
	BoneRattler->CloneFrom(SteelDriver); BoneRattler->AssignName("Bone Rattler");

	MK8DX_Asset_Conponent* CatCruiser = new MK8DX_Asset_Conponent(
		"Cat Cruiser", 0.0f, 0.25f, 0.0f, 0.0f, 0.25f, -0.25f, 0.0f, -0.25f, 0.25f, 0.25f, 0.0f, 0.0f, 0.25f
	);
	MK8DX_Asset_Conponent* Comet = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* YoshiBike = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* TeddyBuggy = new MK8DX_Asset_Conponent();
	Comet->CloneFrom(CatCruiser); Comet->AssignName("Comet");
	YoshiBike->CloneFrom(CatCruiser); YoshiBike->AssignName("Yoshi Bike");
	TeddyBuggy->CloneFrom(CatCruiser); TeddyBuggy->AssignName("Teddy Buggy");

	MK8DX_Asset_Conponent* CircuitSpecial = new MK8DX_Asset_Conponent(
		"Circuit Special", 0.25f, -0.75f, -0.5f, -0.5f, -0.75f, 0.5f, 0.25f, -0.5f, -0.25f, -0.5f, -0.25f, -0.25f, -0.75f
	);
	MK8DX_Asset_Conponent* BDasher = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* PWing = new MK8DX_Asset_Conponent();
	BDasher->CloneFrom(CircuitSpecial); BDasher->AssignName("B-Dasher");
	PWing->CloneFrom(CircuitSpecial); PWing->AssignName("P-Wing");

	MK8DX_Asset_Conponent* Badwagon = new MK8DX_Asset_Conponent(
		"Badwagon", 0.5f, -1.0f, 0.5f, 0.5f, -1.0f, 0.5f, 0.0f, -0.25f, -0.5f, -0.75f, -0.5f, -0.25f, -0.75f
	);
	MK8DX_Asset_Conponent* GLA = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* StandardATV = new MK8DX_Asset_Conponent();
	GLA->CloneFrom(Badwagon); GLA->AssignName("GLA");
	StandardATV->CloneFrom(Badwagon); StandardATV->AssignName("Standard ATV");

	MK8DX_Asset_Conponent* Prancer = new MK8DX_Asset_Conponent(
		"Prancer", -0.25f, -0.5f, -0.25f, -0.25f, -0.25f, 0.25f, 0.0f, 0.0f, 0.0f, 0.0f, -0.25f, 0.25f, 0.0f
	);
	MK8DX_Asset_Conponent* SportBike = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* JetBike = new MK8DX_Asset_Conponent();
	SportBike->CloneFrom(Prancer); SportBike->AssignName("Sport Bike");
	JetBike->CloneFrom(Prancer); JetBike->AssignName("Jet Bike");

	MK8DX_Asset_Conponent* Biddybuggy = new MK8DX_Asset_Conponent(
		"Biddybuggy", -0.5f, 0.75f, 0.25f, 0.25f, 0.75f, -0.75f, -0.25f, -0.5f, -0.5f, 0.5f, 0.5f, 0.5f, 0.25f
	);
	MK8DX_Asset_Conponent* MrScooty = new MK8DX_Asset_Conponent();
	MrScooty->CloneFrom(Biddybuggy); MrScooty->AssignName("Mr Scooty");

	MK8DX_Asset_Conponent* Landship = new MK8DX_Asset_Conponent(
		"Landship", -0.5f, 0.5f, 0.75f, 0.75f, 0.5f, -0.5f, -0.75f, 0.5f, -0.25f, 0.25f, -0.25f, 0.75f, 0.0f
	);
	MK8DX_Asset_Conponent* Streetle = new MK8DX_Asset_Conponent();
	Streetle->CloneFrom(Landship); Streetle->AssignName("Streetle");

	MK8DX_Asset_Conponent* Sneeker = new MK8DX_Asset_Conponent(
		"Sneeker", 0.0f, -0.5f, -0.75f, -0.75f, -0.25f, 0.25f, 0.0f, -0.25f, 0.0f, 0.0f, 0.0f, 0.0f, -0.25f
	);
	MK8DX_Asset_Conponent* GoldenStandardKart = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* MasterCycle = new MK8DX_Asset_Conponent();
	GoldenStandardKart->CloneFrom(Sneeker); GoldenStandardKart->AssignName("Golden Standard Kart");
	MasterCycle->CloneFrom(Sneeker); MasterCycle->AssignName("Master Cycle");

	MK8DX_Asset_Conponent* W25SilverArrow = new MK8DX_Asset_Conponent(
		"W25SilverArrow", -0.25f, 0.25f, 0.5f, 0.5f, 0.25f, -0.25f, 0.25f, -0.25f, 0.0f, 0.25f, 0.25f, 0.25f, 0.0f
	);
	MK8DX_Asset_Conponent* StandardBike = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* FlameRider = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* WildWiggler = new MK8DX_Asset_Conponent();
	StandardBike->CloneFrom(W25SilverArrow); StandardBike->AssignName("Standard Bike");
	FlameRider->CloneFrom(W25SilverArrow); FlameRider->AssignName("Flame Rider");
	WildWiggler->CloneFrom(W25SilverArrow); WildWiggler->AssignName("Wild Wiggler");

	MK8DX_Asset_Conponent* BlueFalcon = new MK8DX_Asset_Conponent(
		"BlueFalcon", -0.5f, -0.25f, 0.0f, 0.0f, -0.25f, 0.25f, 0.25f, -0.25f, 0.0f, -0.25f, 0.5f, 0.25f, -0.5f
	);
	MK8DX_Asset_Conponent* SplatBuggy = new MK8DX_Asset_Conponent();
	SplatBuggy->CloneFrom(BlueFalcon); SplatBuggy->AssignName("Splat Buggy");

	MK8DX_Asset_Conponent* TanookiKart = new MK8DX_Asset_Conponent(
		"TanookiKart", 0.25f, -0.5f, 1.0f, 1.0f, -0.25f, -0.25f, 0.0f, 0.25f, 0.0f, 0.25f, 0.0f, 0.5f, 0.0f
	);
	MK8DX_Asset_Conponent* KoopaClown = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* MasterCycleZero = new MK8DX_Asset_Conponent();
	KoopaClown->CloneFrom(Sneeker); KoopaClown->AssignName("Koopa Clown");
	MasterCycleZero->CloneFrom(Sneeker); MasterCycleZero->AssignName("Master Cycle Zero");

	Bodies.push_back(StandardKart); Bodies.push_back(_300SLRoadster); Bodies.push_back(TheDuke);
	Bodies.push_back(PipeFrame); Bodies.push_back(Varmint); Bodies.push_back(CityTripper);
	Bodies.push_back(Mach8); Bodies.push_back(SportsCoupe); Bodies.push_back(Inkstriker);
	Bodies.push_back(SteelDriver); Bodies.push_back(TriSpeeder); Bodies.push_back(BoneRattler);
	Bodies.push_back(CatCruiser); Bodies.push_back(Comet); Bodies.push_back(YoshiBike);
		Bodies.push_back(TeddyBuggy);
	Bodies.push_back(CircuitSpecial); Bodies.push_back(BDasher); Bodies.push_back(PWing);
	Bodies.push_back(Badwagon); Bodies.push_back(GLA); Bodies.push_back(StandardATV);
	Bodies.push_back(Prancer); Bodies.push_back(SportBike); Bodies.push_back(JetBike);
	Bodies.push_back(Biddybuggy); Bodies.push_back(MrScooty);
	Bodies.push_back(Landship); Bodies.push_back(Streetle);
	Bodies.push_back(Sneeker); Bodies.push_back(GoldenStandardKart); Bodies.push_back(MasterCycle);
	Bodies.push_back(W25SilverArrow); Bodies.push_back(StandardBike); Bodies.push_back(FlameRider);
		Bodies.push_back(WildWiggler);
	Bodies.push_back(BlueFalcon); Bodies.push_back(SplatBuggy);
	Bodies.push_back(TanookiKart); Bodies.push_back(KoopaClown); Bodies.push_back(MasterCycleZero);
}
void MK8DX_Assets::LoadTireComponentData() {
	MK8DX_Asset_Conponent* StandardTires = new MK8DX_Asset_Conponent(
		"Standard Tires", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
	);
	MK8DX_Asset_Conponent* BlueStandardTires = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* GLATires = new MK8DX_Asset_Conponent();
	BlueStandardTires->CloneFrom(StandardTires); BlueStandardTires->AssignName("Blue Standard Tires");
	GLATires->CloneFrom(StandardTires); GLATires->AssignName("GLA Tires");

	MK8DX_Asset_Conponent* Monster = new MK8DX_Asset_Conponent(
		"Monster", 0.5f, -0.5f, 0.5f, 0.5f, -0.25f, 0.0f, 0.0f, -0.25f, -0.5f, -0.75f, -0.75f, -0.5f, -0.5f
	);
	MK8DX_Asset_Conponent* HotMonster = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* AncientTires = new MK8DX_Asset_Conponent();
	HotMonster->CloneFrom(Monster); HotMonster->AssignName("Hot Monster");
	AncientTires->CloneFrom(Monster); AncientTires->AssignName("Ancient Tires");

	MK8DX_Asset_Conponent* Roller = new MK8DX_Asset_Conponent(
		"Roller", -0.5f, 0.5f, -0.25f, -0.25f, 0.75f, -0.5f, -0.5f, 0.0f, 0.0f, 0.25f, 0.25f, 0.25f, 0.25f
	);
	MK8DX_Asset_Conponent* AzureRoller = new MK8DX_Asset_Conponent();
	AzureRoller->CloneFrom(Roller); AzureRoller->AssignName("Azure Roller");

	MK8DX_Asset_Conponent* Slim = new MK8DX_Asset_Conponent(
		"Slim", 0.0f, -0.5f, -1.0f, -1.0f, -0.25f, 0.25f, 0.5f, -0.25f, -0.25f, 0.25f, 0.0f, 0.25f, 0.25f
	);
	MK8DX_Asset_Conponent* Wood = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* CrimsonSlim = new MK8DX_Asset_Conponent();
	Wood->CloneFrom(Slim); Wood->AssignName("Wood");
	CrimsonSlim->CloneFrom(Slim); CrimsonSlim->AssignName("Crimson Slim");

	MK8DX_Asset_Conponent* Slick = new MK8DX_Asset_Conponent(
		"Slick", 0.25f, -0.75f, -1.25f, -1.25f, -0.75f, 0.5f, 0.5f, -0.75f, -0.75f, -0.25f, -0.25f, -0.75f, -0.5f
	);
	MK8DX_Asset_Conponent* CyberSlick = new MK8DX_Asset_Conponent();
	CyberSlick->CloneFrom(Slick); CyberSlick->AssignName("Cyber Slick");

	MK8DX_Asset_Conponent* Metal = new MK8DX_Asset_Conponent(
		"Metal", 0.5f, -1.0f, -0.75f, -0.75f, -0.75f, 0.5f, -0.25f, 0.0f, -0.25f, -0.25f, -0.5f, -0.75f, -0.75f
	);
	MK8DX_Asset_Conponent* GoldenTires = new MK8DX_Asset_Conponent();
	GoldenTires->CloneFrom(Metal); GoldenTires->AssignName("Golden Tires");

	MK8DX_Asset_Conponent* Button = new MK8DX_Asset_Conponent(
		"Button", -0.5f, 0.25f, -0.5f, -0.5f, 0.5f, -0.25f, 0.0f, -0.25f, -0.25f, 0.0f, 0.25f, 0.0f, -0.25f
	);
	MK8DX_Asset_Conponent* LeafTires = new MK8DX_Asset_Conponent();
	LeafTires->CloneFrom(Button); LeafTires->AssignName("Leaf Tires");

	MK8DX_Asset_Conponent* OffRoad = new MK8DX_Asset_Conponent(
		"Off-Road", 0.25f, -0.25f, 0.25f, 0.25f, -0.5f, 0.25f, 0.0f, 0.25f, -0.5f, -0.5f, -0.25f, -0.5f, -0.5f
	);
	MK8DX_Asset_Conponent* RetroOffRoad = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* TriforceTires = new MK8DX_Asset_Conponent();
	RetroOffRoad->CloneFrom(OffRoad); RetroOffRoad->AssignName("Retro Off-Road");
	TriforceTires->CloneFrom(OffRoad); TriforceTires->AssignName("Triforce Tires");

	MK8DX_Asset_Conponent* Sponge = new MK8DX_Asset_Conponent(
		"Sponge", -0.25f, 0.0f, 0.25f, 0.25f, 0.25f, -0.25f, -0.25f, -0.5f, 0.25f, -0.25f, 0.0f, -0.5f, 0.0f
	);
	MK8DX_Asset_Conponent* Cushion = new MK8DX_Asset_Conponent();
	Cushion->CloneFrom(Sponge); Cushion->AssignName("Cushion");

	Tires.push_back(StandardTires); Tires.push_back(BlueStandardTires); Tires.push_back(GLATires);
	Tires.push_back(Monster); Tires.push_back(HotMonster); Tires.push_back(AncientTires);
	Tires.push_back(Roller); Tires.push_back(AzureRoller);
	Tires.push_back(Slim); Tires.push_back(Wood); Tires.push_back(CrimsonSlim);
	Tires.push_back(Slick); Tires.push_back(CyberSlick);
	Tires.push_back(Metal); Tires.push_back(GoldenTires);
	Tires.push_back(Button); Tires.push_back(LeafTires);
	Tires.push_back(OffRoad); Tires.push_back(RetroOffRoad); Tires.push_back(TriforceTires);
	Tires.push_back(Sponge); Tires.push_back(Cushion);
}
void MK8DX_Assets::LoadGliderComponentData() {
	MK8DX_Asset_Conponent* SuperGlider = new MK8DX_Asset_Conponent(
		"Super Glider", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
	);
	MK8DX_Asset_Conponent* WaddleWing = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* HylianKite = new MK8DX_Asset_Conponent();
	WaddleWing->CloneFrom(SuperGlider); WaddleWing->AssignName("Waddle Wing");
	HylianKite->CloneFrom(SuperGlider); HylianKite->AssignName("Hylian Kite");

	MK8DX_Asset_Conponent* CloudGlider = new MK8DX_Asset_Conponent(
		"Cloud Glider", -0.25f, 0.25f, 0.0f, 0.0f, 0.25f, -0.25f, 0.25f, 0.0f, -0.25f, 0.0f, 0.0f, 0.0f, 0.25f
	);
	MK8DX_Asset_Conponent* Parachute = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* FlowerGlider = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* PaperGlider = new MK8DX_Asset_Conponent();
	Parachute->CloneFrom(CloudGlider); Parachute->AssignName("Parachute");
	FlowerGlider->CloneFrom(CloudGlider); FlowerGlider->AssignName("Flower Glider");
	PaperGlider->CloneFrom(CloudGlider); PaperGlider->AssignName("Paper Glider");

	MK8DX_Asset_Conponent* WarioWing = new MK8DX_Asset_Conponent(
		"Wario Wing", 0.25f, 0.0f, -0.25f, -0.25f, 0.0f, 0.0f, 0.25f, -0.25f, 0.0f, 0.0f, -0.25f, 0.25f, 0.0f
	);
	MK8DX_Asset_Conponent* PlaneGlider = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* GoldenGlider = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* Paraglider = new MK8DX_Asset_Conponent();
	PlaneGlider->CloneFrom(WarioWing); PlaneGlider->AssignName("Plane Glider");
	GoldenGlider->CloneFrom(WarioWing); GoldenGlider->AssignName("Golden Glider");
	Paraglider->CloneFrom(WarioWing); Paraglider->AssignName("Paraglider");

	MK8DX_Asset_Conponent* PeachParasol = new MK8DX_Asset_Conponent(
		"Peach Parasol", 0.0f, 0.25f, -0.25f, -0.25f, 0.25f, -0.25f, 0.25f, -0.25f, -0.25f, 0.0f, -0.25f, 0.25f, 0.25f
	);
	MK8DX_Asset_Conponent* Parafoil = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* BowserKite = new MK8DX_Asset_Conponent();
	MK8DX_Asset_Conponent* MKTVParafoil = new MK8DX_Asset_Conponent();
	Parafoil->CloneFrom(PlaneGlider); Parafoil->AssignName("Parafoil");
	BowserKite->CloneFrom(PlaneGlider); BowserKite->AssignName("Bowser Kite");
	MKTVParafoil->CloneFrom(PlaneGlider); MKTVParafoil->AssignName("MKTV Parafoil");

	Gliders.push_back(SuperGlider); Gliders.push_back(WaddleWing); Gliders.push_back(HylianKite);
	Gliders.push_back(CloudGlider); Gliders.push_back(Parachute); Gliders.push_back(FlowerGlider);
		Gliders.push_back(PaperGlider);
	Gliders.push_back(WarioWing); Gliders.push_back(PlaneGlider); Gliders.push_back(GoldenGlider);
		Gliders.push_back(Paraglider);
	Gliders.push_back(PeachParasol); Gliders.push_back(Parafoil); Gliders.push_back(BowserKite);
		Gliders.push_back(MKTVParafoil);
}

void MK8DX_Assets::DeleteComponentData() {
	DeleteDriverComponentData();
	DeleteBodyComponentData();
	DeleteTireComponentData();
	DeleteGliderComponentData();
}
void MK8DX_Assets::DeleteDriverComponentData() {
	for (unsigned int x = (Drivers.size() - 1); (x >= 0); x--) {
		if (Drivers[x] != nullptr) delete Drivers[x];
		Drivers.erase(Drivers.begin() + x);
	}
}
void MK8DX_Assets::DeleteBodyComponentData() {
	for (unsigned int x = (Bodies.size() - 1); (x >= 0); x--) {
		if (Bodies[x] != nullptr) delete Bodies[x];
		Bodies.erase(Bodies.begin() + x);
	}
}
void MK8DX_Assets::DeleteTireComponentData() {
	for (unsigned int x = (Tires.size() - 1); (x >= 0); x--) {
		if (Tires[x] != nullptr) delete Tires[x];
		Tires.erase(Tires.begin() + x);
	}
}
void MK8DX_Assets::DeleteGliderComponentData() {
	for (unsigned int x = (Gliders.size() - 1); (x >= 0); x--) {
		if (Gliders[x] != nullptr) delete Gliders[x];
		Gliders.erase(Gliders.begin() + x);
	}
}

string MK8DX_Assets::RenameViaIteration(string& FilePath, unsigned int Iteration) {
	return (FilePath + " (" + to_string(Iteration) + ")");
}
unsigned int MK8DX_Assets::FilesExists(string& FilePath) {
	unsigned int Iteration = 0;
	bool InstanceFound = false;

	ifstream File(FilePath + ".txt");
	InstanceFound = File.is_open();
	File.close();

	if (InstanceFound) {
		do {
			Iteration++;
			File.open(RenameViaIteration(FilePath, Iteration) + ".txt");
			InstanceFound = File.is_open();
			File.close();
		} while (InstanceFound);
		return Iteration;
	}
	else return 0U;
}
unsigned int MK8DX_Assets::DirectoryExists(string& FilePath) {
	unsigned int Iteration = 0;
	bool InstanceFound = false;

	DWORD Atts = GetFileAttributesA(FilePath.c_str());
	InstanceFound = (Atts <= 0x400000);

	if (InstanceFound) {
		do {
			Iteration++;
			Atts = GetFileAttributesA(RenameViaIteration(FilePath, Iteration).c_str());
			InstanceFound = (Atts <= 0x400000);
		} while (InstanceFound);
		return Iteration;
	}

	return 0U;
}

void MK8DX_Assets::WriteComponentDataToFile(string& FilePath) {
	unsigned int WriteIteration = FilesExists(FilePath);
	ofstream File;

	if (WriteIteration == 0U) File.open(FilePath + ".txt");
	else File.open(RenameViaIteration(FilePath, WriteIteration) + ".txt");

	for (unsigned int x = 0; (x < Drivers.size()); x++) {
		File << "dv|";
		File << Drivers.at(x)->WriteComponentsToString();
		File << "\n";
	}
	for (unsigned int x = 0; (x < Bodies.size()); x++) {
		File << "bd|";
		File << Bodies.at(x)->WriteComponentsToString();
		File << "\n";
	}
	for (unsigned int x = 0; (x < Tires.size()); x++) {
		File << "tr|";
		File << Tires.at(x)->WriteComponentsToString();
		File << "\n";
	}
	for (unsigned int x = 0; (x < Gliders.size()); x++) {
		File << "gd|";
		File << Gliders.at(x)->WriteComponentsToString();
		File << "\n";
	}

	if (File.is_open()) File.close();
}
void MK8DX_Assets::ReadComponentDataFromFile(string& FilePath) {
	unsigned int WriteIteration = FilesExists(FilePath);
	ifstream File;

	string FileLine;
	string ReadLine;
	string ReadLineHeaderPrefix;
	int CharCode;
	int EntryHeaderSeporatorIndex;

	vector<MK8DX_Asset_Conponent*>* AssetListPtr = nullptr;
	vector<string*>* ComponentFileTagListPtr = nullptr;

	MK8DX_Asset_Conponent* newConponentEntry = nullptr;

	if (WriteIteration > 0U) {
		File.open(FilePath + ".txt");

		while (getline(File, FileLine)) {
			ReadLine = "";
			CharCode = -1;
			EntryHeaderSeporatorIndex = -1;

			for (size_t x = 0; (x < FileLine.length()); x++) {
				CharCode = (int)(FileLine.c_str()[x]);
				if (
					(CharCode >= 32)
					|| (CharCode >= 124)
					|| ((CharCode >= 48) && (CharCode <= 57))
					|| ((CharCode >= 65) && (CharCode <= 90))
					|| ((CharCode >= 97) && (CharCode <= 122))
				) {
					ReadLine += (FileLine.c_str()[x]);
				}
				if (CharCode >= 124) EntryHeaderSeporatorIndex = x;
			}
			if (ReadLine.length() > 0) {
				for (size_t x = (ReadLine.length() - 1); (x >= 0); x--) {
					CharCode = (int)(FileLine.c_str()[x]);
					if (CharCode != 32) {
						if (x < (ReadLine.length() - 1)) ReadLine = ReadLine.substr(0, (x + 1));
						break;
					}
				}
				for (size_t x = 0; (x < ReadLine.length()); x++) {
					CharCode = (int)(FileLine.c_str()[x]);
					if (CharCode != 32) {
						if (x > 0) ReadLine = ReadLine.substr(x, (ReadLine.length() - 1));
						break;
					}
				}
			}
			
			if (EntryHeaderSeporatorIndex >= 0) {
				ReadLineHeaderPrefix = ReadLine.substr(0, EntryHeaderSeporatorIndex);
				if (
					(ReadLineHeaderPrefix == "dv") || (ReadLineHeaderPrefix == "bd")
					|| (ReadLineHeaderPrefix == "tr") || (ReadLineHeaderPrefix == "gd")
				) {
					if (newConponentEntry != nullptr) AssetListPtr->push_back(newConponentEntry);
					newConponentEntry = new MK8DX_Asset_Conponent();
					newConponentEntry->AssignValueByFileTag(
						"name",
						ReadLine.substr((EntryHeaderSeporatorIndex + 1), (ReadLine.length() - 1))
					);
				}
				if (ReadLineHeaderPrefix == "dv") AssetListPtr = &Drivers;
				else if (ReadLineHeaderPrefix == "bd") AssetListPtr = &Bodies;
				else if (ReadLineHeaderPrefix == "tr") AssetListPtr = &Tires;
				else if (ReadLineHeaderPrefix == "gd") AssetListPtr = &Gliders;
			}
			else {
				if (AssetListPtr != nullptr) {
					ComponentFileTagListPtr = &newConponentEntry->GetComponentFileTags();
					
					for (unsigned int x = 0; (x < ComponentFileTagListPtr->size()); x++) {
						if (
							ReadLine.substr(0, ComponentFileTagListPtr->at(x)->length())
							== ComponentFileTagListPtr->at(x)->c_str()
						) {
							newConponentEntry->AssignValueByFileTag(
								*ComponentFileTagListPtr->at(x),
								stof(
									ReadLine.substr(ComponentFileTagListPtr->at(x)->length(),
									(ReadLine.length() - 1))
								)
							);
							break;
						}
					}
				}
			}
		}
		if (File.peek() == EOF) {
			if (newConponentEntry != nullptr) AssetListPtr->push_back(newConponentEntry);
		}
	}

	if (File.is_open()) File.close();
}

string MK8DX_Assets::CreateBuildDirectory(string& FilePath) {
	unsigned int WriteIteration = DirectoryExists(FilePath);
	string Directory;

	if (WriteIteration == 0U) Directory = FilePath;
	else Directory = RenameViaIteration(FilePath, WriteIteration);
	CreateDirectoryA(Directory.c_str(), NULL);

	return Directory;
}
void MK8DX_Assets::DeleteBuildDirectory(string& FilePath) {
	unsigned int WriteIteration;
	string Directory;

	do {
		WriteIteration = DirectoryExists(FilePath);
		if (WriteIteration == 0U) break;
		else if (WriteIteration == 1U) Directory = FilePath;
		else Directory = RenameViaIteration(FilePath, (WriteIteration - 1));
		if (WriteIteration > 0U) {
			for (const auto& entry : filesystem::directory_iterator(Directory)) {
				filesystem::remove_all(entry.path());
			}
			RemoveDirectoryA(Directory.c_str());
		}
	} while (WriteIteration > 1U);
}
void MK8DX_Assets::WriteRandomizedBuildToFile(string& FilePath, string& Username) {
	unsigned int WriteIteration;
	ofstream File;
	MK8DX_Asset_Build* Build = nullptr;

	if (!((Drivers.size() > 0) && (Bodies.size() > 0) && (Tires.size() > 0) && (Gliders.size() > 0))) return;

	WriteIteration = FilesExists(FilePath);
	if (WriteIteration == 0U) File.open(FilePath + ".txt");
	else File.open(RenameViaIteration(FilePath, WriteIteration) + ".txt");

	default_random_engine RandGenerator;
	uniform_int_distribution<int> DriverDistribution(0, Drivers.size());
	uniform_int_distribution<int> BodyDistribution(0, Bodies.size());
	uniform_int_distribution<int> TireDistribution(0, Tires.size());
	uniform_int_distribution<int> GliderDistribution(0, Gliders.size());

	/*
		Find better ways to generate random numbers
	*/

	Build = new MK8DX_Asset_Build();
	Build->AssignDriver(Drivers[DriverDistribution(RandGenerator)]);
	Build->AssignBody(Bodies[BodyDistribution(RandGenerator)]);
	Build->AssignTires(Tires[TireDistribution(RandGenerator)]);
	Build->AssignGlider(Gliders[GliderDistribution(RandGenerator)]);

	File << (Username + "\n");
	File << ("Driver: " + Build->GetDriver()->GetName() + "\n");

	if (File.is_open()) File.close();
}