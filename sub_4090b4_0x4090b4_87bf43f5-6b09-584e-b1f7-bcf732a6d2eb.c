// ============================================================
// 函数名称: sub_4090b4
// 虚拟地址: 0x4090b4
// WARP GUID: 87bf43f5-6b09-584e-b1f7-bcf732a6d2eb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLastError, FindFirstFileA
// [内部子函数调用]: sub_40423c, sub_409050, sub_409128
// [被调用的父级函数]: sub_4b498a
// ============================================================

enum WIN32_ERROR __convention("regparm")sub_4090b4(int32_t arg1, int32_t arg2, uint16_t* arg3)
{
    // 第一条实际指令: *(arg3 + 0x10) = not.d(arg2) & 0x1e
    *(arg3 + 0x10) = not.d(arg2) & 0x1e
    HANDLE eax_3 = FindFirstFileA(sub_40423c(arg1), &arg3[0xc])
    *(arg3 + 0x14) = eax_3
    
    if (eax_3 == 0xffffffff)
        return GetLastError()
    
    enum WIN32_ERROR result = sub_409050(arg3)
    
    if (result != NO_ERROR)
        sub_409128(arg3)
    
    return result
}
