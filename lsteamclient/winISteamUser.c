/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamUser_SteamUser004.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_LogOn, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetLogonState, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_BConnected, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_IsVACBanned, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_RequireShowVACBannedMessage, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_AcknowledgeVACBanning, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_NClientGameIDAdd, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_RemoveClientGame, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetClientGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetSteam2Ticket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_AddServerNetAddress, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetEmail, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetSteamGameConnectToken, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetRegistryString, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetRegistryString, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_InitiateGameConnection, 36)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_IsPrimaryChatDestination, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_RequestLegacyCDKey, 8)

HSteamUser __thiscall winISteamUser_SteamUser004_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_GetHSteamUser(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser004_LogOn(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_LogOn(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser004_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_LogOff(_this->u_iface);
}

bool __thiscall winISteamUser_SteamUser004_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_BLoggedOn(_this->u_iface);
    return _ret;
}

ELogonState __thiscall winISteamUser_SteamUser004_GetLogonState(struct w_steam_iface *_this)
{
    ELogonState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_GetLogonState(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser004_BConnected(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_BConnected(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser004_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser004_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser004_IsVACBanned(struct w_steam_iface *_this, int nGameID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_IsVACBanned(_this->u_iface, nGameID);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser004_RequireShowVACBannedMessage(struct w_steam_iface *_this, int nGameID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_RequireShowVACBannedMessage(_this->u_iface, nGameID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser004_AcknowledgeVACBanning(struct w_steam_iface *_this, int nGameID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_AcknowledgeVACBanning(_this->u_iface, nGameID);
}

int __thiscall winISteamUser_SteamUser004_NClientGameIDAdd(struct w_steam_iface *_this, int nGameID)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_NClientGameIDAdd(_this->u_iface, nGameID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser004_RemoveClientGame(struct w_steam_iface *_this, int nClientGameID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_RemoveClientGame(_this->u_iface, nClientGameID);
}

void __thiscall winISteamUser_SteamUser004_SetClientGameServer(struct w_steam_iface *_this, int nClientGameID, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_SetClientGameServer(_this->u_iface, nClientGameID, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser004_SetSteam2Ticket(struct w_steam_iface *_this, uint8 *pubTicket, int cubTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_SetSteam2Ticket(_this->u_iface, pubTicket, cubTicket);
}

void __thiscall winISteamUser_SteamUser004_AddServerNetAddress(struct w_steam_iface *_this, uint32 unIP, uint16 unPort)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_AddServerNetAddress(_this->u_iface, unIP, unPort);
}

bool __thiscall winISteamUser_SteamUser004_SetEmail(struct w_steam_iface *_this, const char *pchEmail)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_SetEmail(_this->u_iface, pchEmail);
    return _ret;
}

int __thiscall winISteamUser_SteamUser004_GetSteamGameConnectToken(struct w_steam_iface *_this, void *pBlob, int cbMaxBlob)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_GetSteamGameConnectToken(_this->u_iface, pBlob, cbMaxBlob);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser004_SetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_SetRegistryString(_this->u_iface, eRegistrySubTree, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser004_GetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, char *pchValue, int cbValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_GetRegistryString(_this->u_iface, eRegistrySubTree, pchKey, pchValue, cbValue);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser004_SetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int iValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_SetRegistryInt(_this->u_iface, eRegistrySubTree, pchKey, iValue);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser004_GetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int *piValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_GetRegistryInt(_this->u_iface, eRegistrySubTree, pchKey, piValue);
    return _ret;
}

int __thiscall winISteamUser_SteamUser004_InitiateGameConnection(struct w_steam_iface *_this, void *pBlob, int cbMaxBlob, CSteamID steamID, int nGameAppID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_InitiateGameConnection(_this->u_iface, pBlob, cbMaxBlob, steamID, nGameAppID, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser004_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination(_this->u_iface);
}

bool __thiscall winISteamUser_SteamUser004_IsPrimaryChatDestination(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser004_IsPrimaryChatDestination(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser004_RequestLegacyCDKey(struct w_steam_iface *_this, uint32 iAppID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_RequestLegacyCDKey(_this->u_iface, iAppID);
}

extern vtable_ptr winISteamUser_SteamUser004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser004,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_LogOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_LogOff)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetLogonState)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_BConnected)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_IsVACBanned)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_RequireShowVACBannedMessage)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_AcknowledgeVACBanning)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_NClientGameIDAdd)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_RemoveClientGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetClientGameServer)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetSteam2Ticket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_AddServerNetAddress)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetEmail)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetSteamGameConnectToken)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_IsPrimaryChatDestination)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_RequestLegacyCDKey)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser004_vtable, 26, "SteamUser004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser005.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_LogOn, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetLogonState, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_BConnected, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_IsVACBanned, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_RequireShowVACBannedMessage, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_AcknowledgeVACBanning, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetSteam2Ticket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_AddServerNetAddress, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetEmail, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetRegistryString, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetRegistryString, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_InitiateGameConnection, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_IsPrimaryChatDestination, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_RequestLegacyCDKey, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SendGuestPassByEmail, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SendGuestPassByAccountID, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_AckGuestPass, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_RedeemGuestPass, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToGiveCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToRedeemCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassLastUpdateTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToGiveInfo, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToRedeemInfo, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToRedeemSenderName, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_AcknowledgeMessageByGID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetLanguage, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetAccountName, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetPassword, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetAccountCreationTime, 8)

HSteamUser __thiscall winISteamUser_SteamUser005_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_GetHSteamUser(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser005_LogOn(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_LogOn(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser005_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_LogOff(_this->u_iface);
}

bool __thiscall winISteamUser_SteamUser005_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_BLoggedOn(_this->u_iface);
    return _ret;
}

ELogonState __thiscall winISteamUser_SteamUser005_GetLogonState(struct w_steam_iface *_this)
{
    ELogonState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_GetLogonState(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_BConnected(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_BConnected(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser005_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser005_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_IsVACBanned(struct w_steam_iface *_this, int nGameID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_IsVACBanned(_this->u_iface, nGameID);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_RequireShowVACBannedMessage(struct w_steam_iface *_this, int nAppID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_RequireShowVACBannedMessage(_this->u_iface, nAppID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser005_AcknowledgeVACBanning(struct w_steam_iface *_this, int nAppID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_AcknowledgeVACBanning(_this->u_iface, nAppID);
}

void __thiscall winISteamUser_SteamUser005_SetSteam2Ticket(struct w_steam_iface *_this, uint8 *pubTicket, int cubTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetSteam2Ticket(_this->u_iface, pubTicket, cubTicket);
}

void __thiscall winISteamUser_SteamUser005_AddServerNetAddress(struct w_steam_iface *_this, uint32 unIP, uint16 unPort)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_AddServerNetAddress(_this->u_iface, unIP, unPort);
}

bool __thiscall winISteamUser_SteamUser005_SetEmail(struct w_steam_iface *_this, const char *pchEmail)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_SetEmail(_this->u_iface, pchEmail);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_SetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_SetRegistryString(_this->u_iface, eRegistrySubTree, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_GetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, char *pchValue, int cbValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_GetRegistryString(_this->u_iface, eRegistrySubTree, pchKey, pchValue, cbValue);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_SetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int iValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_SetRegistryInt(_this->u_iface, eRegistrySubTree, pchKey, iValue);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_GetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int *piValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_GetRegistryInt(_this->u_iface, eRegistrySubTree, pchKey, piValue);
    return _ret;
}

int __thiscall winISteamUser_SteamUser005_InitiateGameConnection(struct w_steam_iface *_this, void *pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_InitiateGameConnection(_this->u_iface, pBlob, cbMaxBlob, steamID, gameID, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser005_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination(_this->u_iface);
}

bool __thiscall winISteamUser_SteamUser005_IsPrimaryChatDestination(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_IsPrimaryChatDestination(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser005_RequestLegacyCDKey(struct w_steam_iface *_this, uint32 nAppID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_RequestLegacyCDKey(_this->u_iface, nAppID);
}

bool __thiscall winISteamUser_SteamUser005_SendGuestPassByEmail(struct w_steam_iface *_this, const char *pchEmailAccount, GID_t gidGuestPassID, bool bResending)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_SendGuestPassByEmail(_this->u_iface, pchEmailAccount, gidGuestPassID, bResending);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_SendGuestPassByAccountID(struct w_steam_iface *_this, uint32 uAccountID, GID_t gidGuestPassID, bool bResending)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_SendGuestPassByAccountID(_this->u_iface, uAccountID, gidGuestPassID, bResending);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_AckGuestPass(struct w_steam_iface *_this, const char *pchGuestPassCode)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_AckGuestPass(_this->u_iface, pchGuestPassCode);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_RedeemGuestPass(struct w_steam_iface *_this, const char *pchGuestPassCode)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_RedeemGuestPass(_this->u_iface, pchGuestPassCode);
    return _ret;
}

uint32 __thiscall winISteamUser_SteamUser005_GetGuestPassToGiveCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_GetGuestPassToGiveCount(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUser_SteamUser005_GetGuestPassToRedeemCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_GetGuestPassToRedeemCount(_this->u_iface);
    return _ret;
}

RTime32 __thiscall winISteamUser_SteamUser005_GetGuestPassLastUpdateTime(struct w_steam_iface *_this)
{
    RTime32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_GetGuestPassToGiveInfo(struct w_steam_iface *_this, uint32 nPassIndex, GID_t *pgidGuestPassID, PackageId_t *pnPackageID, RTime32 *pRTime32Created, RTime32 *pRTime32Expiration, RTime32 *pRTime32Sent, RTime32 *pRTime32Redeemed, char *pchRecipientAddress, int cRecipientAddressSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_GetGuestPassToGiveInfo(_this->u_iface, nPassIndex, pgidGuestPassID, pnPackageID, pRTime32Created, pRTime32Expiration, pRTime32Sent, pRTime32Redeemed, pchRecipientAddress, cRecipientAddressSize);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_GetGuestPassToRedeemInfo(struct w_steam_iface *_this, uint32 nPassIndex, GID_t *pgidGuestPassID, PackageId_t *pnPackageID, RTime32 *pRTime32Created, RTime32 *pRTime32Expiration, RTime32 *pRTime32Sent, RTime32 *pRTime32Redeemed)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo(_this->u_iface, nPassIndex, pgidGuestPassID, pnPackageID, pRTime32Created, pRTime32Expiration, pRTime32Sent, pRTime32Redeemed);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress(struct w_steam_iface *_this, uint32 nPassIndex, char *pchSenderAddress, int cSenderAddressSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress(_this->u_iface, nPassIndex, pchSenderAddress, cSenderAddressSize);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser005_GetGuestPassToRedeemSenderName(struct w_steam_iface *_this, uint32 nPassIndex, char *pchSenderName, int cSenderNameSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName(_this->u_iface, nPassIndex, pchSenderName, cSenderNameSize);
    return _ret;
}

void __thiscall winISteamUser_SteamUser005_AcknowledgeMessageByGID(struct w_steam_iface *_this, const char *pchMessageGID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_AcknowledgeMessageByGID(_this->u_iface, pchMessageGID);
}

bool __thiscall winISteamUser_SteamUser005_SetLanguage(struct w_steam_iface *_this, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser005_SetLanguage(_this->u_iface, pchLanguage);
    return _ret;
}

void __thiscall winISteamUser_SteamUser005_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

void __thiscall winISteamUser_SteamUser005_SetAccountName(struct w_steam_iface *_this, const char *pchAccountName)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetAccountName(_this->u_iface, pchAccountName);
}

void __thiscall winISteamUser_SteamUser005_SetPassword(struct w_steam_iface *_this, const char *pchPassword)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetPassword(_this->u_iface, pchPassword);
}

void __thiscall winISteamUser_SteamUser005_SetAccountCreationTime(struct w_steam_iface *_this, RTime32 rt)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetAccountCreationTime(_this->u_iface, rt);
}

extern vtable_ptr winISteamUser_SteamUser005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser005,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_LogOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_LogOff)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetLogonState)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_BConnected)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_IsVACBanned)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_RequireShowVACBannedMessage)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_AcknowledgeVACBanning)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetSteam2Ticket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_AddServerNetAddress)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetEmail)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_IsPrimaryChatDestination)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_RequestLegacyCDKey)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SendGuestPassByEmail)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SendGuestPassByAccountID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_AckGuestPass)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_RedeemGuestPass)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToGiveCount)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToRedeemCount)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassLastUpdateTime)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToGiveInfo)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToRedeemInfo)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToRedeemSenderName)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_AcknowledgeMessageByGID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetAccountName)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetPassword)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetAccountCreationTime)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser005_vtable, 39, "SteamUser005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser006.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_LogOn, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_SetRegistryString, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_GetRegistryString, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_SetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_GetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_InitiateGameConnection, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_TrackAppUsageEvent, 20)

HSteamUser __thiscall winISteamUser_SteamUser006_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser006_GetHSteamUser(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser006_LogOn(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_LogOn(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser006_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_LogOff(_this->u_iface);
}

bool __thiscall winISteamUser_SteamUser006_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser006_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser006_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser006_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser006_SetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser006_SetRegistryString(_this->u_iface, eRegistrySubTree, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser006_GetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, char *pchValue, int cbValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser006_GetRegistryString(_this->u_iface, eRegistrySubTree, pchKey, pchValue, cbValue);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser006_SetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int iValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser006_SetRegistryInt(_this->u_iface, eRegistrySubTree, pchKey, iValue);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser006_GetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int *piValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser006_GetRegistryInt(_this->u_iface, eRegistrySubTree, pchKey, piValue);
    return _ret;
}

int __thiscall winISteamUser_SteamUser006_InitiateGameConnection(struct w_steam_iface *_this, void *pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser006_InitiateGameConnection(_this->u_iface, pBlob, cbMaxBlob, steamID, gameID, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser006_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser006_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

extern vtable_ptr winISteamUser_SteamUser006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser006,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_LogOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_LogOff)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_SetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_GetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_SetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_GetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_TrackAppUsageEvent)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser006_vtable, 12, "SteamUser006");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser007.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_LogOn, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_SetRegistryString, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_GetRegistryString, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_SetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_GetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_InitiateGameConnection, 48)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_RefreshSteam2Login, 4)

HSteamUser __thiscall winISteamUser_SteamUser007_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser007_GetHSteamUser(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser007_LogOn(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_LogOn(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser007_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_LogOff(_this->u_iface);
}

bool __thiscall winISteamUser_SteamUser007_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser007_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser007_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser007_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser007_SetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser007_SetRegistryString(_this->u_iface, eRegistrySubTree, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser007_GetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, char *pchValue, int cbValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser007_GetRegistryString(_this->u_iface, eRegistrySubTree, pchKey, pchValue, cbValue);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser007_SetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int iValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser007_SetRegistryInt(_this->u_iface, eRegistrySubTree, pchKey, iValue);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser007_GetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int *piValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser007_GetRegistryInt(_this->u_iface, eRegistrySubTree, pchKey, piValue);
    return _ret;
}

int __thiscall winISteamUser_SteamUser007_InitiateGameConnection(struct w_steam_iface *_this, void *pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure, void *pvSteam2GetEncryptionKey, int cbSteam2GetEncryptionKey)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser007_InitiateGameConnection(_this->u_iface, pBlob, cbMaxBlob, steamID, gameID, unIPServer, usPortServer, bSecure, pvSteam2GetEncryptionKey, cbSteam2GetEncryptionKey);
    return _ret;
}

void __thiscall winISteamUser_SteamUser007_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser007_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

void __thiscall winISteamUser_SteamUser007_RefreshSteam2Login(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_RefreshSteam2Login(_this->u_iface);
}

extern vtable_ptr winISteamUser_SteamUser007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser007,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_LogOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_LogOff)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_SetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_GetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_SetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_GetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_RefreshSteam2Login)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser007_vtable, 13, "SteamUser007");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser008.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_InitiateGameConnection, 48)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_RefreshSteam2Login, 4)

HSteamUser __thiscall winISteamUser_SteamUser008_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser008_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser008_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser008_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser008_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser008_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser008_InitiateGameConnection(struct w_steam_iface *_this, void *pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure, void *pvSteam2GetEncryptionKey, int cbSteam2GetEncryptionKey)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser008_InitiateGameConnection(_this->u_iface, pBlob, cbMaxBlob, steamID, gameID, unIPServer, usPortServer, bSecure, pvSteam2GetEncryptionKey, cbSteam2GetEncryptionKey);
    return _ret;
}

void __thiscall winISteamUser_SteamUser008_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser008_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

void __thiscall winISteamUser_SteamUser008_RefreshSteam2Login(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_RefreshSteam2Login(_this->u_iface);
}

extern vtable_ptr winISteamUser_SteamUser008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser008,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_RefreshSteam2Login)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser008_vtable, 7, "SteamUser008");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser009.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_InitiateGameConnection, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_RefreshSteam2Login, 4)

HSteamUser __thiscall winISteamUser_SteamUser009_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser009_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser009_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser009_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser009_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser009_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser009_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser009_InitiateGameConnection(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, gameID, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser009_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser009_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

void __thiscall winISteamUser_SteamUser009_RefreshSteam2Login(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_RefreshSteam2Login(_this->u_iface);
}

extern vtable_ptr winISteamUser_SteamUser009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser009,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_RefreshSteam2Login)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser009_vtable, 7, "SteamUser009");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser010.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_TrackAppUsageEvent, 20)

HSteamUser __thiscall winISteamUser_SteamUser010_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser010_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser010_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser010_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser010_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser010_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser010_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser010_InitiateGameConnection(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser010_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser010_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser010_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser010_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

extern vtable_ptr winISteamUser_SteamUser010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser010,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_TrackAppUsageEvent)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser010_vtable, 6, "SteamUser010");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser011.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_GetCompressedVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_DecompressVoice, 24)

HSteamUser __thiscall winISteamUser_SteamUser011_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser011_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser011_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser011_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser011_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser011_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser011_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser011_InitiateGameConnection(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser011_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser011_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser011_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser011_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser011_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser011_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser011_GetCompressedVoice(struct w_steam_iface *_this, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser011_GetCompressedVoice(_this->u_iface, pDestBuffer, cbDestBufferSize, nBytesWritten);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser011_DecompressVoice(struct w_steam_iface *_this, void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser011_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser011,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_GetCompressedVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_DecompressVoice)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser011(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser011_vtable, 11, "SteamUser011");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser012.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetCompressedVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_DecompressVoice, 24)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_UserHasLicenseForApp, 16)

HSteamUser __thiscall winISteamUser_SteamUser012_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser012_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser012_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser012_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser012_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser012_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser012_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser012_InitiateGameConnection(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser012_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser012_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser012_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser012_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser012_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser012_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser012_GetCompressedVoice(struct w_steam_iface *_this, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser012_GetCompressedVoice(_this->u_iface, pDestBuffer, cbDestBufferSize, nBytesWritten);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser012_DecompressVoice(struct w_steam_iface *_this, void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser012_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser012_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser012_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser012_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser012_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser012_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser012_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser012_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser012_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser012,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetCompressedVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_UserHasLicenseForApp)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser012_vtable, 16, "SteamUser012");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser013.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetAvailableVoice, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetVoice, 36)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_DecompressVoice, 24)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_UserHasLicenseForApp, 16)

HSteamUser __thiscall winISteamUser_SteamUser013_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser013_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser013_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser013_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser013_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser013_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser013_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser013_InitiateGameConnection(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser013_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser013_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser013_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser013_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser013_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser013_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser013_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser013_GetAvailableVoice(_this->u_iface, pcbCompressed, pcbUncompressed);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser013_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser013_GetVoice(_this->u_iface, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser013_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser013_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser013_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser013_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser013_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser013_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser013_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser013_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser013_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser013_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser013,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_UserHasLicenseForApp)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser013(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser013_vtable, 17, "SteamUser013");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser014.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetAvailableVoice, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetVoice, 36)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_DecompressVoice, 24)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetEncryptedAppTicket, 16)

HSteamUser __thiscall winISteamUser_SteamUser014_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser014_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser014_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser014_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser014_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_InitiateGameConnection(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser014_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser014_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser014_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser014_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser014_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser014_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_GetAvailableVoice(_this->u_iface, pcbCompressed, pcbUncompressed);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser014_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_GetVoice(_this->u_iface, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser014_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser014_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser014_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser014_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser014_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser014_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser014_BIsBehindNAT(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_BIsBehindNAT(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser014_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_AdvertiseGame(_this->u_iface, steamIDGameServer, unIPServer, usPortServer);
}

SteamAPICall_t __thiscall winISteamUser_SteamUser014_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_RequestEncryptedAppTicket(_this->u_iface, pDataToInclude, cbDataToInclude);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser014_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser014_GetEncryptedAppTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser014,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetEncryptedAppTicket)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser014(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser014_vtable, 21, "SteamUser014");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser015.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetAvailableVoice, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetVoice, 36)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetEncryptedAppTicket, 16)

HSteamUser __thiscall winISteamUser_SteamUser015_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser015_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser015_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser015_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser015_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_InitiateGameConnection(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser015_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser015_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser015_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser015_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser015_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser015_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_GetAvailableVoice(_this->u_iface, pcbCompressed, pcbUncompressed);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser015_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_GetVoice(_this->u_iface, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser015_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
    return _ret;
}

uint32 __thiscall winISteamUser_SteamUser015_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_GetVoiceOptimalSampleRate(_this->u_iface);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser015_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser015_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser015_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser015_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser015_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser015_BIsBehindNAT(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_BIsBehindNAT(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser015_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_AdvertiseGame(_this->u_iface, steamIDGameServer, unIPServer, usPortServer);
}

SteamAPICall_t __thiscall winISteamUser_SteamUser015_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_RequestEncryptedAppTicket(_this->u_iface, pDataToInclude, cbDataToInclude);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser015_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser015_GetEncryptedAppTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser015_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser015,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetEncryptedAppTicket)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser015(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser015");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser015_vtable, 22, "SteamUser015");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser016.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetEncryptedAppTicket, 16)

HSteamUser __thiscall winISteamUser_SteamUser016_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser016_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser016_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser016_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser016_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_InitiateGameConnection(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser016_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser016_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser016_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser016_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser016_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser016_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_GetAvailableVoice(_this->u_iface, pcbCompressed, pcbUncompressed, nUncompressedVoiceDesiredSampleRate);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser016_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_GetVoice(_this->u_iface, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten, nUncompressedVoiceDesiredSampleRate);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser016_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
    return _ret;
}

uint32 __thiscall winISteamUser_SteamUser016_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_GetVoiceOptimalSampleRate(_this->u_iface);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser016_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser016_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser016_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser016_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser016_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser016_BIsBehindNAT(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_BIsBehindNAT(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser016_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_AdvertiseGame(_this->u_iface, steamIDGameServer, unIPServer, usPortServer);
}

SteamAPICall_t __thiscall winISteamUser_SteamUser016_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_RequestEncryptedAppTicket(_this->u_iface, pDataToInclude, cbDataToInclude);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser016_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser016_GetEncryptedAppTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser016_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser016,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetEncryptedAppTicket)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser016(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser016");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser016_vtable, 22, "SteamUser016");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser017.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetPlayerSteamLevel, 4)

HSteamUser __thiscall winISteamUser_SteamUser017_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser017_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser017_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser017_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser017_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_InitiateGameConnection(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser017_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser017_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser017_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser017_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser017_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser017_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_GetAvailableVoice(_this->u_iface, pcbCompressed, pcbUncompressed, nUncompressedVoiceDesiredSampleRate);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser017_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_GetVoice(_this->u_iface, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten, nUncompressedVoiceDesiredSampleRate);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser017_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
    return _ret;
}

uint32 __thiscall winISteamUser_SteamUser017_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_GetVoiceOptimalSampleRate(_this->u_iface);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser017_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser017_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser017_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser017_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser017_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser017_BIsBehindNAT(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_BIsBehindNAT(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser017_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_AdvertiseGame(_this->u_iface, steamIDGameServer, unIPServer, usPortServer);
}

SteamAPICall_t __thiscall winISteamUser_SteamUser017_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_RequestEncryptedAppTicket(_this->u_iface, pDataToInclude, cbDataToInclude);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser017_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_GetEncryptedAppTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

int __thiscall winISteamUser_SteamUser017_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_GetGameBadgeLevel(_this->u_iface, nSeries, bFoil);
    return _ret;
}

int __thiscall winISteamUser_SteamUser017_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser017_GetPlayerSteamLevel(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser017_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser017,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetPlayerSteamLevel)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser017(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser017");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser017_vtable, 24, "SteamUser017");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser018.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetPlayerSteamLevel, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_RequestStoreAuthURL, 8)

HSteamUser __thiscall winISteamUser_SteamUser018_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser018_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser018_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser018_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser018_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_InitiateGameConnection(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser018_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser018_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser018_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser018_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser018_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser018_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_GetAvailableVoice(_this->u_iface, pcbCompressed, pcbUncompressed, nUncompressedVoiceDesiredSampleRate);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser018_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_GetVoice(_this->u_iface, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten, nUncompressedVoiceDesiredSampleRate);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser018_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
    return _ret;
}

uint32 __thiscall winISteamUser_SteamUser018_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_GetVoiceOptimalSampleRate(_this->u_iface);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser018_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser018_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser018_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser018_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser018_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser018_BIsBehindNAT(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_BIsBehindNAT(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser018_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_AdvertiseGame(_this->u_iface, steamIDGameServer, unIPServer, usPortServer);
}

SteamAPICall_t __thiscall winISteamUser_SteamUser018_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_RequestEncryptedAppTicket(_this->u_iface, pDataToInclude, cbDataToInclude);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser018_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_GetEncryptedAppTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

int __thiscall winISteamUser_SteamUser018_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_GetGameBadgeLevel(_this->u_iface, nSeries, bFoil);
    return _ret;
}

int __thiscall winISteamUser_SteamUser018_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_GetPlayerSteamLevel(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser018_RequestStoreAuthURL(struct w_steam_iface *_this, const char *pchRedirectURL)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser018_RequestStoreAuthURL(_this->u_iface, pchRedirectURL);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser018_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser018,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_RequestStoreAuthURL)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser018(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser018");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser018_vtable, 25, "SteamUser018");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser019.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetPlayerSteamLevel, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_RequestStoreAuthURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsPhoneVerified, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsTwoFactorEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsPhoneIdentifying, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsPhoneRequiringVerification, 4)

HSteamUser __thiscall winISteamUser_SteamUser019_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser019_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser019_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser019_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser019_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_InitiateGameConnection(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser019_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser019_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser019_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser019_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser019_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser019_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_GetAvailableVoice(_this->u_iface, pcbCompressed, pcbUncompressed_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser019_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed_Deprecated, void *pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 *nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_GetVoice(_this->u_iface, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed_Deprecated, pUncompressedDestBuffer_Deprecated, cbUncompressedDestBufferSize_Deprecated, nUncompressBytesWritten_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser019_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
    return _ret;
}

uint32 __thiscall winISteamUser_SteamUser019_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_GetVoiceOptimalSampleRate(_this->u_iface);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser019_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser019_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser019_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser019_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser019_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser019_BIsBehindNAT(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_BIsBehindNAT(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser019_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_AdvertiseGame(_this->u_iface, steamIDGameServer, unIPServer, usPortServer);
}

SteamAPICall_t __thiscall winISteamUser_SteamUser019_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_RequestEncryptedAppTicket(_this->u_iface, pDataToInclude, cbDataToInclude);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser019_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_GetEncryptedAppTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

int __thiscall winISteamUser_SteamUser019_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_GetGameBadgeLevel(_this->u_iface, nSeries, bFoil);
    return _ret;
}

int __thiscall winISteamUser_SteamUser019_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_GetPlayerSteamLevel(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser019_RequestStoreAuthURL(struct w_steam_iface *_this, const char *pchRedirectURL)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_RequestStoreAuthURL(_this->u_iface, pchRedirectURL);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser019_BIsPhoneVerified(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_BIsPhoneVerified(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser019_BIsTwoFactorEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_BIsTwoFactorEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser019_BIsPhoneIdentifying(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_BIsPhoneIdentifying(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser019_BIsPhoneRequiringVerification(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser019_BIsPhoneRequiringVerification(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser019_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser019,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsPhoneRequiringVerification)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser019(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser019");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser019_vtable, 29, "SteamUser019");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser020.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetPlayerSteamLevel, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_RequestStoreAuthURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsPhoneVerified, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsTwoFactorEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsPhoneIdentifying, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsPhoneRequiringVerification, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetMarketEligibility, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetDurationControl, 4)

HSteamUser __thiscall winISteamUser_SteamUser020_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser020_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser020_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser020_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser020_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_InitiateGameConnection(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser020_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_TerminateGameConnection(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser020_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser020_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser020_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser020_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser020_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_GetAvailableVoice(_this->u_iface, pcbCompressed, pcbUncompressed_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser020_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed_Deprecated, void *pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 *nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_GetVoice(_this->u_iface, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed_Deprecated, pUncompressedDestBuffer_Deprecated, cbUncompressedDestBufferSize_Deprecated, nUncompressBytesWritten_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser020_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
    return _ret;
}

uint32 __thiscall winISteamUser_SteamUser020_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_GetVoiceOptimalSampleRate(_this->u_iface);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser020_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser020_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser020_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser020_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser020_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser020_BIsBehindNAT(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_BIsBehindNAT(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser020_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_AdvertiseGame(_this->u_iface, steamIDGameServer, unIPServer, usPortServer);
}

SteamAPICall_t __thiscall winISteamUser_SteamUser020_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_RequestEncryptedAppTicket(_this->u_iface, pDataToInclude, cbDataToInclude);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser020_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_GetEncryptedAppTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

int __thiscall winISteamUser_SteamUser020_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_GetGameBadgeLevel(_this->u_iface, nSeries, bFoil);
    return _ret;
}

int __thiscall winISteamUser_SteamUser020_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_GetPlayerSteamLevel(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser020_RequestStoreAuthURL(struct w_steam_iface *_this, const char *pchRedirectURL)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_RequestStoreAuthURL(_this->u_iface, pchRedirectURL);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser020_BIsPhoneVerified(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_BIsPhoneVerified(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser020_BIsTwoFactorEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_BIsTwoFactorEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser020_BIsPhoneIdentifying(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_BIsPhoneIdentifying(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser020_BIsPhoneRequiringVerification(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_BIsPhoneRequiringVerification(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser020_GetMarketEligibility(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_GetMarketEligibility(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser020_GetDurationControl(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser020_GetDurationControl(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser020_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser020,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsPhoneRequiringVerification)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetMarketEligibility)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetDurationControl)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser020(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser020");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser020_vtable, 31, "SteamUser020");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser021.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetPlayerSteamLevel, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_RequestStoreAuthURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsPhoneVerified, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsTwoFactorEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsPhoneIdentifying, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsPhoneRequiringVerification, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetMarketEligibility, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetDurationControl, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BSetDurationControlOnlineState, 8)

HSteamUser __thiscall winISteamUser_SteamUser021_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser021_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser021_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser021_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser021_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser021_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser021_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser021_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser021_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_GetAvailableVoice(_this->u_iface, pcbCompressed, pcbUncompressed_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser021_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed_Deprecated, void *pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 *nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_GetVoice(_this->u_iface, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed_Deprecated, pUncompressedDestBuffer_Deprecated, cbUncompressedDestBufferSize_Deprecated, nUncompressBytesWritten_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser021_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
    return _ret;
}

uint32 __thiscall winISteamUser_SteamUser021_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_GetVoiceOptimalSampleRate(_this->u_iface);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser021_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser021_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser021_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser021_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser021_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser021_BIsBehindNAT(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_BIsBehindNAT(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser021_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_AdvertiseGame(_this->u_iface, steamIDGameServer, unIPServer, usPortServer);
}

SteamAPICall_t __thiscall winISteamUser_SteamUser021_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_RequestEncryptedAppTicket(_this->u_iface, pDataToInclude, cbDataToInclude);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser021_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_GetEncryptedAppTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

int __thiscall winISteamUser_SteamUser021_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_GetGameBadgeLevel(_this->u_iface, nSeries, bFoil);
    return _ret;
}

int __thiscall winISteamUser_SteamUser021_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_GetPlayerSteamLevel(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser021_RequestStoreAuthURL(struct w_steam_iface *_this, const char *pchRedirectURL)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_RequestStoreAuthURL(_this->u_iface, pchRedirectURL);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser021_BIsPhoneVerified(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_BIsPhoneVerified(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser021_BIsTwoFactorEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_BIsTwoFactorEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser021_BIsPhoneIdentifying(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_BIsPhoneIdentifying(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser021_BIsPhoneRequiringVerification(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_BIsPhoneRequiringVerification(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser021_GetMarketEligibility(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_GetMarketEligibility(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser021_GetDurationControl(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_GetDurationControl(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser021_BSetDurationControlOnlineState(struct w_steam_iface *_this, EDurationControlOnlineState eNewState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser021_BSetDurationControlOnlineState(_this->u_iface, eNewState);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser021_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser021,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsPhoneRequiringVerification)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetMarketEligibility)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetDurationControl)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BSetDurationControlOnlineState)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser021(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser021");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser021_vtable, 32, "SteamUser021");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser022.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetAuthSessionTicket, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetPlayerSteamLevel, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_RequestStoreAuthURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsPhoneVerified, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsTwoFactorEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsPhoneIdentifying, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsPhoneRequiringVerification, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetMarketEligibility, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetDurationControl, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BSetDurationControlOnlineState, 8)

HSteamUser __thiscall winISteamUser_SteamUser022_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser022_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser022_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser022_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser022_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser022_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser022_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser022_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser022_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_GetAvailableVoice(_this->u_iface, pcbCompressed, pcbUncompressed_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser022_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed_Deprecated, void *pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 *nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_GetVoice(_this->u_iface, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed_Deprecated, pUncompressedDestBuffer_Deprecated, cbUncompressedDestBufferSize_Deprecated, nUncompressBytesWritten_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser022_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
    return _ret;
}

uint32 __thiscall winISteamUser_SteamUser022_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_GetVoiceOptimalSampleRate(_this->u_iface);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser022_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket, const SteamNetworkingIdentity *pSteamNetworkingIdentity)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket, pSteamNetworkingIdentity);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser022_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser022_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser022_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser022_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser022_BIsBehindNAT(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_BIsBehindNAT(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser022_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_AdvertiseGame(_this->u_iface, steamIDGameServer, unIPServer, usPortServer);
}

SteamAPICall_t __thiscall winISteamUser_SteamUser022_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_RequestEncryptedAppTicket(_this->u_iface, pDataToInclude, cbDataToInclude);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser022_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_GetEncryptedAppTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

int __thiscall winISteamUser_SteamUser022_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_GetGameBadgeLevel(_this->u_iface, nSeries, bFoil);
    return _ret;
}

int __thiscall winISteamUser_SteamUser022_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_GetPlayerSteamLevel(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser022_RequestStoreAuthURL(struct w_steam_iface *_this, const char *pchRedirectURL)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_RequestStoreAuthURL(_this->u_iface, pchRedirectURL);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser022_BIsPhoneVerified(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_BIsPhoneVerified(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser022_BIsTwoFactorEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_BIsTwoFactorEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser022_BIsPhoneIdentifying(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_BIsPhoneIdentifying(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser022_BIsPhoneRequiringVerification(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_BIsPhoneRequiringVerification(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser022_GetMarketEligibility(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_GetMarketEligibility(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser022_GetDurationControl(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_GetDurationControl(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser022_BSetDurationControlOnlineState(struct w_steam_iface *_this, EDurationControlOnlineState eNewState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser022_BSetDurationControlOnlineState(_this->u_iface, eNewState);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser022_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser022,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsPhoneRequiringVerification)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetMarketEligibility)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetDurationControl)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BSetDurationControlOnlineState)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser022(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser022");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser022_vtable, 32, "SteamUser022");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser023.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetAuthSessionTicket, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetAuthTicketForWebApi, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetPlayerSteamLevel, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_RequestStoreAuthURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsPhoneVerified, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsTwoFactorEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsPhoneIdentifying, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsPhoneRequiringVerification, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetMarketEligibility, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetDurationControl, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BSetDurationControlOnlineState, 8)

HSteamUser __thiscall winISteamUser_SteamUser023_GetHSteamUser(struct w_steam_iface *_this)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_GetHSteamUser(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser023_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_BLoggedOn(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamUser_SteamUser023_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamUser_SteamUser023_GetSteamID(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED(_this->u_iface, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
    return _ret;
}

void __thiscall winISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED(_this->u_iface, unIPServer, usPortServer);
}

void __thiscall winISteamUser_SteamUser023_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_TrackAppUsageEvent(_this->u_iface, gameID, eAppUsageEvent, pchExtraInfo);
}

bool __thiscall winISteamUser_SteamUser023_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_GetUserDataFolder(_this->u_iface, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(_ret, pchBuffer, pchBuffer, cubBuffer, 0);
    return _ret;
}

void __thiscall winISteamUser_SteamUser023_StartVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_StartVoiceRecording(_this->u_iface);
}

void __thiscall winISteamUser_SteamUser023_StopVoiceRecording(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_StopVoiceRecording(_this->u_iface);
}

EVoiceResult __thiscall winISteamUser_SteamUser023_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_GetAvailableVoice(_this->u_iface, pcbCompressed, pcbUncompressed_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser023_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed_Deprecated, void *pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 *nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_GetVoice(_this->u_iface, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed_Deprecated, pUncompressedDestBuffer_Deprecated, cbUncompressedDestBufferSize_Deprecated, nUncompressBytesWritten_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
    return _ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser023_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    EVoiceResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_DecompressVoice(_this->u_iface, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
    return _ret;
}

uint32 __thiscall winISteamUser_SteamUser023_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_GetVoiceOptimalSampleRate(_this->u_iface);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser023_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket, const SteamNetworkingIdentity *pSteamNetworkingIdentity)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket, pSteamNetworkingIdentity);
    return _ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser023_GetAuthTicketForWebApi(struct w_steam_iface *_this, const char *pchIdentity)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_GetAuthTicketForWebApi(_this->u_iface, pchIdentity);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser023_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamUser_SteamUser023_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamUser_SteamUser023_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser023_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser023_BIsBehindNAT(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_BIsBehindNAT(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUser_SteamUser023_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_AdvertiseGame(_this->u_iface, steamIDGameServer, unIPServer, usPortServer);
}

SteamAPICall_t __thiscall winISteamUser_SteamUser023_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_RequestEncryptedAppTicket(_this->u_iface, pDataToInclude, cbDataToInclude);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser023_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_GetEncryptedAppTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

int __thiscall winISteamUser_SteamUser023_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_GetGameBadgeLevel(_this->u_iface, nSeries, bFoil);
    return _ret;
}

int __thiscall winISteamUser_SteamUser023_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_GetPlayerSteamLevel(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser023_RequestStoreAuthURL(struct w_steam_iface *_this, const char *pchRedirectURL)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_RequestStoreAuthURL(_this->u_iface, pchRedirectURL);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser023_BIsPhoneVerified(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_BIsPhoneVerified(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser023_BIsTwoFactorEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_BIsTwoFactorEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser023_BIsPhoneIdentifying(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_BIsPhoneIdentifying(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser023_BIsPhoneRequiringVerification(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_BIsPhoneRequiringVerification(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser023_GetMarketEligibility(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_GetMarketEligibility(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser023_GetDurationControl(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_GetDurationControl(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUser_SteamUser023_BSetDurationControlOnlineState(struct w_steam_iface *_this, EDurationControlOnlineState eNewState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUser_SteamUser023_BSetDurationControlOnlineState(_this->u_iface, eNewState);
    return _ret;
}

extern vtable_ptr winISteamUser_SteamUser023_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser023,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetAuthTicketForWebApi)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsPhoneRequiringVerification)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetMarketEligibility)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetDurationControl)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BSetDurationControlOnlineState)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser023(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser023");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser023_vtable, 33, "SteamUser023");
    r->u_iface = u_iface;
    return r;
}

