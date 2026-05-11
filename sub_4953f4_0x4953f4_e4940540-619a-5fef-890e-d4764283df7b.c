// ============================================================
// 函数名称: sub_4953f4
// 虚拟地址: 0x4953f4
// WARP GUID: e4940540-619a-5fef-890e-d4764283df7b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_403828, sub_40b5a8
// [被调用的父级函数]: sub_4954b0
// ============================================================

void*sub_4953f4(void* arg1)
{
    // 第一条实际指令: void* result
    void* result
    result.w = *(*(arg1 - 4) + 0xa)
    char var_5
    
    if (result.w == 0)
        var_5 = 1
    else
        var_5 = 0
        *(arg1 - 4)
        uint32_t var_c = zx.d(result.w)
        uint32_t eax_4 = zx.d(*(*(arg1 - 4) + 8))
        
        if (eax_4 s> 8)
            if (eax_4 == 0x10)
                eax_4.b = 3
            else if (eax_4 == 0x20)
                eax_4.b = 4
            else
                eax_4 = 0
        else if (eax_4 == 8)
            eax_4.b = 5
        else if (eax_4 == 1)
            eax_4.b = 2
        else if (eax_4 == 2)
            eax_4.b = 1
        else
            eax_4 = 0
        
        int32_t ebx
        ebx.w = 0xfffe
        int32_t edx_5
        result, edx_5 = sub_4032ac(*(arg1 - 8), *(arg1 - 8), eax_4, &var_c)
        
        if (var_c != 0)
            uint32_t var_14 = var_c
            char var_10 = 0
            edx_5.b = 1
            sub_40b5a8(0x4940dc, edx_5, data_5300a8, 0, &var_14)
            sub_403828()
            noreturn
    
    result.b = var_5
    return result
}
