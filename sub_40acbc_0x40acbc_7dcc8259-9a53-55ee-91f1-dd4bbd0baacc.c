// ============================================================
// 函数名称: sub_40acbc
// 虚拟地址: 0x40acbc
// WARP GUID: 7dcc8259-9a53-55ee-91f1-dd4bbd0baacc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLocaleInfoA
// [内部子函数调用]: sub_403ee0, sub_403e4c
// [被调用的父级函数]: sub_40ad30, sub_40c310, sub_40af44, sub_40aff4
// ============================================================

char** __fastcallsub_40acbc(char* arg1, uint32_t arg2, uint32_t arg3 @ eax, char** arg4)
{
    // 第一条实际指令: uint8_t lCData[0x100]
    uint8_t lCData[0x100]
    int32_t eax = GetLocaleInfoA(arg3, arg2, &lCData, 0x100)
    
    if (eax s<= 0)
        return sub_403e4c(arg4, arg1)
    
    sub_403ee0(arg4, &lCData, eax - 1)
    return arg4
}
