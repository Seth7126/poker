// ============================================================
// 函数名称: sub_4113dc
// 虚拟地址: 0x4113dc
// WARP GUID: fc20af75-50e1-55a4-a444-2acaaff6d591
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41131c, sub_410fd0, sub_4106bc
// [被调用的父级函数]: sub_410e44
// ============================================================

int32_t __convention("regparm")sub_4113dc(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    ecx.b = 1
    void* __saved_edx = sub_41131c(arg1)
    sub_4106bc(arg1[2])
    *(__saved_edx + 4) = 0
    return sub_410fd0(arg1)
}
