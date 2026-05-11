// ============================================================
// 函数名称: sub_43c320
// 虚拟地址: 0x43c320
// WARP GUID: 9fd15a54-c642-577e-b42a-3741c086616c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404308, sub_404078, sub_404138, sub_404188, sub_403e1c, sub_404280
// [被调用的父级函数]: sub_43c480
// ============================================================

int32_t __convention("regparm")sub_43c320(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t var_14 = 0
    char* var_10 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD* var_c = arg3
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char ebx_1 = 0
    int32_t i_1 = sub_404078(*arg1)
    
    if (i_1 s> 0)
        int32_t edi_1 = 1
        int32_t i
        
        do
            int32_t edx
            edx.b = *(*arg1 + edi_1 - 1)
            
            if (test_bit(*data_530a44, edx & 0xff))
                ebx_1 = 1
                break
            
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (ebx_1 != 0)
        int32_t edx_3 = sub_404078(*arg1) - 3
        sub_404280(3, edx_3 + 1, *arg1, &var_10)
        sub_404188(var_10, &data_43c458)
        
        if (edx_3 != 0xffffffff)
            int32_t var_30_4 = *arg1
            void* const var_34_2 = &data_43c464
            void* const var_38_2 = &data_43c470
            struct _EXCEPTION_REGISTRATION_RECORD* var_3c_2 = var_8
            void* const var_40_2 = &data_43c47c
            sub_404138(arg1, 5)
            esp = &var_8
        else
            sub_404280(sub_404078(*arg1) - 3, 1, *arg1, &var_14)
            int32_t var_30_3 = var_14
            void* const var_34_1 = &data_43c464
            void* const var_38_1 = &data_43c470
            struct _EXCEPTION_REGISTRATION_RECORD* var_3c_1 = var_8
            void* const var_40_1 = &data_43c47c
            void* const var_44_1 = &data_43c458
            sub_404138(arg1, 6)
            esp = &var_c
    else if (var_c != 0)
        sub_404308(&data_43c470, arg1, var_c)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_43c449
    return sub_403e1c(&var_14, 2)
}
