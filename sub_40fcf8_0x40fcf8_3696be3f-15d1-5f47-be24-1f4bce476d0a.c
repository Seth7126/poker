// ============================================================
// 函数名称: sub_40fcf8
// 虚拟地址: 0x40fcf8
// WARP GUID: 3696be3f-15d1-5f47-be24-1f4bce476d0a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40fb5c, sub_4103c8, sub_410948, sub_40b5a8, sub_403058, sub_4108e4, sub_40401c, sub_40301c, sub_410580
// [被调用的父级函数]: sub_40fdf4
// ============================================================

int32_t __convention("regparm")sub_40fcf8(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_114 = ebx
    int32_t esi
    int32_t var_118 = esi
    void* var_8 = nullptr
    int32_t* ebx_1 = arg1
    int32_t* var_11c = &var_4
    int32_t (* var_120)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* eax_1 = sub_4108e4(data_531624)
    int32_t* var_128 = &var_4
    int32_t (* var_12c)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    while (true)
        if (sub_410580(eax_1, ebx_1) != 0xffffffff)
        label_40fdb6:
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t* (* var_128_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) =
                sub_40fdd0
            return sub_410948(data_531624)
        
        char var_108[0x100]
        sub_40401c(sub_40301c(ebx_1, &var_108), &var_108)
        char* eax_4
        int32_t edx_3
        eax_4, edx_3 = sub_40fb5c(var_8)
        
        if (eax_4 != 0)
            void* var_110 = var_8
            char var_10c = 0xb
            edx_3.b = 1
            sub_40b5a8(sub_40e812-0x52, edx_3, data_5306c4, 0, &var_110)
            sub_403828()
            noreturn
        
        sub_4103c8(eax_1, ebx_1)
        
        if (ebx_1 == 0x40ecb8)
            goto label_40fdb6
        
        ebx_1 = sub_403058(ebx_1)
}
