// ============================================================
// 函数名称: sub_4a90cc
// 虚拟地址: 0x4a90cc
// WARP GUID: 60b54271-5bf8-5570-9f08-e34344ba07f4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a3c90, sub_403e90, sub_49aef8, sub_4a6b54, sub_4a39d4, sub_4a3b70, sub_403e4c, sub_4a9498, sub_4a8f18, sub_4a30d8, sub_49ada4, sub_4a951c, sub_4a557c, sub_49b718, sub_4a3488, sub_403df8
// [被调用的父级函数]: sub_4ab014, sub_4ab06a
// ============================================================

void* __convention("regparm")sub_4a90cc(void* arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, char* arg8)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    int32_t var_20 = 0
    int32_t var_14 = 0
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_1
    eax_1.b = *(sub_4a9498(arg1) + 0x74)
    int32_t edi_1
    
    if (eax_1.b - 1 u>= 3)
        sub_403e90(&var_14, arg2)
        edi_1 = arg3
    else
        sub_403e90(&var_14, *(sub_4a9498(arg1) + 0x64))
        edi_1 = *(sub_4a9498(arg1) + 0x6c)
    
    char* var_3c = arg8
    int32_t var_40 = arg7
    int32_t var_44 = arg6
    int32_t var_48 = arg5
    int32_t var_4c = arg4
    int32_t* ebx_1 = *(arg1 + 0x68)
    sub_4a39d4(ebx_1, 1, 0)
    sub_403e4c(&ebx_1[5], arg8)
    ebx_1[7] = arg7
    ebx_1[9] = arg6
    ebx_1[0xa] = arg5
    void* ebp_1 = sub_4a3b70(ebx_1)
    *data_5308e0
    *(ebp_1 - 0x10)
    
    if (sub_49b718() == 0)
        int32_t var_c_1 = 0
        *(ebp_1 - 0x18) = *(ebp_1 - 0x10)
        *(ebp_1 - 0x14) = 0xb
        ebp_1, edi_1 = sub_4a3488(*(ebp_1 - 4), 0, ebp_1 - 0x18, var_c_1)
    
    sub_49aef8(*data_5308e0, *(ebp_1 - 0x10), ebp_1 - 0x1c)
    sub_4a3c90(*(*(ebp_1 - 4) + 0x68), *(ebp_1 - 0x1c), edi_1)
    sub_4a951c(*(ebp_1 - 4), *(*(ebp_1 - 4) + 0x6c))
    int32_t var_c_2 = 0
    *(ebp_1 - 0x18) = *(*(*(ebp_1 - 4) + 0x68) + 0x18)
    *(ebp_1 - 0x14) = 0xb
    int32_t edx_8
    edx_8.b = 1
    void* edx_9
    void* ebp_2
    uint32_t esi_2
    edx_9, ebp_2, esi_2 = sub_4a3488(*(ebp_1 - 4), edx_8, ebp_1 - 0x18, var_c_2)
    
    if (esi_2 == 0xffffffff || esi_2 == 0)
        char eax_37
        void* edx_10
        eax_37, edx_10 = sub_4a30d8()
        
        if (eax_37 == 0)
            (*(**(*(ebp_2 - 4) + 0x68) + 0x20))(arg1)
            *data_5308e0
            sub_49ada4()
        else
            void* var_c_3 = ebp_2
            ebp_2 = sub_4a8f18(0x1d4c0, edx_10)
    else
        void* var_c_4 = ebp_2
        ebp_2 = sub_4a8f18(esi_2, edx_9)
    
    void* eax_45 = sub_4a9498(*(ebp_2 - 4))
    *(ebp_2 - 0xc)
    *(ebp_2 - 8)
    sub_4a6b54(eax_45)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4a928c
    sub_403df8(ebp_2 - 0x1c)
    sub_403df8(ebp_2 - 0x10)
    return ebp_2 - 0x10
}
