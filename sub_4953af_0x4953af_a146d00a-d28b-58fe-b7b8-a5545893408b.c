// ============================================================
// 函数名称: sub_4953af
// 虚拟地址: 0x4953af
// WARP GUID: a146d00a-d28b-58fe-b7b8-a5545893408b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_403828, sub_40b5a8
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_4953af(int32_t* arg1 @ ebp, void* arg2 @ edi, void* arg3, uint16_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: uint32_t eax_3
    uint32_t eax_3
    void* ecx_8
    int32_t edx_7
    eax_3, edx_7, ecx_8 = (*0x57000000)()
    void* entry_ebx
    void* var_4 = entry_ebx
    void* var_8 = entry_ebx
    int32_t* esp_1 = &var_8
    bool cond:2_1
    
    if (ecx_8 + 2 s>= 0)
        char temp2_1 = *(arg2 + 0xa) | entry_ebx:1.b
        *(arg2 + 0xa) = temp2_1
        cond:2_1 = temp2_1 == 0
    label_49542d:
        
        if (cond:2_1)
            eax_3.b = 5
        else if (eax_3 == 1)
            eax_3.b = 2
        else if (eax_3 == 2)
            eax_3.b = 1
    else
        int32_t eflags_1
        int16_t temp0_1
        temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg2 + 0x65), eax_3.w)
        *(arg2 + 0x65) = temp0_1
        
        if (ecx_8 == 0xfffffffe)
            int32_t* var_c = arg1
            esp_1 = &var_c
        label_495414:
            *(entry_ebx - 0x48f003ae) |= (ecx_8 + 2).b
            *(ecx_8 + 0x458bf847) = ror.b(*(ecx_8 + 0x458bf847), 8)
            eax_3 = zx.d(*(*(eax_3 - 4) + 8))
            cond:2_1 = eax_3 == 8
            
            if (eax_3 s<= 8)
                goto label_49542d
            
            if (eax_3 == 0x10)
                eax_3.b = 3
            else if (eax_3 == 0x20)
                eax_3.b = 4
        else
            bool c
            
            if (not(c))
                if (edx_7 + 1 s>= 0)
                    goto label_495414
                
                int16_t* edi_1
                int16_t temp0_2
                temp0_2, edi_1 = __insd(var_8, arg4, eflags_1)
                *edi_1 = temp0_2
                char* gsbase
                gsbase[arg6] += arg6.b
                *(arg3 + 0x88b0450) += arg5.b
                return (*(arg5 + 8))()
            
            char temp4_1 = *(arg2 + eax_3 - 0x7d)
            *(arg2 + eax_3 - 0x7d) = adc.b(temp4_1, edx_7:1.b, c)
            void* eax_4
            int16_t ecx_3
            int16_t edx_2
            eax_4, edx_2, ecx_3 = 0xeb4fc852()
            eax_4.b = adc.b(eax_4.b, 0xb0, 
                adc.b(temp4_1, edx_7:1.b, c) u< temp4_1
                    || (c && adc.b(temp4_1, edx_7:1.b, c) == temp4_1))
            int32_t* temp5_1 = arg1
            arg1 += entry_ebx
            edx_2:1.b = adc.b(edx_2:1.b, *(eax_4 - 0x4ff114fc), temp5_1 + entry_ebx u< temp5_1)
            ecx_3:1.b += entry_ebx.b
            edx_2:1.b |= *(eax_4 - 0x4ff914ff)
    *(esp_1 - 4) = &arg1[-2]
    *(arg1[2] - 8)
    entry_ebx.w = 0xfffe
    int32_t result
    int32_t edx_6
    result, edx_6 = sub_4032ac(*(arg1[2] - 8), nop)
    
    if (arg1[-2] == 0)
        result.b = *(arg1 - 1)
        *esp_1
        *arg1
        return result
    
    arg1[-4] = arg1[-2]
    arg1[-3].b = 0
    *(esp_1 - 4) = &arg1[-4]
    *(esp_1 - 8) = 0
    edx_6.b = 1
    sub_40b5a8(0x4940dc, edx_6, data_5300a8)
    sub_403828()
    noreturn
}
