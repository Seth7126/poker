// ============================================================
// 函数名称: sub_454d08
// 虚拟地址: 0x454d08
// WARP GUID: 96537ee8-c31e-5ae6-837d-765e27848e91
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_453830, sub_453a38, sub_4545b0
// ============================================================

int32_t __convention("regparm")sub_454d08(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    
    if (eax s< 0xca || eax s> 0xd2)
        void* eax_1 = *arg1
        *(eax_1 + 0x14) = 0x12
        *(eax_1 + 0x18) = arg1[4]
        (**arg1)()
    
    return *(*(arg1 + 0x1a6) + 0x10)
}
