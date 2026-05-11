// ============================================================
// 函数名称: sub_49b86e
// 虚拟地址: 0x49b86e
// WARP GUID: 76d2ebc6-99f7-520a-97c5-70bde78c2885
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_49b86e(char* arg1, int16_t arg2, int32_t arg3, uint16_t arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi, long double arg7 @ st0)
{
    // 第一条实际指令: arg1[0x140049c7] += arg2.b
    arg1[0x140049c7] += arg2.b
    int32_t ecx = arg3 - 2
    bool z = arg3 == 2
    char* entry_ebx
    int32_t* var_8 = entry_ebx
    int32_t* esp = &var_8
    int32_t eflags
    int32_t esi = __outsd(arg2, *arg5, arg5, eflags)
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x65), arg4)
    *(entry_ebx + 0x65) = temp0
    
    if (z)
        arg1[esi + 0x40] += arg1:1.b
        arg1[0x30] += entry_ebx:1.b
    label_49b8d3:
        arg1[1] += arg2:1.b
        esp[&arg1[1] * 2].b += (&arg1[1]):1.b
        arg1:1.b = (&arg1[1]):1.b + 0x49
        *(ecx - 2) = ror.b(*(ecx - 2), 0x6c)
        entry_ebx[(arg6 << 2) - 0x43fbffb7] += entry_ebx.b
        esp[arg6].b += 0x49
        arg1[0xffffffbc] += arg1:1.b
        ecx = 0xbb0c0045
        *((arg6 << 2) + 0xbcc00049) += 0x49
        *(ecx - 1 + (arg1 << 3) + 0x49) += arg1.b
    else
        *(entry_ebx + 0x74)
        uint16_t* esi_1 = *(entry_ebx + 0x74) * 0x646e6957
        bool c_1 = unimplemented  {imul esi, dword [ebx+0x74], 0x646e6957}
        int32_t esi_2 = __outsd(arg2, *esi_1, esi_1, eflags_1)
        
        if (not(z) && not(c_1))
            arg1.b = adc.b(arg1.b, 0xbd, c_1)
            arg1.b *= 2
        else
            *(arg1 + 0x49)
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            esp = var_8
            *arg1 += arg1.b
            char* eax
            eax.b = arg1.b + 0x55
            ecx = 0x100048
            eax:1.b += arg2:1.b
            eax.b ^= *eax
            *entry_ebx += arg2:1.b
            entry_ebx[esi_2] += (&eax[1]).b
            eax[2] += 0x48
            arg1 = &eax[2] ^ *(eax + 2)
            arg1.b ^= *arg1
            TEB* fsbase
            char temp3_1 = *(fsbase + arg1) ^ arg1.b
            *(fsbase + arg1) = temp3_1
            
            if (temp3_1 s>= 0)
                goto label_49b8d3
            
            *(ecx - 1 + (arg1 << 3) + 0x49) += arg1.b
    
    *arg1 += entry_ebx:1.b
}
