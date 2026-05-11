// ============================================================
// 函数名称: sub_446738
// 虚拟地址: 0x446738
// WARP GUID: c183550e-c60b-54ae-bee9-19e5f693714c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42fac0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_446738(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t result = sub_42fac0(ecx, arg2)
    
    if (*(arg2 + 4) != 0x2f)
        return result
    
    int32_t* ebx
    ebx.w = 0xffd5
    return sub_4032ac(arg1)
}
