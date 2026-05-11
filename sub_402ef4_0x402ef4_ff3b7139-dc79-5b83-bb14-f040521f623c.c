// ============================================================
// 函数名称: sub_402ef4
// 虚拟地址: 0x402ef4
// WARP GUID: ff3b7139-dc79-5b83-bb14-f040521f623c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_402ef4, sub_49ee10, sub_50b624
// ============================================================

char* __convention("regparm")sub_402ef4(char* arg1, char* arg2)
{
    // 第一条实际指令: char i
    char i
    
    do
        int16_t ecx
        ecx:1.b = *arg2
        arg2 = &arg2[1]
        *arg1 |= ecx:1.b
        arg1 = &arg1[1]
        i = ecx.b
        ecx.b -= 1
    while (i != 1)
    return arg1
}
