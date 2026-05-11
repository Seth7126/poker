// ============================================================
// 函数名称: sub_4b69e4
// 虚拟地址: 0x4b69e4
// WARP GUID: d94a059a-e373-5bba-8763-7210d5305fa3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b6830, sub_4b69b4
// ============================================================

int32_t __convention("regparm")sub_4b69e4(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = arg3
    int32_t result = arg3
    result = 0
    
    if (*(arg1 + 0x20) != 0)
        int32_t* eax = *(arg1 + 0x20)
        (*(*eax + 0x1c))(eax, &result)
    
    return result
}
