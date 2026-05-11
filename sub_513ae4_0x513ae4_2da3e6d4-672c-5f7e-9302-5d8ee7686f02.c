// ============================================================
// 函数名称: sub_513ae4
// 虚拟地址: 0x513ae4
// WARP GUID: 2da3e6d4-672c-5f7e-9302-5d8ee7686f02
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4748fc, sub_507d4c, sub_509af8, sub_50d2f4, sub_507dbc, sub_46910c, sub_403df8, sub_403e1c
// [被调用的父级函数]: sub_4e6659, sub_516c3c, sub_512df4, sub_514ef8, sub_511e1c, sub_51682b, sub_5168a7, sub_4e649b
// ============================================================

int32_t __fastcallsub_513ae4(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x1c)
    int32_t ebx
    int32_t var_24 = ebx
    int32_t __saved_eax
    int32_t __saved_eax_1 = __saved_eax
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8
    
    if (arg2 s< 0x65 || arg2 s> 0xc8)
        switch (arg2)
            case 1
                if (sub_50d2f4() == 0)
                    ebp_1 = sub_46910c(*data_530304, 0x513dd4, &var_8)
                else
                    ebp_1 = sub_46910c(*data_530304, "f_1s", &var_8)
            case 2
                *data_530454
                
                if (sub_50d2f4() == 0)
                    int32_t var_18
                    struct _EXCEPTION_REGISTRATION_RECORD* ecx_10
                    int32_t edx_3
                    ecx_10, edx_3, ebp_1 = sub_46910c(*data_530304, 0x513df0, &var_18)
                    sub_509af8(ebp_1[-5], edx_3, ecx_10)
                    sub_403df8(&ebp_1[-1])
                else
                    ebp_1 = sub_46910c(*data_530304, "f_2s", &var_8)
                    sub_507dbc(2)
            case 3
                ebp_1 = sub_46910c(*data_530304, 0x513dfc, &var_8)
            case 4
                *data_530454
                
                if (sub_50d2f4() == 0)
                    int32_t var_1c
                    struct _EXCEPTION_REGISTRATION_RECORD* ecx_14
                    int32_t edx_4
                    ecx_14, edx_4, ebp_1 = sub_46910c(*data_530304, 0x513e18, &var_1c)
                    sub_509af8(ebp_1[-6], edx_4, ecx_14)
                    sub_403df8(&ebp_1[-1])
                else
                    ebp_1 = sub_46910c(*data_530304, "f_4h", &var_8)
                    sub_507dbc(2)
            case 5
                ebp_1 = sub_46910c(*data_530304, 0x513e24, &var_8)
            case 6
                ebp_1 = sub_46910c(*data_530304, 0x513e30, &var_8)
            case 7
                ebp_1 = sub_46910c(*data_530304, 0x513e3c, &var_8)
            case 0xa
                ebp_1 = sub_46910c(*data_530304, 0x513e48, &var_8)
    else if (arg2 == 0x67)
        int32_t var_c
        struct _EXCEPTION_REGISTRATION_RECORD* ecx_1
        int32_t edx
        ecx_1, edx, ebp_1 = sub_46910c(*data_530304, "f_103", &var_c)
        sub_509af8(ebp_1[-2], edx, ecx_1)
        sub_403df8(&ebp_1[-1])
    else if (arg2 == 0x66)
        if (*data_52ffbc == 0)
            int32_t var_10
            struct _EXCEPTION_REGISTRATION_RECORD* ecx_3
            int32_t edx_1
            ecx_3, edx_1, ebp_1 = sub_46910c(*data_530304, "f_102", &var_10)
            sub_509af8(ebp_1[-3], edx_1, ecx_3)
        
        sub_403df8(&ebp_1[-1])
    else if (arg2 == 0x65)
        int32_t var_14
        struct _EXCEPTION_REGISTRATION_RECORD* ecx_5
        int32_t edx_2
        ecx_5, edx_2, ebp_1 = sub_46910c(*data_530304, "f_101", &var_14)
        sub_509af8(ebp_1[-4], edx_2, ecx_5)
        sub_403df8(&ebp_1[-1])
    
    if (ebp_1[-1] != 0)
        int32_t var_38_1 = 0
        int32_t var_3c_1 = 0
        void* var_40_1 = nullptr
        struct _EXCEPTION_REGISTRATION_RECORD* var_44 = nullptr
        esp = &var_44
        sub_507d4c(&ebp_1[-7])
        sub_4748fc(*data_530304, ebp_1[-1], ebp_1[-7], var_44, var_40_1, var_3c_1)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_513d82
    return sub_403e1c(&ebp_1[-7], 7)
}
