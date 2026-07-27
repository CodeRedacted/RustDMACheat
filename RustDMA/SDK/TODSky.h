#pragma once
class TODSky // class TOD_Sky
{
	/*
	"Address": 54329896,
      "Name": "TOD_Sky_TypeInfo",
      "Signature": "TOD_Sky_c*"
	*/
	uint64_t Class = 0xd77d370;
	uint64_t StaticField = 0xB8;
	uint64_t NightParameters = 0x60; // public TOD_NightParameters Night;
	uint64_t DayParameters = 0x58; // 	public TOD_DayParameters Day;
	uint64_t Instance = 0;
	uint64_t AmbientMultiplierDay = 0x58; // TOD_NightParameters -> public float AmbientMultiplier;
	uint64_t AmbientMultiplierNight = 0x54; // TOD_NightParameters -> public float AmbientMultiplier;
	uint64_t LightIntensityDay = 0x4c; // TOD_NightParameters -> public float LightIntensity;
	uint64_t LightIntensityNight = 0x54; // TOD_NightParameters -> public float LightIntensity;
public:
	TODSky();
	void WriteNightLightIntensity(VMMDLL_SCATTER_HANDLE handle, float value);
	void WriteNightAmbientMultiplier(VMMDLL_SCATTER_HANDLE handle, float value);
	void WriteDayAmbientMultiplier(VMMDLL_SCATTER_HANDLE handle, float value);
};
