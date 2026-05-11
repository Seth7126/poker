// ============================================================
// 函数名称: sub_491a24
// 虚拟地址: 0x491a24
// WARP GUID: c063a8bf-674b-599b-a81e-8bd656578ffc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49292c, sub_42d480
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_491a24(uint32_t arg1)
{
    // 第一条实际指令: char** result = sub_42d480(arg1)
    char** result = sub_42d480(arg1)
    
    if ((*(arg1 + 0x20) & 0x10) == 0 && *(arg1 + 0x305) != 0)
        return sub_49292c(arg1)
    
    return result
}
