// ============================================================
// 函数名称: sub_4097ab
// 虚拟地址: 0x4097ab
// WARP GUID: 2b9d08c1-8be2-5f16-9536-396620d8656f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409660, sub_409a5d, sub_40986b, sub_4068d4, sub_4098f2, sub_40d01e, sub_4069c9, sub_409608
// [被调用的父级函数]: sub_409680
// ============================================================

uint32_t __convention("regparm")sub_4097ab(char arg1, void* arg2 @ ebp)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    ecx.b = arg1 & 0xdf
    int32_t eax = 1
    int32_t ebx = *(arg2 - 8)
    
    if (ebx u<= *(arg2 + 8))
        *(arg2 - 8) += 1
        int32_t* esi_2 = *(arg2 + 0xc) + (ebx << 3)
        uint32_t i = *esi_2
        uint32_t ecx_19
        uint32_t ebx_1
        uint32_t i_7
        int32_t (__fastcall* esi_9)(int32_t arg1, wchar16* arg2)
        
        switch (esi_2[1].b)
            case 0
                if (ecx.b == 0x44)
                    if (i s>= 0)
                        return sub_4098f2(i, arg2) __tailcall
                    
                    uint32_t eax_13
                    int32_t ecx_12
                    eax_13, ecx_12 = sub_4098f2(neg.d(i), arg2)
                    eax_13.b = 0x2d
                    *(esi_2 - 1) = 0x2d
                    return eax_13
                
                if (ecx.b == 0x55)
                    return sub_4098f2(i, arg2) __tailcall
                
                if (ecx.b == 0x58)
                    goto label_4098f7
                
                eax = 0
            case 1, 7, 8, 9, 0xe
                eax = 0
            case 2
                if (ecx.b == 0x53)
                    return i
                
                eax = 0
            case 3
                ebx_1:1.b = 0
                goto label_4099ef
            case 4
                if (ecx.b == 0x53)
                    i.b = *i
                    ecx_19 = zx.d(i.b)
                    goto label_4099a3
                
                eax = 0
            case 5
                if (ecx.b == 0x50)
                    *(arg2 - 0x20) = 8
                label_4098f7:
                    void* esi_6 = arg2 - 0x61
                    
                    do
                        int32_t edx_14 = 0
                        uint8_t edx_15 = (modu.dp.d(edx_14:i, 0x10)).b + 0x30
                        
                        if (edx_15 u>= 0x3a)
                            edx_15 += 7
                        
                        esi_6 -= 1
                        *esi_6 = edx_15
                        i = divu.dp.d(edx_14:i, 0x10)
                    while (i != 0)
                    
                    void* ecx_15 = arg2 - 0x61 - esi_6
                    int32_t edx_16 = *(arg2 - 0x20)
                    
                    if (edx_16 u> 0x10)
                        return i
                    
                    void* i_6 = edx_16 - ecx_15
                    
                    if (edx_16 u> ecx_15)
                        i.b = 0x30
                        void* i_1
                        
                        do
                            esi_6 -= 1
                            *esi_6 = 0x30
                            i_1 = i_6
                            i_6 -= 1
                        while (i_1 != 1)
                    
                    return i
                
                eax = 0
            case 6
                if (ecx.b == 0x53)
                    uint32_t i_8 = i
                    i.b = 0
                    int32_t i_2 = *(arg2 - 0x20)
                    
                    if (i_2 != 0)
                        while (i_2 != 0)
                            char temp4_1 = *i_8
                            i_8 += 1
                            i_2 -= 1
                            
                            if (0 == temp4_1)
                                break
                    
                    return i
                
                eax = 0
            case 0xa
                esi_9 = sub_403fe0
            label_40997a:
                
                if (ecx.b == 0x53)
                    esi_9(ecx, i)
                    i_7 = *(arg2 - 0x10)
                    i = i_7
                    goto label_40999c
                
                eax = 0
            case 0xb
                if (ecx.b == 0x53)
                    i_7 = i
                label_40999c:
                    
                    if (i_7 == 0)
                        return i
                    
                    ecx_19 = *(i_7 - 4)
                label_4099a3:
                    
                    if (ecx_19 u<= *(arg2 - 0x20))
                        return i
                    
                    *(arg2 - 0x20)
                    return i
                
                eax = 0
            case 0xc
                ebx_1:1.b = 1
            label_4099ef:
                ebx_1.b = 0
                
                if (ecx.b != 0x47)
                    ebx_1.b = 1
                
                if (ecx.b == 0x47 || ecx.b == 0x45)
                    int32_t eax_17 = *(arg2 - 0x20)
                    
                    if (eax_17 u> 0x12)
                        eax_17 = 0xf
                    
                    return sub_40d01e(ebx_1:1.b, arg2 - 0x71, 3, eax_17, ebx_1.b)
                
                ebx_1.b = 2
                
                if (ecx.b == 0x46)
                    goto label_409a16
                
                ebx_1.b = 3
                
                if (ecx.b == 0x4e)
                    goto label_409a16
                
                if (ecx.b == 0x4d)
                    ebx_1.b = 4
                label_409a16:
                    uint32_t edx_19 = *(arg2 - 0x20)
                    
                    if (edx_19 u> 0x12)
                        edx_19 = 2
                        
                        if (ecx.b == 0x4d)
                            edx_19 = zx.d(data_5314fc)
                    
                    return sub_40d01e(ebx_1:1.b, arg2 - 0x71, edx_19, 0x12, ebx_1.b)
                
                eax = 0
            case 0xd
                if (ecx.b == 0x53)
                    if (*i u<= 1)
                        return i
                    
                    i = sub_409660(ecx, i)
                    i_7 = *(arg2 - 0xc)
                    goto label_40999c
                
                eax = 0
            case 0xf
                esi_9 = sub_404040
                goto label_40997a
            case 0x10
                *(arg2 - 0x30) = *i
                *(arg2 - 0x2c) = *(i + 4)
                
                if (ecx.b == 0x44)
                    if ((*(arg2 - 0x2c) & 0x80000000) == 0)
                        return sub_40986b(arg2) __tailcall
                    
                    int32_t temp3 = *(arg2 - 0x30)
                    *(arg2 - 0x30) = neg.d(*(arg2 - 0x30))
                    *(arg2 - 0x2c) = adc.d(*(arg2 - 0x2c), 0, temp3 != 0)
                    *(arg2 - 0x2c) = neg.d(*(arg2 - 0x2c))
                    int32_t eax_3
                    int32_t ecx_5
                    eax_3, ecx_5 = sub_40986b(arg2)
                    eax_3.b = 0x2d
                    *(esi_2 - 1) = 0x2d
                    return eax_3
                
                if (ecx.b == 0x55)
                    return sub_40986b(arg2) __tailcall
                
                if (ecx.b == 0x58)
                    void* esi_4 = arg2 - 0x51
                    int32_t i_3
                    
                    do
                        char eax_5
                        int32_t edx_7
                        eax_5, edx_7 = sub_4069c9(0x10, *(arg2 - 0x2c), *(arg2 - 0x30), 0x10, 0)
                        char edx_8 = eax_5 + 0x30
                        
                        if (edx_8 u>= 0x3a)
                            edx_8 += 7
                        
                        esi_4 -= 1
                        *esi_4 = edx_8
                        int32_t eax_8
                        int32_t edx_10
                        eax_8, edx_10 = sub_4068d4(0x10, *(arg2 - 0x2c), *(arg2 - 0x30), 0x10, 0)
                        *(arg2 - 0x30) = eax_8
                        *(arg2 - 0x2c) = edx_10
                        i_3 = eax_8 | edx_10
                    while (i_3 != 0)
                    
                    void* ecx_8 = arg2 - 0x51 - esi_4
                    int32_t edx_11 = *(arg2 - 0x20)
                    
                    if (edx_11 u> 0x10)
                        return i_3
                    
                    void* i_5 = edx_11 - ecx_8
                    
                    if (edx_11 u> ecx_8)
                        i_3.b = 0x30
                        void* i_4
                        
                        do
                            esi_4 -= 1
                            *esi_4 = 0x30
                            i_4 = i_5
                            i_5 -= 1
                        while (i_4 != 1)
                    
                    return i_3
                
                eax = 0
    
    sub_409a5d(eax, arg2)
    int32_t edx_1 = *(arg2 - 0x14)
    sub_409608(eax, edx_1, *(arg2 - 0x24) - edx_1)
    noreturn
}
