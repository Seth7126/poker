// ============================================================
// 函数名称: sub_448eec
// 虚拟地址: 0x448eec
// WARP GUID: 449c1b61-4a88-5eac-aea9-53045e927a40
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowTextA
// [内部子函数调用]: sub_403ee0, sub_403e4c
// [被调用的父级函数]: sub_44c778, sub_448f34, sub_449678
// ============================================================

char** __convention("regparm")sub_448eec(void* arg1, char** arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x94) == 0)
    if (*(arg1 + 0x94) == 0)
        return sub_403e4c(arg2, *(arg1 + 0x7c))
    
    uint8_t string[0x100]
    sub_403ee0(arg2, &string, GetWindowTextA(*(arg1 + 0x24), &string, 0x100))
    return arg2
}
