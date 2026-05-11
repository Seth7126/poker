// ============================================================
// 函数名称: sub_466528
// 虚拟地址: 0x466528
// WARP GUID: 885d555b-ff3d-5872-8b0a-9177ec7b0a54
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_466208
// [被调用的父级函数]: sub_465e68
// ============================================================

int32_t* __convention("regparm")sub_466528(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1[5]
    int32_t* eax = arg1[5]
    int32_t esi = *(arg1 + 0x161)
    int32_t var_30 = *eax
    int32_t ecx = eax[1]
    void var_28
    __builtin_memcpy(&var_28, esi + 0xc, 0x18)
    int32_t* var_10 = arg1
    
    if (sub_466208(&var_30) == 0)
        *(*arg1 + 0x14) = 0x16
        (**arg1)()
    
    int32_t* result = arg1[5]
    *result = var_30
    result[1] = ecx
    int32_t var_34_1 = esi
    __builtin_memcpy(esi + 0xc, &var_28, 0x18)
    return result
}
