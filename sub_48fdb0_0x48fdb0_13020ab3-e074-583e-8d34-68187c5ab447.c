// ============================================================
// 函数名称: sub_48fdb0
// 虚拟地址: 0x48fdb0
// WARP GUID: 13020ab3-e074-583e-8d34-68187c5ab447
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

char* __convention("regparm")sub_48fdb0(char* arg1, char* arg2, int32_t arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
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
    *(arg1 - 1) += arg2.b
    *(arg1 - 1) += (arg1 - 1).b
    void arg_48
    *(&arg_48 + (arg6 << 3)) += arg3.b
    void* eax
    eax:1.b = (arg1 - 1):1.b + arg2:1.b
    eax.b ^= *eax
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (eax + 1).b
    *(eax + 2) += arg3.b
    char* result = (eax + 2) ^ *(eax + 2)
    result.b ^= *result
    TEB* fsbase
    char temp0 = *(fsbase + result) ^ result.b
    *(fsbase + result) = temp0
    char*** esp
    
    if (temp0 s>= 0)
        result.b = (&result[1]).b * 2
        char temp1_1 = *result ^ result.b
        *result = temp1_1
        int16_t cs
        uint32_t var_4_1 = zx.d(cs)
        char* ecx = arg3 - 1
        char* var_8_1 = entry_ebx
        int32_t edi = arg6 + 1
        char* var_c = entry_ebx
        int32_t eflags
        uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
        char** var_10
        
        if (arg6 != 0xffffffff)
            result[0x48fe] += arg2:1.b
            *result += result.b
        label_48fe77:
            *result += result.b
            *result += result.b
            *result += result.b
            *result += result.b
            *result += result.b
            *result += result.b
            arg2.b += result.b
            *result -= 1
            result.b = result.b
            *result += result.b
            arg2:1.b |= entry_ebx:1.b
            void* eax_3
            eax_3:1.b = (result - 1):1.b + arg2:1.b
            eax_3.b ^= *eax_3
            *entry_ebx += arg2:1.b
            *(entry_ebx + esi) += (eax_3 + 1).b
            *(eax_3 + 2) += ecx.b
            char* eax_6 = (eax_3 + 2) ^ *(eax_3 + 2)
            eax_6.b ^= *eax_6
            char temp3 = *(fsbase + eax_6) ^ eax_6.b
            *(fsbase + eax_6) = temp3
            void* eax_8
            
            if (temp3 s< 0)
                eax_8 = eax_6 - 1
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *eax_8 += eax_8.b
                *arg2 += ecx:1.b
                *eax_8 -= 1
                *eax_8 += eax_8.b
            else
                *(ecx * 2 + 0xe0049) += (&eax_6[1]).b
                eax_6[1] += (&eax_6[1]).b
                eax_6[1] += (&eax_6[1]).b
                *(eax_6 + 1) = &eax_6[1 + *(eax_6 + 1)]
                eax_6[1] += (&eax_6[1]).b
                *0x40048ed -= 0x13
                char temp4_1 = *ecx
                *ecx += ecx.b
                bool c_1 = temp4_1 + ecx.b u< temp4_1
                var_10 = &var_c
                ecx -= 1
                char* var_14 = entry_ebx
                char** esp_2 = &var_14
                
                while (true)
                    int32_t temp5_1 = edi
                    edi += 1
                    *(esp_2 - 4) = entry_ebx
                    esp_2 -= 4
                    esi = __outsd(arg2.w, *esi, esi, eflags)
                    
                    if (temp5_1 == 0xffffffff)
                        entry_ebx:1.b = sbb.b(entry_ebx:1.b, entry_ebx:1.b, c_1)
                        *0x40048ec -= 0x14
                        *0x40048ec -= 0x14
                        *0x40048ec -= 0x14
                        *0x40048ec -= 0x14
                        *0x40048ec += entry_ebx.b
                        *0x40048ec -= 1
                        *0x40048ec -= 0x14
                        *0x40048ec -= 0x14
                        *0x40048ec -= 0x14
                        *0x40048ec -= 0x14
                        *0x40048ec -= 0x14
                        *0x40048ec -= 0x14
                        *0x40048ec -= 0x14
                        *0x40048ec -= 0x14
                        entry_ebx:1.b = 0
                        eax_8 = 0x40048eb
                        *0x80091d6 += ecx.b
                        break
                    
                    if (not(c_1))
                        *0x40091ec = ror.b(*0x40091ec, 0)
                        *0x40048ed -= 0x13
                        *0x40048ed -= 0x13
                        *0x40048ed -= 0x13
                        *0x40048ed -= 0x13
                        *0x40048ed -= 0x13
                        *0x40048ed -= 0x13
                        *0x40048ed -= 0x13
                        *0x40048ed -= 0x13
                        *0x40048ed -= 0x13
                        *0x40048ed -= 0x13
                        *0x40048ed -= 0x13
                        *0x40048ed -= 0x13
                        *0x40048ed -= 0x13
                        entry_ebx:1.b = entry_ebx:1.b
                        *0x80091d8 += ecx.b
                        char* eax_9
                        eax_9:1.b = ecx.b
                        *eax_9 -= 1
                        trap(0xd)
            
            *eax_8 += ecx.b
            *eax_8 -= 1
            trap(0xd)
        
        if (temp1_1 u< 0)
            goto label_48fe77
        
        __outsd(arg2.w, *esi, esi, eflags)
        
        if (temp1_1 u< 0)
            return result
        
        var_10 = &var_c
        esp = &var_10
        *result -= 1
        *result += result.b
        *result += result.b
        *result += result.b
        *result += result.b
        *result += result.b
        *result += result.b
        *result += result.b
        *result += result.b
        *result += result.b
        *result += result.b
        *result += result.b
    
    *result += result.b
    *result += result.b
    *result += result.b
    *(esp - 4) = esp
    *result -= 1
    result.b = result.b
    *result += result.b
    trap(0xd)
}
