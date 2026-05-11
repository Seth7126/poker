// ============================================================
// 函数名称: sub_41782e
// 虚拟地址: 0x41782e
// WARP GUID: d83d4dde-e207-5988-95a9-05230ca2e967
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_41782e(char* arg1, char* arg2, void* arg3, char* arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi, int80_t arg7 @ st0)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    void* esp_3 = *(entry_ebx + 0x73) * 0x80900000
    TEB* fsbase
    bool s
    bool cond:0
    
    if (not(s))
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
        arg1[(arg6 << 1) + 0x80041] += arg1.b
        *arg1 += arg1.b
        arg7 f- fconvert.t(*arg1)
        void* eax
        eax:1.b = (&arg1[1]):1.b + arg2:1.b
        eax.b ^= *eax
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (eax + 1).b
        *(eax + 2) += arg3.b
        arg1 = (eax + 2) ^ *(eax + 2)
        arg1.b ^= *arg1
        char temp1_1 = *(fsbase + arg1) ^ arg1.b
        *(fsbase + arg1) = temp1_1
        cond:0 = temp1_1 s< 0
    
    int32_t eflags
    void* ecx_1
    
    if (not(cond:0))
        arg1.b = (&arg1[1]).b * 2
        char temp2_1 = *arg1 ^ arg1.b
        *arg1 = temp2_1
        
        if (temp2_1 == 0)
            goto label_4178ad
        
        *(esp_3 + (arg2 << 1)) += arg3.b
        *(esp_3 - 4) = entry_ebx
        *(esp_3 - 8) = 0x64657261
        char* edi
        char temp0_1
        temp0_1, edi = __insd(arg6, arg2.w, eflags)
        *edi = temp0_1
        *(esp_3 - 8)
        arg5 = *(esp_3 - 4)
        arg4 = *esp_3
        entry_ebx = *(esp_3 + 8)
        arg2 = *(esp_3 + 0xc)
        char* ecx = *(esp_3 + 0x10)
        esp_3 += 0x18
        arg1 = entry_ebx + arg5
        ecx_1 = ecx - 1
        
        if (arg3 != 1 && ecx_1 != 0)
            goto label_41790e
        
        arg3 = ecx_1 + 1
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
    label_4178ad:
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        char temp4_1 = arg1:1.b
        char temp5_1 = arg1:1.b
        arg1:1.b *= 2
        
        if (temp4_1 + temp5_1 s>= 0)
            goto label_4178b7
        
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1.b = 0x79
        ecx_1 = arg3 + 1
        *arg1 += 0x79
    label_417909:
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1[0x28004179] += arg1:1.b
        goto label_417919
    
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b = __in_al_immb(0x78, eflags)
    arg3 += 1
    label_4178b7:
    *(arg1 * 2) += arg1:1.b
    *arg1 += arg1.b
    arg1.b ^= 0x78
    ecx_1 = arg3 + 1
    arg1:1.b += arg2:1.b
    arg1.b ^= *arg1
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += ecx_1.b
    arg1 = &arg1[2] ^ *(arg1 + 2)
    arg1.b ^= *arg1
    char temp3_1 = *(fsbase + arg1) ^ arg1.b
    *(fsbase + arg1) = temp3_1
    void* eax_5
    bool cond:2_1
    
    if (temp3_1 s< 0)
        *arg1 += arg1.b
        *arg1 += arg1.b
    label_41790e:
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1.b = *0x28004179
    label_417919:
        *arg1 += arg1.b
        arg1[0xf4004176] += ecx_1:1.b
        arg1.b ^= *arg1
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (&arg1[1]).b
        arg1[2] += ecx_1.b
        arg1 = &arg1[2] ^ *(arg1 + 2)
        arg1.b ^= *arg1
        char temp9_1 = *(fsbase + arg1) ^ arg1.b
        *(fsbase + arg1) = temp9_1
        cond:2_1 = temp9_1 s< 0
    label_417938:
        
        if (cond:2_1)
            arg1:1.b += (ecx_1.w + 1):1.b
            return arg1
        
        *(&arg1[1] * 9 + 0xc000041) += entry_ebx.b
        arg1[0xffffffb2] += (&arg1[1]):1.b
        ecx_1 += 2
        eax_5:1.b = (&arg1[1]):1.b + ecx_1.b
        *ecx_1 = rol.b(*ecx_1, 0x54)
        *ecx_1 = rol.b(*ecx_1, 0xf0)
    else
        eax_5 = &arg1[1]
        *(eax_5 * 9) += arg2.b
        *(eax_5 - 0x40) += arg2.b
        ecx_1 += 2
        *arg5 += ecx_1.b
        *(esp_3 - 4) = esp_3
        
        if (arg4 != 1)
            void* ebp
            ebp.w = *(arg4 + 0x48) * 0x616d
            arg1 = eax_5 + 1
            cond:2_1 = eax_5 + 1 s< 0
            
            if (eax_5 + 1 s>= 0)
                goto label_417938
            
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            arg1[0x4179] += arg2:1.b
            goto label_417909
        
        *(eax_5 * 9 + 0x41) += arg2.b
        eax_5.b += arg2:1.b
    eax_5.b = 0x41
    *(eax_5 - 0x3f) += eax_5:1.b
    *(ecx_1 + 1 + (arg5 << 2) - 0x3e0bffbf) += (ecx_1 + 1):1.b
    eax_5:1.b += entry_ebx:1.b
    *(ecx_1 + 2) = rol.d(*(ecx_1 + 2), 0x60)
    return eax_5
}
