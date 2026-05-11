// ============================================================
// 函数名称: sub_409104
// 虚拟地址: 0x409104
// WARP GUID: a1a36fd7-5759-5658-a445-46fb576388e4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FindNextFileA, GetLastError
// [内部子函数调用]: sub_409050
// [被调用的父级函数]: sub_4b498a
// ============================================================

enum WIN32_ERROR __convention("regparm")sub_409104(uint16_t* arg1)
{
    // 第一条实际指令: if (FindNextFileA(*(arg1 + 0x14), &arg1[0xc]) == 0)
    if (FindNextFileA(*(arg1 + 0x14), &arg1[0xc]) == 0)
        return GetLastError()
    
    return sub_409050(arg1)
}
