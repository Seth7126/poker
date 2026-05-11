// ============================================================
// 函数名称: sub_409050
// 虚拟地址: 0x409050
// WARP GUID: 3dc28dbf-aa34-5df8-b024-0e377407b1bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FindNextFileA, GetLastError, FileTimeToLocalFileTime, FileTimeToDosDateTime
// [内部子函数调用]: sub_404028
// [被调用的父级函数]: sub_409104, sub_4090b4
// ============================================================

enum WIN32_ERROR __convention("regparm")sub_409050(uint16_t* arg1)
{
    // 第一条实际指令: BOOL i
    BOOL i
    
    do
        if ((*(arg1 + 0x18) & *(arg1 + 0x10)) == 0)
            FILETIME var_c
            FileTimeToLocalFileTime(&arg1[0x16], &var_c)
            FileTimeToDosDateTime(&var_c, &arg1[1], arg1)
            *(arg1 + 4) = *(arg1 + 0x38)
            *(arg1 + 8) = *(arg1 + 0x18)
            sub_404028(&arg1[6], &arg1[0x22], 0x104)
            return NO_ERROR
        
        i = FindNextFileA(*(arg1 + 0x14), &arg1[0xc])
    while (i != 0)
    return GetLastError()
}
