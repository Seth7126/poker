// ============================================================
// 函数名称: sub_4203cf
// 虚拟地址: 0x4203cf
// WARP GUID: 383e93ea-daa3-52a4-815b-2ba77ff58ef0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetSystemMetrics
// [内部子函数调用]: sub_4202fc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4203cf(char* arg1, int16_t arg2, int32_t arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t* arg6 @ edi)
{
    // 第一条实际指令: *arg6 -= 1
    *arg6 -= 1
    *arg1 += arg1.b
    char temp1 = *(arg6 + 0x65)
    *(arg6 + 0x65) += arg1.b
    bool c = temp1 + arg1.b u< temp1
    int32_t result
    int32_t* esp
    int32_t entry_ebx
    bool c_1
    
    if (temp1 == neg.b(arg1.b))
        result = adc.d(arg1, 0x2ea834a, c)
        c_1 = adc.d(arg1, 0x2ea834a, c) u< arg1 || (c && adc.d(arg1, 0x2ea834a, c) == arg1)
    label_42042a:
        
        if (not(c_1))
            goto label_420440
        
        result = 1
    label_420440:
        
        if (result == 0xffffffff)
            *(esp - 4) = entry_ebx
            result = GetSystemMetrics()
    else
        int32_t eflags
        uint16_t* esi = __outsd(arg2, *arg5, arg5, eflags)
        __outsb(arg2, *esi, esi, eflags)
        *(arg6 + (arg4 << 1) + 0x72)
        *(arg4 - 0x75) += arg2.b
        arg1.b = __in_al_dx(arg2, eflags)
        int32_t var_4 = entry_ebx
        esp = &var_4
        entry_ebx = *(arg4 + 8)
        
        if (data_5316ec != 0)
            result = arg1 | 0xffffffff
            
            if (entry_ebx - 0x4c u< 2)
                result = 0
                goto label_420440
            
            if (entry_ebx == 0x4e)
                entry_ebx = 0
                goto label_420440
            
            if (entry_ebx == 0x4f)
                entry_ebx = 1
                goto label_420440
            
            c_1 = entry_ebx - 0x50 u< 2
            goto label_42042a
        
        struct _EXCEPTION_REGISTRATION_RECORD** eax
        int32_t ebx
        eax, ebx = sub_4202fc(0, data_5316c4, sub_420453+5)
        data_5316c4 = eax
        int32_t var_8 = ebx
        esp = &var_8
        result = data_5316c4(var_8)
    *esp
    esp[1]
    return result
}
