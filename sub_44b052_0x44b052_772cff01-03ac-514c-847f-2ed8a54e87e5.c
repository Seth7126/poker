// ============================================================
// 函数名称: sub_44b052
// 虚拟地址: 0x44b052
// WARP GUID: 772cff01-03ac-514c-847f-2ed8a54e87e5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_44b052(char* arg1, int32_t* arg2, int16_t arg3, int32_t arg4 @ edi, int32_t arg5, int32_t arg6, char* arg7, char* arg8, int16_t arg9)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    uint8_t* edi_1
    uint8_t temp0
    temp0, edi_1 = __insb(arg4, arg2.w, eflags)
    *edi_1 = temp0
    int32_t ebx
    ebx:1.b = 0x42
    arg1[0xe00042b7] += arg3:1.b
    *arg2 = rol.d(*arg2, arg3.b)
    *arg1 += arg1.b
    arg1[0x80000000] += arg1.b
    void* edi = 0x78004271
    int32_t arg_e
    int32_t ebx_1 = arg_e
    char* ecx = arg7
    char* eax = arg8
    
    if (not(add_overflow(ebx, 1)))
        int32_t ebp_1 = *(edi + 0x6e) * &data_416de0
        arg8 = eax
        arg7 = ecx
        arg_e = ebx_1
        int32_t* arg_a = &arg_e
        arg5 = ebp_1
        int32_t var_4 = edi
        *eax += eax.b
        *(ecx + (edi << 2)) += 1
        *eax += eax:1.b
        char temp4 = eax[0x8000000f]
        eax[0x8000000f] += eax.b
        eax.b = adc.b(eax.b, 0, temp4 + eax.b u< temp4)
        
        if (eax u>= 0x909390bd)
            jump(0x44b0f7)
        
        jump(sub_44b014+0x83)
    
    *ecx += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *ecx = *ecx
    *eax += eax.b
    char temp3 = *__return_addr
    *__return_addr += ecx.b
    arg8 = arg5
    
    if (temp3 + ecx.b u< temp3)
        jump("DockManager")
    
    char temp6 = *eax
    *eax += eax.b
    eax.b = sbb.b(eax.b, *eax, temp6 + eax.b u< temp6)
    *(arg6 + (__return_addr << 1) + 0x61) |= eax.b
    *(__return_addr + 0x64)
    *eax += eax.b
    int32_t* eax_2
    char ecx_2
    int32_t edx_2
    eax_2, edx_2, ecx_2 = (*eax)()
    edx_2:1.b += (ebx_1.w - 1):1.b
    *eax_2 += eax_2
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    char temp7 = *eax_2
    *eax_2 += eax_2.b
    void* eax_3 = sbb.d(eax_2, *eax_2, temp7 + eax_2.b u< temp7)
    *(edx_2 + (__return_addr << 1) + 0x61) |= eax_3.b
    __outsd(edx_2.w, *__return_addr, __return_addr, eflags)
    char* gsbase
    *(gsbase + eax_3) += edx_2.b
    *((eax_3 + 1) * 2) += ecx_2
    undefined
}
