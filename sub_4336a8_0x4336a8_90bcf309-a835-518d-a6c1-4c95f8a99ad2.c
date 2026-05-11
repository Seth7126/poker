// ============================================================
// 函数名称: sub_4336a8
// 虚拟地址: 0x4336a8
// WARP GUID: 90bcf309-a835-518d-a6c1-4c95f8a99ad2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40fac8, sub_433414, sub_42b1a0, sub_433680, sub_433480
// [被调用的父级函数]: sub_434a1c, sub_4351cc, sub_433b34, sub_433528
// ============================================================

void* __convention("regparm")sub_4336a8(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 4)
    void* result = *(arg1 + 4)
    
    if (result == 0 || *(*(arg1 + 0x1c) + 0x6c) != 0)
        return result
    
    void* edx_4
    edx_4.b = *(*(arg1 + 0x14) + 0x10)
    *(result + 0x8c) = edx_4.b
    int32_t ebx_1 = sub_433480(arg1, 2)
    int32_t esi_1 = sub_433480(arg1, 1)
    int32_t __saved_ebp
    
    if (sub_433680(&__saved_ebp) != 0)
        if (*(*(arg1 + 0x14) + 0x10) != 1)
            esi_1 -= *(*(arg1 + 0x1c) + 0xc)
        else
            ebx_1 -= *(*(arg1 + 0x1c) + 0xc)
    
    if (*(arg1 + 0xc) != 0)
    label_43378e:
        
        if (*(*(arg1 + 0x14) + 0x10) != 1)
            ebx_1 -= *(*(arg1 + 0x1c) + 0xc)
        else
            esi_1 -= *(*(arg1 + 0x1c) + 0xc)
    else
        void* eax_13
        void* ecx_6
        
        if (*(arg1 + 0x14) != *(*(arg1 + 0x1c) + 0x64))
            ecx_6.b = *(*(arg1 + 0x14) + 0x10)
            eax_13 = *(arg1 + 0x1c)
        
        if (*(arg1 + 0x14) != *(*(arg1 + 0x1c) + 0x64) && ecx_6.b == *(*(eax_13 + 0x64) + 0x10)
                && *(arg1 + 0x20) s< *(eax_13 + 0x68))
            goto label_43378e
        
        void* eax_15
        eax_15.b = *(*(arg1 + 0x14) + 0x10)
        void* edx_7 = *(*(arg1 + 0x1c) + 0x64)
        
        if (eax_15.b != *(edx_7 + 0x10) && *(arg1 + 0x20) s< *(edx_7 + 0x20))
            goto label_43378e
    
    void var_18
    sub_40fac8(ebx_1, sub_433414(arg1, 1), sub_433414(arg1, 2), &var_18, esi_1)
    *(arg1 + 4)
    (***(arg1 + 0x1c))()
    return sub_42b1a0(*(arg1 + 4), &var_18)
}
