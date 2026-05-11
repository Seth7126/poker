// ============================================================
// 函数名称: sub_462608
// 虚拟地址: 0x462608
// WARP GUID: 0a4738a3-18e1-5b5e-9fa1-0d72c6d3e32c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4626e0
// ============================================================

void __convention("regparm")sub_462608(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = *(arg1 + 0x145)
    void* ecx = *(arg1 + 0x145)
    
    if (arg1[0x2a] != 0)
        return 
    
    *(ecx + 8) = 0
    *(ecx + 0xc) = 0
    *(ecx + 0x10) = 0
    *(ecx + 0x14) = arg2
    
    if (arg2 u< 1)
        *(ecx + 4) = sub_462648
        return 
    
    *(*arg1 + 0x14) = 4
    (**arg1)()
}
