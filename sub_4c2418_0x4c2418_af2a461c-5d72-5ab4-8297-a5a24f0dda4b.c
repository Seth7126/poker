// ============================================================
// 函数名称: sub_4c2418
// 虚拟地址: 0x4c2418
// WARP GUID: af2a461c-5d72-5ab4-8297-a5a24f0dda4b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a180, sub_47b488, sub_483950, sub_4d6cdc, sub_47b304, sub_4c0984, sub_47a9a0, sub_40401c, sub_4cda5c, sub_47b650, sub_403df8, sub_403e1c, sub_4d9f6c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4d6994, sub_4e649b
// ============================================================

void*sub_4c2418()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_11c = ebx
    int32_t esi
    int32_t var_120 = esi
    int32_t edi
    int32_t var_124 = edi
    int32_t var_18 = 0
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t var_8 = 0
    void* edi_1 = data_530304
    int32_t* var_128 = &var_4
    int32_t (* var_12c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_47a9a0(*data_530890, *(data_5301f0 + 0x1c), *edi_1, *data_5301f4 + 0x20068)
    void* ebp_1 = sub_4d6cdc(*edi_1)
    sub_47b488(*data_53071c, *(data_5301f0 + 0x1c), *edi_1, 0)
    sub_483950(*edi_1, *(data_5301f0 + 0x1c))
    void* ebp_2
    int32_t* edi_2
    ebp_2, edi_2 = sub_4cda5c(0x64, 0, ebp_1 - 0xc)
    sub_47b650(*edi_2, *data_53071c, *(ebp_2 - 0xc), 0)
    void* ebp_3
    int32_t* edi_3
    ebp_3, edi_3 = sub_4cda5c(0xc8, 0, ebp_2 - 0x10)
    sub_47b650(*edi_3, *data_53071c, *(ebp_3 - 0x10), 0)
    int32_t* ebp_4
    int32_t* edi_4
    ebp_4, edi_4 = sub_4cda5c(0x1f4, 0, ebp_3 - 0x14)
    sub_47b650(*edi_4, *data_53071c, ebp_4[-5], 0)
    sub_47b488(*data_530a70, *(data_5301f0 + 0x1c), *edi_4, 0)
    sub_483950(*edi_4, *(data_5301f0 + 0x1c))
    sub_40401c(sub_4c0984(2, &ebp_4[-0x45]), &ebp_4[-0x45])
    sub_47b650(*edi_4, *data_530a70, ebp_4[-1], 0)
    sub_40401c(sub_4c0984(4, &ebp_4[-0x45]), &ebp_4[-0x45])
    sub_47b650(*edi_4, *data_530a70, ebp_4[-1], 0)
    sub_40401c(sub_4c0984(0xa, &ebp_4[-0x45]), &ebp_4[-0x45])
    sub_47b650(*edi_4, *data_530a70, ebp_4[-1], 0)
    *(ebp_4 - 5) = 1
    int32_t esi_2 = *data_53071c
    int32_t esi_3 = esi_2 - 1
    
    if (add_overflow(esi_2, 0xffffffff))
        sub_403010()
        noreturn
    
    int32_t ebx_2 = *data_530890
    
    if (add_overflow(ebx_2, 3))
        sub_403010()
        noreturn
    
    if (ebx_2 + 3 s>= esi_3)
        int32_t i_1 = ebx_2 + 3 - esi_3 + 1
        int32_t i
        
        do
            void* eax_33
            
            if (*(ebp_4 - 5) == 0 || *data_530144 != 0)
                eax_33 = nullptr
            else
                eax_33.b = 1
            
            sub_47a180(esi_3, *(data_5301f0 + 0x1c), *edi_4, eax_33.b)
            esi_3 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *edi_4
    sub_4d9f6c()
    fsbase->NtTib.ExceptionList = 0
    sub_403e1c(&ebp_4[-5], 3)
    sub_403df8(&ebp_4[-1])
    *ebp_4
    return &ebp_4[-1]
}
