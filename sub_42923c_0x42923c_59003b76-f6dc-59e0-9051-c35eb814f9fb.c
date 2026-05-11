// ============================================================
// 函数名称: sub_42923c
// 虚拟地址: 0x42923c
// WARP GUID: 59003b76-f6dc-59e0-9051-c35eb814f9fb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: OffsetRect
// [内部子函数调用]: sub_429218
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_42923c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_1c
    int32_t var_1c
    __builtin_memcpy(&var_1c, arg2, 0x10)
    int32_t eax = *(arg1 + 0xc)
    int32_t edx = var_1c
    int32_t var_14
    int32_t esi_1
    
    if (eax s< edx || eax s> var_14)
        esi_1 = sub_429218(edx - eax, var_14 - eax)
    else
        esi_1 = 0
    
    int32_t eax_4 = *(arg1 + 0x10)
    int32_t var_18
    int32_t var_10
    BOOL result
    
    if (eax_4 s< var_18 || eax_4 s> var_10)
        result = sub_429218(var_18 - eax_4, var_10 - eax_4)
    else
        result = 0
    
    if (esi_1 == 0 && result == 0)
        return result
    
    return OffsetRect(arg1 + 0x44, neg.d(esi_1), neg.d(result))
}
