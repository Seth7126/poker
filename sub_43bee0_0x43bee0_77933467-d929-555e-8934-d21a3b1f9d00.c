// ============================================================
// 函数名称: sub_43bee0
// 虚拟地址: 0x43bee0
// WARP GUID: 77933467-d929-555e-8934-d21a3b1f9d00
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b7f4
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_43bee0(uint32_t arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x31))
    if (arg2 == *(arg1 + 0x31))
        return 
    
    *(arg1 + 0x31) = arg2
    
    if (*(arg1 + 0x2c) != 0 && *(arg1 + 0x31) != 0)
        sub_43b7f4(arg1)
    
    (*(*arg1 + 0x38))()
}
