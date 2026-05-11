// ============================================================
// 函数名称: sub_41a0a8
// 虚拟地址: 0x41a0a8
// WARP GUID: d7dab631-e54f-5c31-b21f-21221926ca6d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41a720, sub_41e6c8
// ============================================================

int32_t __convention("regparm")sub_41a0a8(int16_t arg1) __pure
{
    // 第一条实际指令: if (arg1 != 1 && arg1 != 4 && arg1 != 8)
    if (arg1 != 1 && arg1 != 4 && arg1 != 8)
        return 0
    
    return 1 << arg1.b
}
