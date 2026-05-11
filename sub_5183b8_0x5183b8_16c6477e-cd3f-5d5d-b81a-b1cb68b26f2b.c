// ============================================================
// 函数名称: sub_5183b8
// 虚拟地址: 0x5183b8
// WARP GUID: 16c6477e-cd3f-5d5d-b81a-b1cb68b26f2b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_5183b8(char* arg1, int32_t arg2, int32_t* arg3, int32_t arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi) __noreturn
{
    // 第一条实际指令: arg3:1.b += *arg5
    arg3:1.b += *arg5
    *nullptr
    *arg1 += arg1.b
    char* gsbase
    *(gsbase + arg1) += arg1.b
    *((arg4 << 3) + 0x83d0004a) += arg1.b
    *0xfffffffe = arg3
    *arg5 += arg3.b
    int16_t cs
    *0xfffffffa = zx.d(cs)
    *0xfffffff6 = 0xfffffffa
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg6, arg2.w, eflags)
    *edi = temp0
    void* eax
    void* entry_ebx
    
    if (add_overflow(arg1, 0xffffffff))
        *(arg1 - 1) += (arg1 - 1).b
        *(((arg1 - 1) << 2) + 0x47) += (arg1 - 1):1.b
        *(arg1 - 1) += (arg1 - 1).b
    label_518429:
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        arg5[0xe4005184] += (arg1 - 1).b
        eax.b = (arg1 - 1).b | *(arg1 - 1)
    else
        arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
        
        if (arg1 - 1 s< 0)
            goto label_518429
        
        char* esi = *(entry_ebx + 0x74) * 0x7e8
        *(arg1 - 1) += arg1 - 1
        *(arg1 - 1) += (arg1 - 1).b
        *0x5183 -= 0x7d
        char* eax_1
        eax_1:1.b = arg2:1.b
        *arg3 = adc.d(*arg3, 0xd, 0x51 + arg2:1.b u< 0x51)
        arg3:1.b += *esi
        int32_t edx = arg2 ^ *(eax_1 * 2)
        *eax_1 -= 0x7d
        eax_1[0xbc000000] = adc.b(eax_1[0xbc000000], (&eax_1[0xbc000000]).b, eax_1 u>= 0x44000000)
        *(arg3 + (edx << 1) + 0x2e020d00) |= (&eax_1[0xbc000000]).b
        eax.b = (&eax_1[0xbc000000]).b ^ 0x14
        *eax += eax.b
        char temp4_1 = *0xbc000000
        *0xbc000000 += eax.b
        *eax = adc.b(*eax, eax.b, temp4_1 + eax.b u< temp4_1)
        TEB* fsbase
        *(fsbase + arg3)
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *(fsbase + arg3)
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        char temp0_1 = *(arg3 + (edx << 1) + 0xae400)
        *(arg3 + (edx << 1) + 0xae400) = eax.b
        eax.b = temp0_1
    
    char temp5 = eax.b
    eax.b += entry_ebx.b
    *eax = adc.b(*eax, eax.b, temp5 + entry_ebx.b u< temp5)
    trap(0xd)
}
