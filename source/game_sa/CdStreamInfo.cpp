#include "StdInc.h"

int __cdecl CdStreamSync(DWORD streamNum)
{
    typedef int (__cdecl* hCdStreamSync)( DWORD streamNum );
    hCdStreamSync _CdStreamSync = (hCdStreamSync)0x406460;
    return _CdStreamSync(streamNum);
}

int __cdecl CdStreamGetStatus(int streamNum)
{
    typedef int(__cdecl* hCdStreamGetStatus)(DWORD streamNum);
    hCdStreamGetStatus _CdStreamGetStatus = (hCdStreamGetStatus)0x1563850;
    return _CdStreamGetStatus(streamNum);
}

bool __cdecl CdStreamRead(DWORD streamNum, int lpBuffer, int streamIndex, int sectorCount)
{
    typedef int(__cdecl* hCdStreamRead)(DWORD streamNum, int lpBuffer, int streamIndex, int sectorCount);
    hCdStreamRead _CdStreamRead = (hCdStreamRead)0x406A20;
    return _CdStreamRead( streamNum,  lpBuffer,  streamIndex, sectorCount);
}

int __cdecl CdStreamGetLastPosn()
{
    typedef int(__cdecl* hCdStreamGetLastPosn)();
    hCdStreamGetLastPosn _CdStreamGetLastPosn = (hCdStreamGetLastPosn)0x406450;
    return _CdStreamGetLastPosn();
}