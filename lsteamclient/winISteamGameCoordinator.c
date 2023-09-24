/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamGameCoordinator_SteamGameCoordinator001.h"

DEFINE_THISCALL_WRAPPER(winISteamGameCoordinator_SteamGameCoordinator001_SendMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage, 20)

EGCResults __thiscall winISteamGameCoordinator_SteamGameCoordinator001_SendMessage(struct w_steam_iface *_this, uint32 unMsgType, const void *pubData, uint32 cubData)
{
    EGCResults _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage(_this->u_iface, unMsgType, pubData, cubData);
    return _ret;
}

bool __thiscall winISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable(struct w_steam_iface *_this, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable(_this->u_iface, pcubMsgSize);
    return _ret;
}

EGCResults __thiscall winISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage(struct w_steam_iface *_this, uint32 *punMsgType, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
    EGCResults _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage(_this->u_iface, punMsgType, pubDest, cubDest, pcubMsgSize);
    return _ret;
}

extern vtable_ptr winISteamGameCoordinator_SteamGameCoordinator001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameCoordinator_SteamGameCoordinator001,
        VTABLE_ADD_FUNC(winISteamGameCoordinator_SteamGameCoordinator001_SendMessage)
        VTABLE_ADD_FUNC(winISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable)
        VTABLE_ADD_FUNC(winISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamGameCoordinator_SteamGameCoordinator001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameCoordinator001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameCoordinator_SteamGameCoordinator001_vtable, 3, "SteamGameCoordinator001");
    r->u_iface = u_iface;
    return r;
}

