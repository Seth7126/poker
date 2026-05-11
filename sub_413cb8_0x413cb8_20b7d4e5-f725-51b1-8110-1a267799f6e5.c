// ============================================================
// 函数名称: sub_413cb8
// 虚拟地址: 0x413cb8
// WARP GUID: 20b7d4e5-f725-51b1-8110-1a267799f6e5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4156c0
// [被调用的父级函数]: sub_413f0c
// ============================================================

int32_tsub_413cb8(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    int32_t (* var_18)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* ecx
    int32_t* eax_3 = sub_4156c0(*(arg1 - 0xc), *(arg1 - 0x14), ecx)
    *(arg1 - 0x10) = 0
    
    if (*(*(arg1 - 0xc) + 0x6a) != 0)
        void* esi_1 = *(arg1 - 0xc)
        *(arg1 - 0xc)
        *(esi_1 + 0x6c)
        (*(esi_1 + 0x68))(arg1 - 0x10)
    
    if (*(arg1 - 0x10) == 0)
        *(arg1 - 0x10) = eax_3[-3]()
        
        if ((*(arg1 - 1) & 4) != 0)
            void* eax_17 = *(arg1 - 0x10)
            *(eax_17 + 0x20) |= 1
            void* eax_19 = *(arg1 - 0x10)
            *(eax_19 + 0x20) |= 0x200
        
        int32_t* var_20_2 = &__saved_ebp
        int32_t (* var_24_1)() = j_sub_40353c
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        *(*(arg1 - 0xc) + 0x28)
        (*(**(arg1 - 0x10) + 0x2c))(ExceptionList, var_24_1, var_20_2)
        fsbase->NtTib.ExceptionList = ExceptionList
    
    void* eax_25 = *(arg1 - 0x10)
    *(eax_25 + 0x20) |= 1
    fsbase->NtTib.ExceptionList = ExceptionList_1
    return 0
}
