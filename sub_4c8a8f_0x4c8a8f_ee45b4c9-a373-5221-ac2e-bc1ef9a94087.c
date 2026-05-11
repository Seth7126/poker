// ============================================================
// 函数名称: sub_4c8a8f
// 虚拟地址: 0x4c8a8f
// WARP GUID: ee45b4c9-a373-5221-ac2e-bc1ef9a94087
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_47a1c0, sub_507e90, sub_4c8aa0, sub_403df8, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

void* __fastcallsub_4c8a8f(int32_t arg1, int16_t arg2, int32_t* arg3 @ eax, uint16_t* arg4, int32_t* arg5, void* arg6, uint16_t arg7, char arg8, void* arg9, int32_t arg10, int32_t arg11, int32_t arg12, int32_t arg13, int32_t arg14)
{
    // 第一条实际指令: *arg3 -= 1
    *arg3 -= 1
    *arg3 += arg3.b
    void* entry_ebx
    *(entry_ebx + 0x65) += arg2:1.b
    uint16_t* esi = arg4
    void* ebx = arg6
    char* eax = arg9
    int32_t eflags
    uint8_t* edi_1
    uint8_t temp0
    temp0, edi_1 = __insb(__return_addr, arg7, eflags)
    *edi_1 = temp0
    
    if (arg3 != 1)
        __outsb(arg7, *esi, esi, eflags)
        *eax += eax.b
        *eax += eax.b
        return sub_4c8aa0(eax) __tailcall
    
    void* eax_2
    eax_2.b = (&eax[0x54a10000]).b + 0x53
    *(ebx + 0x48b08b00) += arg8
    void* eax_3 = eax_2 + *eax_2
    *(arg5 - 0x6371f00a) += eax_3.b
    void* eax_4 = eax_3 + 0x1bb0000
    *eax_4 += eax_4.b
    *(ebx + 0x52fed43d) += arg8
    *(ebx + 0x458d04c7) += eax_4.b
    
    while (true)
        sub_403df8(eax_4)
        int32_t* edi_2 = sub_507e90(&arg5[-2], ebx)
        
        if (arg5[-2] != 0)
            void* eax_9
            long double x87_r0
            eax_9, ebx = sub_47ab08(*data_530304, *data_530a74, *edi_2, x87_r0, arg5[-2])
            eax_9.b = arg5[-2] != 0
            sub_47a1c0(*edi_2, *data_530a74, *data_530304, eax_9.b)
        
        ebx += 1
        uint16_t* temp2_1 = esi
        esi -= 1
        
        if (temp2_1 == 1)
            break
        
        eax_4 = &arg5[-2]
    
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg10
    sub_403df8(&arg5[-0x97])
    sub_403e1c(&arg5[-0x55], 6)
    sub_403df8(&arg5[-2])
    *arg5
    return &arg5[-2]
}
