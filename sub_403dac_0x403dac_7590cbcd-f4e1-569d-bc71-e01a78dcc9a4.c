// ============================================================
// 函数名称: sub_403dac
// 虚拟地址: 0x403dac
// WARP GUID: 7590cbcd-f4e1-569d-bc71-e01a78dcc9a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateThread
// [内部子函数调用]: sub_402754
// [被调用的父级函数]: sub_415b58
// ============================================================

HANDLE __fastcallsub_403dac(int32_t arg1, uint32_t arg2, SECURITY_ATTRIBUTES* arg3 @ eax, uint32_t* arg4, enum THREAD_CREATION_FLAGS arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t* lpParameter = sub_402754(8)
    int32_t* lpParameter = sub_402754(8)
    *lpParameter = arg1
    lpParameter[1] = arg6
    data_531049 = 1
    return CreateThread(arg3, arg2, sub_403d74, lpParameter, arg5, arg4)
}
