// ============================================================
// 函数名称: sub_4b247c
// 虚拟地址: 0x4b247c
// WARP GUID: 88cd2d95-bbd8-54a3-a2d6-347b57086177
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b247c(char* arg1, int32_t arg2, char* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    arg1[0x54090023] += arg1.b
    void* entry_ebx
    *(entry_ebx + 0x6b)
    int16_t* esp_1 = *(entry_ebx + 0x6b) * 0x6b72614d
    bool c = unimplemented  {imul esp, dword [ebx+0x6b], 0x6b72614d}
    int32_t eflags
    uint8_t* edi
    
    if (c)
        *esp_1
        esp_1 = &esp_1[1]
        arg2.b += arg2:1.b
        *arg1 = &arg1[*arg1]
        *(esp_1 + arg4 + 0x1004b) -= 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1[0x80000000] += arg1.b
        arg1.b = 0
        *(arg3 + (arg4 << 1) + 0x63) |= arg2
        int32_t edx = *(entry_ebx + 0x73) * 0x79
        uint8_t temp0_1
        temp0_1, edi = __insb(arg6, edx.w, eflags)
        *edi = temp0_1
        char* gsbase
        *(gsbase + arg1) += edx.b
        *edi += (&arg1[1]).b
        entry_ebx:1.b = (entry_ebx - 1):1.b * 2
        edx:1.b = 0x42
        arg1[0xffffffd5] += (&arg1[1]).b
        arg2 = edx + 1
        arg1[1] += (&arg1[1]).b
        arg1[1] += (&arg1[1]).b
        *arg3 = *arg3
        arg1[1] += (&arg1[1]).b
        arg1 = &arg1[1] & 0x69560700
        bool c_1
        
        if (arg1 u>= 0)
            edi[0x6e]
            arg3.b |= edi[0x6e]
            c_1 = false
        else
            __bound_gprv_mema32(arg4, *(arg4 + 0x1c))
            
            if (arg1 s< 0)
                *arg1 += entry_ebx.b
                *arg1 = &arg1[*arg1]
                arg1, arg2, arg3 = (*arg1)()
                *arg1 = &arg1[*arg1]
                *arg3 += 1
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 = *arg1
                arg1[0x4f0e0026] += arg1.b
                goto label_4b24f5
            
            uint16_t* esi_3 = __outsb(arg2.w, *arg5, arg5, eflags)
            entry_ebx += 1
            *(esp_1 - 4) = 0x65676e61
            arg1.b = 0x74
            arg1.b = arg2.b + 0x75
            *arg1 += arg1.b
            arg1, arg2, arg3 = arg1()
            *arg1 += arg1.b
            *arg3 += 1
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 = *arg1
            char temp6_1 = arg1[0x4f0a0028]
            arg1[0x4f0a0028] += arg1.b
            c_1 = temp6_1 + arg1.b u< temp6_1
            arg5 = __outsb(arg2.w, *esi_3, esi_3, eflags)
        
        if (c_1)
            goto label_4b25a6
        
        if (c_1)
            goto label_4b25b8
        
        if (add_overflow(esp_1 + 1, 1))
            jump(0x4b258b)
        
        jump(sub_4b23a6+0x1a5)
    
    edi = arg6 - 1
    label_4b24f5:
    uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
    void* temp2_1 = entry_ebx
    entry_ebx += 1
    bool o_1 = add_overflow(temp2_1, 1)
    uint16_t* esi_1 = __outsd(arg2.w, *esi, esi, eflags)
    uint16_t* esi_2 = __outsb(arg2.w, *esi_1, esi_1, eflags)
    bool c_2
    
    if (temp2_1 == 0xffffffff)
        char temp5_1 = arg1[0x4f0a0029]
        arg1[0x4f0a0029] += arg1.b
        c_2 = temp5_1 + arg1.b u< temp5_1
        arg5 = __outsb(arg2.w, *esi_2, esi_2, eflags)
        
        if (c_2)
            *arg1 += arg1.b
        label_4b25cd:
            char temp10_1 = arg1[0x4f07002c]
            arg1[0x4f07002c] += arg1.b
            c_2 = temp10_1 + arg1.b u< temp10_1
        else if (edi != 1 && not(c_2))
            if (c_2)
                jump(0x4b25ac)
            
            jump(0x4b2570)
        
        uint16_t* esi_7 = __outsb(arg2.w, *arg5, arg5, eflags)
        __outsb(arg2.w, *esi_7, esi_7, eflags)
        
        if (arg4 == 0xffffffff)
            if (arg4 + 1 s< 0)
                jump("ress")
            
            *arg1 += arg1.b
            undefined
    else
        while (true)
            if (temp2_1 + 1 s< 0)
                arg2 += 1
                arg1.b += arg2:1.b
                *arg1 += arg1.b
            else
                *(esp_1 - 4) = arg1
                esp_1 -= 4
                esi_2 = __outsd(arg2.w, *esi_2, esi_2, eflags)
                
                if (not(o_1))
                    if (not(o_1))
                        return sub_4b2503() __tailcall
                    
                    continue
            
            *(esp_1 - 4) = arg1
            *arg1 += arg1.b
            *arg3 += 1
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 = *arg1
            char temp12_1 = arg1[0x4f09002a]
            arg1[0x4f09002a] += arg1.b
            c_2 = temp12_1 + arg1.b u< temp12_1
            uint16_t* esi_4 = __outsb(arg2.w, *esi_2, esi_2, eflags)
            arg4 += 1
            uint16_t* esi_5 = __outsb(arg2.w, *esi_4, esi_4, eflags)
            arg5 = __outsd(arg2.w, *esi_5, esi_5, eflags)
            int16_t temp0_2
            temp0_2, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x3c), arg4.w)
            *(entry_ebx + 0x3c) = temp0_2
            break
        
        if (esp_1 == 3)
            *arg1 += arg1.b
            *arg1 = &arg1[*arg1]
            *arg1 += 1
            *arg1 = &arg1[*arg1]
            *arg3 += 1
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
        label_4b25a6:
            *arg1 = *arg1
            char temp8_1 = arg1[0x4f09002b]
            arg1[0x4f09002b] += arg1.b
            uint16_t* esi_6 = __outsb(arg2.w, *arg5, arg5, eflags)
            arg4 += 1
            arg5 = __outsb(arg2.w, *esi_6, esi_6, eflags)
            
            if (temp8_1 + arg1.b u< temp8_1)
                if (entry_ebx - 1 s>= 0)
                    jump(sub_4b23a6+0x2b9)
                
                int80_t x87_r0
                return sub_4b261b(arg1, arg2, arg3, arg5, edi, x87_r0) __tailcall
            
        label_4b25b8:
            arg1 = __in_oeax_immb(0x40, eflags)
            arg1[0x98ff0001] += entry_ebx.b
            *arg1 = &arg1[*arg1]
            *arg3 += 1
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 = *arg1
            goto label_4b25cd
    
    if (c_2)
        jump(0x4b25d2)
    
    jump(0x4b25da)
}
