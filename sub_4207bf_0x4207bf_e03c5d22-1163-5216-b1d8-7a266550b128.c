// ============================================================
// 函数名称: sub_4207bf
// 虚拟地址: 0x4207bf
// WARP GUID: e03c5d22-1163-5216-b1d8-7a266550b128
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: lstrcpyA, SystemParametersInfoA
// [内部子函数调用]: sub_4202fc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4207bf(char* arg1, int16_t arg2, int32_t arg3, int32_t* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t* arg6 @ edi)
{
    // 第一条实际指令: *arg6 -= 1
    *arg6 -= 1
    *arg1 += arg1.b
    char temp1 = *(arg6 + 0x65)
    *(arg6 + 0x65) += arg1.b
    int32_t entry_result
    int32_t** esp
    
    if (temp1 != neg.b(arg1.b))
        int32_t eflags
        uint16_t* esi = __outsd(arg2, *arg5, arg5, eflags)
        __outsb(arg2, *esi, esi, eflags)
        int32_t esi_2 = *(arg6 + (arg4 << 1) + 0x72) * 0x6f666e49
        int32_t* var_4_1 = arg6
        *(arg3 * 3 + 0x53) += arg1.b
        char* var_8_1 = arg1
        *(arg4 - 0x75) += arg2.b
        arg1.b = __in_al_dx(arg2, eflags)
        int32_t entry_result_1 = entry_result
        int32_t var_1d_1 = esi_2
        int32_t* var_21 = arg6
        esp = &var_21
        int32_t* esi_3 = arg4[3]
        
        if (data_5316f0 != 0)
            entry_result = 0
            
            if (arg4[2] == 0x12340042 && esi_3 != 0 && *esi_3 u>= 0x28)
                esp = &var_21
                
                if (SystemParametersInfoA(SPI_GETWORKAREA, 0, &arg4[-4], 0) != 0)
                    esi_3[1] = 0
                    esi_3[2] = 0
                    esi_3[3] = data_5316c4(0)
                    esi_3[4] = data_5316c4(1)
                    __builtin_memcpy(&esi_3[5], &arg4[-4], 0x10)
                    esp = &var_21
                    esi_3[9] = 1
                    
                    if (*esi_3 u>= 0x4c)
                        lstrcpyA(&esi_3[0xa], sub_420897+0x15)
                        esp = &var_21
                    
                    entry_result.b = 1
        else
            arg1.b = 4
            struct _EXCEPTION_REGISTRATION_RECORD** eax
            int32_t edi_1
            eax, arg4, edi_1 = sub_4202fc(arg1.b, data_5316dc, sub_420897+5)
            data_5316dc = eax
            esp = &var_21
            entry_result = data_5316dc(edi_1, esi_3)
    
    *esp
    esp[1]
    esp[2]
    *arg4
    return entry_result
}
