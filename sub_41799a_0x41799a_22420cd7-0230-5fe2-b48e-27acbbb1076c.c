// ============================================================
// 函数名称: sub_41799a
// 虚拟地址: 0x41799a
// WARP GUID: 22420cd7-0230-5fe2-b48e-27acbbb1076c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InitializeCriticalSection
// [内部子函数调用]: sub_4033d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41799a(char* arg1, void* arg2, void* arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, void* const* arg6 @ edi, long double arg7 @ st0, void* arg8, char* arg9, void* arg10, char* arg11, int32_t arg12)
{
    // 第一条实际指令: char* ecx_1 = arg3 + 1
    char* ecx_1 = arg3 + 1
    void arg_41
    *(&arg_41 + (ecx_1 << 3)) += arg2.b
    *ecx_1 += ecx_1.b
    void* const* var_4 = &__return_addr
    void* const** esp_1 = &var_4
    void* ebp = arg4 - 1
    
    if (arg4 == 1)
        goto label_417a07
    
    ebp.w = *(ebp - 0x75) * 0xb0c0
    void* ecx
    char* entry_ebx
    TEB* fsbase
    bool s_1
    bool o_1
    
    if (arg4 - 1 s< 0)
        *arg6 += arg1.b
        int32_t temp3_1 = *(ebp + (ecx_1 << 1) + 0x65) | arg2
        *(ebp + (ecx_1 << 1) + 0x65) = temp3_1
        
        if (temp3_1 == 0)
            *(fsbase + ecx_1)
            *(fsbase + ecx_1) = rol.b(*(fsbase + ecx_1), 1)
            bool c_2 = unimplemented  {rol byte [fs:ecx], 0x1}
            arg1.b = rlc.b(arg1.b, 0x41, c_2)
            *(&var_4 + (arg2 << 1)) += ecx_1.b
            goto label_417a22
        
        ebp.w = *(ebp + 0x40) * 0x4179
        arg1[0x77] += ecx_1:1.b
        ecx = &ecx_1[1]
        *arg1 += arg1.b
        char temp8_1 = *arg1
        *arg1 += ecx.b
        void* const* temp9_1 = arg6
        arg6 += 1
        s_1 = temp9_1 + 1 s< 0
        o_1 = add_overflow(temp9_1, 1)
        
        if (temp8_1 + ecx.b u< temp8_1)
            arg6 = var_4
            arg5 = __return_addr
            ebp = arg8
            entry_ebx = arg9
            arg2 = arg10
            ecx_1 = arg11
            void arg_1c
            esp_1 = &arg_1c
            goto label_417a2b
        
        if (o_1)
            goto label_417a33
        
        esp_1 = *(entry_ebx + 0x73) * 0x7a1c0000
        ecx_1 = ecx + 1
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
        *arg1
        *arg1 += arg1:1.b
        bool p_1 = unimplemented  {add byte [eax], ah}
        
        if (not(p_1))
            goto label_4179f3
        
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        trap(0xd)
    
    *(arg2 + 0x41) &= entry_ebx:1.b
    label_4179f3:
    *(arg1 * 2) += arg2:1.b
    arg1[arg6 << 1] += arg2:1.b
    ecx_1 = &ecx_1[1]
    arg1:1.b += arg2:1.b
    arg1.b ^= *arg1
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1 = &arg1[2]
    label_417a07:
    *arg1 += ecx_1.b
    char* eax_1 = arg1 ^ *arg1
    eax_1.b ^= *eax_1
    char temp2_1 = *(fsbase + eax_1) ^ eax_1.b
    *(fsbase + eax_1) = temp2_1
    void* ecx_2
    
    if (temp2_1 s>= 0)
        eax_1[(arg2 << 3) + 0x42] += (&eax_1[1]):1.b
        void* eax_2
        eax_2.b = (&eax_1[1]).b * 2
        *ecx_1 = rol.b(*ecx_1, 1)
        eax_2.b |= 0x54
    label_417a22:
        void* temp5_1 = arg2
        arg2 += 1
        s_1 = temp5_1 + 1 s< 0
        *(ebp * 3 + 0x61)
        arg5 = *(ebp * 3 + 0x61) * 0x616d4970
        o_1 = unimplemented  {imul esi, dword [ebp+ebp*2+0x61], 0x616d4970}
    label_417a2b:
        arg1 = entry_ebx + arg5
        
        if (s_1 != o_1)
            arg1.b = *0x440041e6
            goto label_417ab1
        
        ecx = &ecx_1[1]
    label_417a33:
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1:1.b += arg2:1.b
        bool p_2 = unimplemented  {add ah, dh}
        
        if (p_2)
            char temp13_1 = arg1.b
            bool c_3 = temp13_1 + arg1:1.b u< temp13_1
            *(ecx + 1)
            arg1 = *esp_1
            esp_1 = &esp_1[1]
            *(ecx + 1)
            ecx:1.b = sbb.b((ecx + 1):1.b, 0x41, c_3)
            *(ecx + (arg5 << 2) - 0x1fcbffbf) += ecx:1.b
            goto label_417a9b
        
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1.b += ecx:1.b
        bool p_3 = unimplemented  {add al, ch}
        
        if (p_3)
            arg1.b = *arg5
            arg5 += 1
            goto label_417a95
        
        *(arg1 * 2) += arg2:1.b
        *arg1 += arg1.b
        ecx_2 = ecx + 1
        arg1:1.b += arg2:1.b
        goto label_417a5d
    
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    arg1, arg2, ecx_2 = 0x3441bbcf()
    *arg1 += arg1.b
    arg1[0xf4004176] += ecx_2:1.b
    label_417a5d:
    arg1.b ^= *arg1
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += ecx_2.b
    arg1 = &arg1[2] ^ *(arg1 + 2)
    arg1.b ^= *arg1
    char temp4_1 = *(fsbase + arg1) ^ arg1.b
    *(fsbase + arg1) = temp4_1
    int32_t eflags
    void* ecx_10
    
    if (temp4_1 s>= 0)
        arg1[0xffffffdc] += ecx_2.b
        arg1[1] += (&arg1[1]).b
        arg1.b = (&arg1[1]).b | 0x41
        arg1[0xffffffb1] += arg1:1.b
        *(entry_ebx * 9 - 0x251fffbf) += arg1.b
        arg1[0xffffffdd] += entry_ebx.b
        arg1[0xac0041dd] += arg1.b
    label_417a95:
        ecx.b = 0x41
        *arg1 += arg2:1.b
    label_417a9b:
        char temp12_1 = arg1:1.b
        arg1:1.b += entry_ebx.b
        
        if (temp12_1 == neg.b(entry_ebx.b) || ecx == 0)
            *ecx += entry_ebx.b
            ecx_1 = ecx + 1
            arg1:1.b += arg2:1.b
            arg2.b = 0x41
            goto label_417aa7
        
        arg1.b = __in_al_dx(arg2.w, eflags)
        ecx_10 = ecx - 1
        
        if (temp12_1 == neg.b(entry_ebx.b) || ecx_10 == 0)
            goto label_417ae3
        
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1
        *arg1 += arg1.b
        bool p_5 = unimplemented  {add byte [eax], al}
        
        if (p_5)
            goto label_417b37
        
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(ecx_10 + (arg1 << 1)) -= entry_ebx:1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
    label_417b8a:
        *arg1 += arg1.b
        *arg1 += arg1.b
        char temp21_1 = *arg1
        *arg1 += arg1.b
        arg1.b = sbb.b(arg1.b, 0x7c, temp21_1 + arg1.b u< temp21_1)
        goto label_417b93
    
    ecx_1 = ecx_2 + 1
    label_417aa7:
    *(arg2 + 0x41) += arg1:1.b
    arg1[0x440041e6] += arg1:1.b
    label_417ab1:
    __out_dx_al(arg2.w, arg1.b, eflags)
    *arg1 += entry_ebx.b
    __out_dx_oeax(arg2.w, arg1, eflags)
    arg1:1.b += entry_ebx.b
    entry_ebx.b = 0x41
    ecx_1[(arg5 << 3) + 0x43] += arg2.b
    arg1[0xf80041f1] += (&ecx_1[2]):1.b
    arg2.b = 0x41
    arg1[0x7c0041b3] += arg1.b
    arg1 = __in_oeax_immb(0x41, eflags)
    *(&esp_1[arg5 * 2] + 0x41) += (&ecx_1[2]).b
    arg1.b += entry_ebx:1.b
    arg1.b = __in_al_immb(0x41, eflags)
    *(&esp_1[arg5 * 2] + 0x41) += 0x41
    arg1[0xe0ec0041] += (&ecx_1[2]).b
    ecx_10 = &ecx_1[3]
    label_417ae3:
    *((ebp << 3) + 0x54070041) += ecx_10.b
    *arg6 += arg1.b
    *esp_1
    *(esp_1 - 2) = esp_1 + 2
    esp_1 -= 2
    arg2 += 2
    arg5 = *(ebp * 3 + 0x61) * 0x417a7c70
    arg1[0x77] += ecx_10:1.b
    ecx_10 += 1
    *arg1 += arg1.b
    char temp16_1 = *arg1
    *arg1 += ecx_10.b
    void* const* temp17_1 = arg6
    arg6 += 1
    bool p_4 = unimplemented  {inc edi}
    bool s_2 = temp17_1 + 1 s< 0
    
    if (temp16_1 + ecx_10.b u>= temp16_1)
        if (add_overflow(temp17_1, 1))
            goto label_417b75
        
        int32_t esp_3 = *(entry_ebx + 0x73) * 0xc08b0000
        *(esp_3 - 4) = arg1
        *(esp_3 - 8) = ecx_10
        *(esp_3 - 0xc) = arg2
        *(esp_3 - 0x10) = entry_ebx
        *(esp_3 - 0x14) = esp_3 - 0x10
        *(esp_3 - 0x18) = ebp
        *(esp_3 - 0x1c) = arg5
        *(esp_3 - 0x20) = arg6
        esp_1 = esp_3 - 0x20
        
        if (p_4)
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
            entry_ebx[(arg6 << 1) + 0x41] += arg1:1.b
        label_417b37:
            *arg1 += entry_ebx.b
            *arg1 += arg1.b
            arg1[arg6 << 1] += arg2:1.b
            ecx_10 += 1
            arg1:1.b += arg2:1.b
            arg1.b ^= *arg1
            *entry_ebx += arg2:1.b
            *(entry_ebx + arg5) += (&arg1[1]).b
            arg1[2] += ecx_10.b
            arg1 = &arg1[2] ^ *(arg1 + 2)
            arg1.b ^= *arg1
            char temp20_1 = *(fsbase + arg1)
            *(fsbase + arg1) ^= arg1.b
            s_2 = (temp20_1 ^ arg1.b) s< 0
        
        if (s_2)
            goto label_417b8a
        
        int16_t eax_8
        eax_8:1.b = (arg1.w + 1):1.b + arg2:1.b
        trap(0xd)
    
    arg6 = *esp_1
    arg5 = esp_1[1]
    ebp = esp_1[2]
    entry_ebx = esp_1[4]
    arg2 = esp_1[5]
    ecx_10 = esp_1[6]
    arg1 = esp_1[7]
    esp_1 = 0x417b
    label_417b75:
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp19_1 = *arg1
    *arg1 += ecx_10:1.b
    void* ecx_16
    
    if (temp19_1 s< neg.b(ecx_10:1.b))
        ecx_10:1.b <<= 0x41
    label_417bc7:
        *((arg5 << 3) + 0xb0f00041) += entry_ebx:1.b
        *arg1 += arg1:1.b
        *(ecx_10 + 1)
        void* ecx_14
        ecx_14.b = 0x41
        arg1[0xfffffff6] += arg1:1.b
        *(arg5 * 9 - 0x4d0fffbf) += (ecx_14 + 1).b
        ecx_16 = ecx_14 + 2
        arg1:1.b += arg2:1.b
        arg2.b = 0x41
    else
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(esp_1 + (arg6 << 1)) += entry_ebx.b
    label_417b93:
        *(arg1 * 2) += (ecx_10 + 1):1.b
        *arg1 += arg1.b
        arg1:1.b += arg2:1.b
        arg1.b ^= *arg1
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (&arg1[1]).b
        arg1[2] += (ecx_10 + 2).b
        arg1 = &arg1[2] ^ *(arg1 + 2)
        arg1.b ^= *arg1
        char temp22_1 = *(fsbase + arg1) ^ arg1.b
        *(fsbase + arg1) = temp22_1
        
        if (temp22_1 s>= 0)
            arg1[0x41f6] += arg2.b
            arg1.b = (&arg1[1]).b | 0x41
            arg1[0xffffffb1] += arg1:1.b
            arg1.b *= 2
            ecx_10 += 4
            goto label_417bc7
        
        ecx_16 = ecx_10 + 3
    
    arg1[0x740041f6] += arg1:1.b
    entry_ebx.b = 0x41
    *(ecx_16 + (arg6 << 3)) += arg1:1.b
    arg1.b += 0x41
    entry_ebx.b = 0x41
    *(ecx_16 + 1 + (arg6 << 3)) += entry_ebx:1.b
    arg1[0xfffffff9] += arg1.b
    arg1:1.b += (ecx_16 + 3):1.b
    entry_ebx.b = 0x41
    arg1.b += entry_ebx:1.b
    arg2.b = 0x41
    arg1[0xe00041b3] += arg1.b
    *(ecx_16 + 3)
    arg1[0x50041f9] += 0x41
    *(esp_1 - 4) = esp_1
    int32_t eflags_1
    char temp0_2
    temp0_2, eflags_1 = __arpl_memw_gpr16(*(arg6 + 0x6e), ebp.w)
    *(arg6 + 0x6e) = temp0_2
    *(ecx_16 + 3 + (arg1 << 1)) -= entry_ebx:1.b
    *(esp_1 - 4)
    char* eax_12 = &arg1[0x6f634954]
    int32_t esi = __outsb(arg2.w, *arg5, arg5, eflags_1)
    
    if (arg1 != 0x909cb6ac && arg1 u< 0x909cb6ac)
        *((arg6 << 1) + 0x682441bc) += eax_12:1.b
        *eax_12 += eax_12.b
        unimplemented  {fcom st0, dword [eax]} f- fconvert.t(*eax_12)
        void* eax_13
        eax_13:1.b = (&eax_12[1]):1.b + arg2:1.b
        eax_13.b ^= *eax_13
        *entry_ebx += arg2:1.b
        entry_ebx[esi] += (eax_13 + 1).b
        *(eax_13 + 2) += (ecx_16 + 3).b
        eax_12 = (eax_13 + 2) ^ *(eax_13 + 2)
        eax_12.b ^= *eax_12
        char temp26_1 = *(fsbase + eax_12) ^ eax_12.b
        *(fsbase + eax_12) = temp26_1
        
        if (temp26_1 s< 0)
            eax_12 = sub_4033d0(ecx_16 + 3, arg2)
            *(eax_12 + 0x20) = (ecx_16 + 3).w
            *(0x6800416b - 4) = &eax_12[8]
            InitializeCriticalSection()
            
            if (arg2.b == 0)
                jump(sub_417ccc+0x34)
            
            jump(0x417cf1)
    else
        *eax_12 += eax_12.b
        char temp27_1 = *eax_12
        *eax_12 += (ecx_16 + 3).b
        
        if (temp27_1 + (ecx_16 + 3).b u>= temp27_1)
            if (add_overflow(arg6, 1))
                jump("esourceManage")
            
            jump(0x417c3f)
    
    char temp29 = eax_12[1]
    eax_12[1] += (ecx_16 + 3).b
    
    if (temp29 s< neg.b((ecx_16 + 3).b))
        jump(0x417ca3)
    
    eax_12[0xffffffe9] |= 0x41
    *(entry_ebx * 9 + 0x32e80f74) = 0xb7
    undefined
}
