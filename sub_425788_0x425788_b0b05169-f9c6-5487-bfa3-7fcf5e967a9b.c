// ============================================================
// 函数名称: sub_425788
// 虚拟地址: 0x425788
// WARP GUID: b0b05169-f9c6-5487-bfa3-7fcf5e967a9b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_42bc8c, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_425788(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    eax.b = arg2.b ^ 1
    LRESULT result = SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xb, eax & 0x7f, 0)
    int32_t ebx
    ebx.b = arg2.b ^ 1
    
    if (ebx.b == 0)
        return result
    
    return sub_42bc8c(*(arg1 + 0xc))
}
