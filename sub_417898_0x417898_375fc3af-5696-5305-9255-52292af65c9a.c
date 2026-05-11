// ============================================================
// 函数名称: sub_417898
// 虚拟地址: 0x417898
// WARP GUID: 375fc3af-5696-5305-9255-52292af65c9a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_417898(char* arg1, int16_t arg2, void* arg3, int32_t arg4 @ ebp, char* arg5 @ esi)
{
    // 第一条实际指令: *arg1 += arg1.b
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
    *arg1 += arg1.b
    int32_t eflags
    arg1.b = __in_al_immb(0x78, eflags)
    *(arg1 * 2) += arg1:1.b
    *arg1 += arg1.b
    arg1.b ^= 0x78
    char* ecx_1 = arg3 + 2
    arg1:1.b += arg2:1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += ecx_1.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp1
    void* eax_3
    bool cond:0_1
    
    if (temp1 s< 0)
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        eax_2.b = *0x28004179
    label_417919:
        *eax_2 += eax_2.b
        eax_2[0xf4004176] += ecx_1:1.b
        eax_2.b ^= *eax_2
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (&eax_2[1]).b
        eax_2[2] += ecx_1.b
        eax_2 = &eax_2[2] ^ *(eax_2 + 2)
        eax_2.b ^= *eax_2
        char temp3_1 = *(fsbase + eax_2) ^ eax_2.b
        *(fsbase + eax_2) = temp3_1
        cond:0_1 = temp3_1 s< 0
    label_417938:
        
        if (cond:0_1)
            eax_2:1.b += (ecx_1.w + 1):1.b
            return eax_2
        
        *(&eax_2[1] * 9 + 0xc000041) += entry_ebx.b
        eax_2[0xffffffb2] += (&eax_2[1]):1.b
        ecx_1 = &ecx_1[2]
        eax_3:1.b = (&eax_2[1]):1.b + ecx_1.b
        *ecx_1 = rol.b(*ecx_1, 0x54)
        *ecx_1 = rol.b(*ecx_1, 0xf0)
    else
        eax_3 = &eax_2[1]
        *(eax_3 * 9) += arg2.b
        *(eax_3 - 0x40) += arg2.b
        ecx_1 = &ecx_1[2]
        *arg5 += ecx_1.b
        void* const* var_4 = &__return_addr
        
        if (arg4 != 1)
            void* ebp
            ebp.w = *(arg4 + 0x48) * 0x616d
            eax_2 = eax_3 + 1
            cond:0_1 = eax_3 + 1 s< 0
            
            if (eax_3 + 1 s>= 0)
                goto label_417938
            
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            eax_2[0x4179] += arg2:1.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            eax_2[0x28004179] += eax_2:1.b
            goto label_417919
        
        *(eax_3 * 9 + 0x41) += arg2.b
        eax_3.b += arg2:1.b
    eax_3.b = 0x41
    *(eax_3 - 0x3f) += eax_3:1.b
    ecx_1[(arg5 << 2) - 0x3e0bffbe] += (&ecx_1[1]):1.b
    eax_3:1.b += entry_ebx:1.b
    *(ecx_1 + 2) = rol.d(*(ecx_1 + 2), 0x60)
    return eax_3
}
