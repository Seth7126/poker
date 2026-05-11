// ============================================================
// 函数名称: sub_462ae0
// 虚拟地址: 0x462ae0
// WARP GUID: e35b7220-abd1-5e15-bd5a-b9902c4bfad4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45340c
// [被调用的父级函数]: sub_462bf8
// ============================================================

void* __convention("regparm")sub_462ae0(void* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x149)
    void* esi = *(arg1 + 0x149)
    int32_t ebx = *(arg1 + 0xe1)
    int32_t* var_18 = (**(arg1 + 4))(arg1)
    int32_t i = 0
    void* var_1c = *(arg1 + 0x3c)
    void** var_14 = esi + 8
    
    while (*(arg1 + 0x34) s> i)
        (*(var_1c + 0x1c) << 3) * *(arg1 + 0xdd)
        *(var_1c + 8)
        int32_t* eax_12 = (*(*(arg1 + 4) + 8))(ebx * 3)
        sub_45340c(&var_18[ebx], eax_12, ebx * 0xc)
        int32_t eax_15 = 0
        int32_t* ecx_6 = eax_12
        int32_t* edx_11 = var_18
        
        if (ebx s> 0)
            do
                *edx_11 = eax_12[eax_15 + (ebx << 1)]
                int32_t edi_3 = eax_15 + (ebx << 2)
                eax_15 += 1
                edx_11 = &edx_11[1]
                int32_t edi_5 = *ecx_6
                ecx_6 = &ecx_6[1]
                var_18[edi_3] = edi_5
            while (ebx s> eax_15)
        
        *var_14 = &var_18[ebx]
        var_18 = &var_18[ebx * 5]
        var_14 = &var_14[1]
        i += 1
        var_1c += 0x54
    
    return arg1
}
