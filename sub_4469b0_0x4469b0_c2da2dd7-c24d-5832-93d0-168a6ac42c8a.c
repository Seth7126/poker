// ============================================================
// 函数名称: sub_4469b0
// 虚拟地址: 0x4469b0
// WARP GUID: c2da2dd7-c24d-5832-93d0-168a6ac42c8a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_44695c
// [被调用的父级函数]: 无
// ============================================================

void* const __convention("regparm")sub_4469b0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx
    void* ebx
    void* var_14 = ebx
    char var_d = 0
    
    if (*(arg1 + 0x2aa) != 0)
        *(arg1 + 0x2ac)
        (*(arg1 + 0x2a8))()
    
    int32_t* esi_1 = *(arg1 + 0x230)
    void* const result
    
    if (esi_1 != 0 && esi_1[0xb] != 0)
        ebx.w = 0xfff0
        result = sub_4032ac(esi_1, arg2)
    
    int32_t __saved_ebp
    
    if (esi_1 != 0 && esi_1[0xb] != 0 && result.b != 0)
        result.b = 1
    else if (sub_44695c(&__saved_ebp).b != 0)
        result.b = 1
    else
        result = nullptr
    result.b = result.b
    return result
}
