// ============================================================
// 函数名称: sub_517fc8
// 虚拟地址: 0x517fc8
// WARP GUID: e39219ac-59d2-5d70-909a-62e20c8837a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517950, sub_517a38
// [被调用的父级函数]: sub_52c66c
// ============================================================

int32_t __convention("regparm")sub_517fc8(void* arg1)
{
    // 第一条实际指令: int32_t result = sx.d(*(arg1 + 0x298))
    int32_t result = sx.d(*(arg1 + 0x298))
    void var_31e
    int16_t* esi_1
    int16_t* edi
    edi, esi_1 = __builtin_memcpy(&var_31e, arg1, 0x318)
    *edi = *esi_1
    *(arg1 + 0x298) = 0
    int32_t ebx = result
    
    if (ebx s> 0)
        int32_t i
        
        do
            result = sub_517a38(arg1, sub_517950(&var_31e))
            i = ebx
            ebx -= 1
        while (i != 1)
    
    return result
}
