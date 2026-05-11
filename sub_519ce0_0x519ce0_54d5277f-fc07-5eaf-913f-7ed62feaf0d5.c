// ============================================================
// 函数名称: sub_519ce0
// 虚拟地址: 0x519ce0
// WARP GUID: 54d5277f-fc07-5eaf-913f-7ed62feaf0d5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_519df0, sub_51ad40, sub_40422c, sub_403df8, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_5193d0
// ============================================================

void* __convention("regparm")sub_519ce0(void* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(*data_530304 + 0xcf9) == 0)
        if (arg3 != 0xffffffff)
            int32_t ebx_1 = *(arg1 + 0x974)
            int32_t eax_6
            
            if (*data_5300d0 s<= 2 || arg3 == 1)
                eax_6 = 0
            else
                if (add_overflow(arg3, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                int32_t eax_9 = (arg3 - 2) * 2
                bool o_2 = unimplemented  {imul eax, eax, 0x2}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                int32_t edx_2 = *data_5300d0
                
                if (add_overflow(edx_2, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_9, neg.d(edx_2 - 2)))
                    sub_403010()
                    noreturn
                
                int32_t eax_12 = *data_5300d0
                
                if (add_overflow(eax_12, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                eax_6 =
                    sub_402b4c(float.t(eax_9 - (edx_2 - 2)) / float.t(eax_12 - 2) * fconvert.t(100f))
            
            int32_t var_30_2 = 0
            ebp_1 = sub_519df0(arg1, var_8, arg3, arg3, arg1, arg4, 1, eax_6, ebx_1)
            esp = &var_8
        else
            int32_t var_30_1 = 0
            sub_51ad40(*data_5303b8, arg4)
            esp = &ExceptionList
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_519ddf
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
