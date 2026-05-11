// ============================================================
// 函数名称: sub_428b90
// 虚拟地址: 0x428b90
// WARP GUID: 6274ce3e-a962-53c0-8040-51bfe15c1a99
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c024, sub_403e4c, sub_404280
// [被调用的父级函数]: sub_44a0a0
// ============================================================

char** __convention("regparm")sub_428b90(char* arg1, char** arg2)
{
    // 第一条实际指令: void* eax = sub_40c024(0x428bd0, arg1)
    void* eax = sub_40c024(0x428bd0, arg1)
    
    if (eax != 0)
        return sub_404280(eax - 1, 1, arg1, arg2)
    
    return sub_403e4c(arg2, arg1)
}
