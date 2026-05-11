// ============================================================
// 函数名称: sub_41bda8
// 虚拟地址: 0x41bda8
// WARP GUID: bfba5515-0358-5e55-a725-65cf5072b872
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_41b6a8, sub_4030d0, sub_40401c, sub_403df8, sub_4032c4
// [被调用的父级函数]: sub_41bf98
// ============================================================

void* __convention("regparm")sub_41bda8(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_50 = ebx
    int32_t esi
    int32_t var_54 = esi
    int32_t edi
    int32_t var_58 = edi
    void* var_4c = nullptr
    int32_t* var_5c = &var_4
    int32_t (* var_60)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg2 + 4))(ExceptionList, var_60, var_5c)
    char var_48
    int32_t ecx_1
    ecx_1.b = var_48
    sub_40401c((*(*arg2 + 4))(), &var_48)
    void** eax_3
    void* ebp_1
    eax_3, ebp_1 = sub_41b6a8(data_52e620, var_4c)
    *(ebp_1 - 4) = 0
    
    if (eax_3 != 0)
        int32_t edx_2
        edx_2.b = 1
        *(ebp_1 - 4) = eax_3[3]()
        int32_t (* var_10_1)() = j_sub_40353c
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_1
        (*(**(ebp_1 - 4) + 0x30))(ExceptionList_1, var_10_1, ebp_1)
        fsbase->NtTib.ExceptionList = ExceptionList_1
    
    sub_4030d0(arg1[1])
    arg1[1] = *(ebp_1 - 4)
    
    if (*(ebp_1 - 4) != 0)
        void* eax_8 = *(ebp_1 - 4)
        *(eax_8 + 0xc) = arg1
        int32_t edx_5
        edx_5.w = 0xfffd
        *(eax_8 + 8) = sub_4032c4(arg1, edx_5)
        void* eax_12 = *(ebp_1 - 4)
        *(eax_12 + 0x14) = arg1
        int32_t edx_6
        edx_6.w = 0xfffc
        *(eax_12 + 0x10) = sub_4032c4(arg1, edx_6)
    
    int32_t* ebx_1
    ebx_1.w = 0xfffd
    sub_4032ac(arg1, arg1)
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = &data_41beb6
    sub_403df8(ebp_1 - 0x48)
    return ebp_1 - 0x48
}
