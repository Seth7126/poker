// ============================================================
// 函数名称: sub_4af6d4
// 虚拟地址: 0x4af6d4
// WARP GUID: 2cf2e8b6-2989-50e3-8a25-acca4f531908
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4af6d4(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t ebx
    ebx.b = *(arg1 + 0x100)
    var_8:3.b = ebx.b
    
    if (*(arg1 + 0x11a) != 0)
        *(arg1 + 0x11c)
        void arg_4
        (*(arg1 + 0x118))(arg3, &var_8:3, &arg_4)
    
    arg1.b = var_8:3.b
    return arg1
}
