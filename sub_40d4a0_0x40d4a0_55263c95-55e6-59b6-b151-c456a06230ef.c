// ============================================================
// 函数名称: sub_40d4a0
// 虚拟地址: 0x40d4a0
// WARP GUID: 55263c95-55e6-59b6-b151-c456a06230ef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40d17c, sub_40d55b
// [被调用的父级函数]: 无
// ============================================================

void*sub_40d4a0(void* arg1 @ ebp)
{
    // 第一条实际指令: uint32_t eax
    uint32_t eax
    int32_t edx
    
    if (*(arg1 - 0xc) == 0)
        eax = sx.d(*(arg1 - 0x40))
        
        if (eax s<= *(arg1 - 0x18))
            eax = *(arg1 - 0x18)
        
        edx = sx.d(*(arg1 - 0x40)) - *(arg1 - 0x18)
    else
        eax = *(arg1 - 0x18)
        edx = 0
    
    *(arg1 - 0x24) = eax
    *(arg1 - 0x28) = edx
    char* esi = *(arg1 - 0x10)
    int16_t* edi = *(arg1 - 4)
    void* ebx = arg1 - 0x3d
    
    if (*(arg1 - 0x3e) != 0 && esi == *(arg1 + 8))
        eax.b = 0x2d
        *edi = 0x2d
        edi += 1
    
    while (true)
        eax.b = *esi
        esi = &esi[1]
        
        if (eax.b != 0x23 && eax.b != 0x30)
            if (eax.b == 0x2e)
                continue
            else if (eax.b == 0x2c)
                continue
            else
                if (eax.b == 0x27 || eax.b == 0x22)
                    eax:1.b = eax.b
                    
                    while (true)
                        eax.b = *esi
                        esi = &esi[1]
                        
                        if (eax.b == eax:1.b)
                            break
                        
                        eax.b = eax.b
                        
                        if (eax.b == 0)
                            return edi - *(arg1 - 4)
                        
                        *edi = eax.b
                        edi += 1
                    
                    continue
                
                if (eax.b == 0x45 || eax.b == 0x65)
                    eax:1.b = *esi
                    
                    if (eax:1.b == 0x2b)
                        goto label_40d52c
                    
                    if (eax:1.b == 0x2d)
                        eax:1.b = 0
                    label_40d52c:
                        int32_t ecx_1 = 0xffffffff
                        
                        do
                            ecx_1 += 1
                            esi = &esi[1]
                        while (*esi == 0x30)
                        
                        if (ecx_1 u>= 4)
                            ecx_1 = 4
                        
                        void* var_4_1 = ebx
                        ebx.b = *(arg1 - 0x3d)
                        sub_40d17c(eax, sx.d(*(arg1 - 0x40)) - *(arg1 - 0x18), ecx_1, edi)
                        ebx = var_4_1
                        continue
                else
                    if (eax.b == 0x3b)
                        return edi - *(arg1 - 4)
                    
                    eax.b = eax.b
                    
                    if (eax.b == 0)
                        return edi - *(arg1 - 4)
                
                *edi = eax.b
                edi += 1
                continue
        
        sub_40d55b(arg1, edi)
}
