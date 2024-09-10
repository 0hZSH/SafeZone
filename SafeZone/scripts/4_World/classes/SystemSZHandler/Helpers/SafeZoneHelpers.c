static ref SafeZoneLocations GetSZConfigClient()	{
	SafeZone module = SafeZone.Cast(CF_ModuleCoreManager.Get(SafeZone));
	return module.m_SZSafeZoneClient.m_SafeZoneLocations;
}

static bool GetSafeZoneStatut()	{
	SafeZone module = SafeZone.Cast(CF_ModuleCoreManager.Get(SafeZone));
  return module.m_SZSafeZoneClient.SZStatut;
}

static ref SafeAreaSettings GetSZConfig()	{
	SafeZone module = SafeZone.Cast(CF_ModuleCoreManager.Get(SafeZone));
  return module.m_ActiveSafeAreaSettings;
}

static ref SZSafeZoneClient GetSafeZoneClient(){
	SafeZone module = SafeZone.Cast(CF_ModuleCoreManager.Get(SafeZone));
  return module.m_SZSafeZoneClient;
}
