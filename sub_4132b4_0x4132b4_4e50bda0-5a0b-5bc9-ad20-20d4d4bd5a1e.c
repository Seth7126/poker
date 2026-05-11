// ============================================================
// 函数名称: sub_4132b4
// 虚拟地址: 0x4132b4
// WARP GUID: 4e50bda0-5a0b-5bc9-ad20-20d4d4bd5a1e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_410580, sub_410414
// [被调用的父级函数]: sub_4132fc
// ============================================================

int32_t __convention("regparm")sub_4132b4(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax_2 = sub_410580(*(arg2 - 4), arg1)
    int32_t eax_2 = sub_410580(*(arg2 - 4), arg1)
    
    if (eax_2 != 0xffffffff)
        sub_410414(*(arg2 - 4), eax_2)
    
    int32_t result = sub_410580(*(arg2 - 8), arg1)
    
    if (result s>= 0)
        return result
    
    return sub_4103c8(*(arg2 - 8), arg1)
}
