// ============================================================
// 函数名称: sub_4c8a23
// 虚拟地址: 0x4c8a23
// WARP GUID: a9e01d03-2c3b-57a1-9cf0-14c4d0e20836
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_47a1c0, sub_507e90, sub_4c8aa0, sub_403df8, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

void* __fastcallsub_4c8a23(int32_t arg1, int32_t* arg2, char* arg3 @ eax, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, uint16_t* arg6, int32_t* arg7, void* arg8, uint16_t arg9, char arg10, void* arg11, int32_t arg12, int32_t arg13, int32_t arg14, int32_t arg15, int32_t arg16)
{
    // 第一条实际指令: *arg2 -= 1
    *arg2 -= 1
    *arg3 += arg3.b
    void* entry_ebx
    char temp1 = *(entry_ebx + 0x65)
    *(entry_ebx + 0x65) += arg2:1.b
    int32_t eflags
    
    if (temp1 + arg2:1.b u>= temp1)
        __outsd(arg2.w, *arg5, arg5, eflags)
        int32_t var_4 = 0x6e65
        trap(0xcc)
    
    uint16_t* esi_1 = arg6
    void* ebx = arg8
    char* eax = arg11
    uint8_t* edi_1
    uint8_t temp0
    temp0, edi_1 = __insb(__return_addr, arg9, eflags)
    *edi_1 = temp0
    
    if (arg3 != 1)
        __outsb(arg9, *esi_1, esi_1, eflags)
        *eax += eax.b
        *eax += eax.b
        return sub_4c8aa0(eax) __tailcall
    
    void* eax_2
    eax_2.b = (&eax[0x54a10000]).b + 0x53
    *(ebx + 0x48b08b00) += arg10
    void* eax_3 = eax_2 + *eax_2
    *(arg7 - 0x6371f00a) += eax_3.b
    void* eax_4 = eax_3 + 0x1bb0000
    *eax_4 += eax_4.b
    *(ebx + 0x52fed43d) += arg10
    *(ebx + 0x458d04c7) += eax_4.b
    
    while (true)
        sub_403df8(eax_4)
        int32_t* edi_2 = sub_507e90(&arg7[-2], ebx)
        
        if (arg7[-2] != 0)
            void* eax_9
            long double x87_r0
            eax_9, ebx = sub_47ab08(*data_530304, *data_530a74, *edi_2, x87_r0, arg7[-2])
            eax_9.b = arg7[-2] != 0
            sub_47a1c0(*edi_2, *data_530a74, *data_530304, eax_9.b)
        
        ebx += 1
        uint16_t* temp3_1 = esi_1
        esi_1 -= 1
        
        if (temp3_1 == 1)
            break
        
        eax_4 = &arg7[-2]
    
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg12
    sub_403df8(&arg7[-0x97])
    sub_403e1c(&arg7[-0x55], 6)
    sub_403df8(&arg7[-2])
    *arg7
    return &arg7[-2]
}
