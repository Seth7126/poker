// ============================================================
// 函数名称: sub_516544
// 虚拟地址: 0x516544
// WARP GUID: a29bc113-2a99-57ab-8bb1-c2657fc077e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49732c, sub_4974fc, sub_40422c, sub_4975e8, sub_512f00, sub_403df8, sub_4973d8, sub_4972ac, sub_514cc4, sub_5164e8, sub_512e7c
// [被调用的父级函数]: sub_4e6659, sub_511e1c, sub_50732c, sub_4e649b
// ============================================================

void* __convention("regparm")sub_516544(void* arg1, int32_t arg2, void* arg3, char arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    void* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    sub_40422c(arg3)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_24 = &var_4
    int32_t (* var_28)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x345) == 0)
        sub_5164e8(arg1, 0, arg3)
        *(arg1 + 0x58) = 0
        *(arg1 + 0x344) = 0
        *(arg1 + 0x345) = 1
        sub_512f00(arg1)
        
        if (arg4 == 0)
            sub_512e7c(arg3, arg1 + 0x3640)
        
        *data_530660
        int32_t* eax_4 = sub_4974fc(sub_4947f8+0x48, 1)
        *(arg1 + 0x94) = eax_4
        void* ecx_2 = sub_4975e8(eax_4)
        void* eax_6 = *(arg1 + 0x94)
        *(eax_6 + 0x7c) = arg1
        *(eax_6 + 0x78) = sub_516c3c
        sub_49732c(eax_6, arg2)
        void* ecx_3
        int32_t ebx_3
        ecx_3, ebx_3, ebp_1 = sub_4972ac(*(arg1 + 0x94), arg3, ecx_2)
        
        if (arg2 == 0)
            sub_49732c(*(arg1 + 0x94), 0x4d2)
        
        if (ebp_1[-1] == 0)
            ebx_3, ebp_1 = sub_4972ac(*(arg1 + 0x94), "localhost", ecx_3)
        
        void* eax_10 = *(arg1 + 0x94)
        *(eax_10 + 0x44) = arg1
        *(eax_10 + 0x40) = 0x51683c
        *(eax_10 + 0x54) = arg1
        *(eax_10 + 0x50) = 0x5168b8
        *(eax_10 + 0x6c) = arg1
        *(eax_10 + 0x68) = 0x516ac4
        sub_4973d8()
        ebx_3.b = 1
        sub_514cc4(arg1, "c_create.")
    
    if (ebp_1[2].b == 0)
        *(arg1 + 0x54) = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_5166a4
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
