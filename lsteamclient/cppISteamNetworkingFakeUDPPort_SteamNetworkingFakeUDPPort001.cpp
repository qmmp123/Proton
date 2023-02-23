#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_154/steam_api.h"
#include "steamworks_sdk_154/steamnetworkingtypes.h"
#include "steamworks_sdk_154/steamnetworkingfakeip.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_154
#include "struct_converters.h"
#include "cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001.h"
EResult cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP(void *linux_side, const SteamNetworkingIPAddr * remoteAddress, const void * pData, uint32 cbData, int nSendFlags)
{
    return ((ISteamNetworkingFakeUDPPort*)linux_side)->SendMessageToFakeIP(*remoteAddress, (const void *)pData, (uint32)cbData, (int)nSendFlags);
}

void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup(void *linux_side, const SteamNetworkingIPAddr * remoteAddress)
{
    ((ISteamNetworkingFakeUDPPort*)linux_side)->ScheduleCleanup(*remoteAddress);
}

#ifdef __cplusplus
}
#endif
