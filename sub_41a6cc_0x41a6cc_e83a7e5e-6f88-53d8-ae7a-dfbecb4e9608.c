// ============================================================
// 函数名称: sub_41a6cc
// 虚拟地址: 0x41a6cc
// WARP GUID: e83a7e5e-6f88-53d8-ae7a-dfbecb4e9608
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetPaletteEntries, GetObjectA
// [内部子函数调用]: sub_41a420
// [被调用的父级函数]: sub_41d10c, sub_41d214, sub_41f1b0
// ============================================================

uint32_t __convention("regparm")sub_41a6cc(HGDIOBJ arg1, PALETTEENTRY* arg2, uint32_t arg3)
{
    // 第一条实际指令: uint32_t result = arg3
    uint32_t result = arg3
    result = 0
    
    if (arg1 != 0 && GetObjectA(arg1, 4, &result) != 0 && result != 0)
        if (arg3 + 1 s< result)
            result = arg3 + 1
        
        GetPaletteEntries(arg1, 0, result, arg2)
        sub_41a420(arg2, result)
    
    return result
}
