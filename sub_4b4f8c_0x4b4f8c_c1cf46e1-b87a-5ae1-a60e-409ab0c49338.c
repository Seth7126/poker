// ============================================================
// 函数名称: sub_4b4f8c
// 虚拟地址: 0x4b4f8c
// WARP GUID: c1cf46e1-b87a-5ae1-a60e-409ab0c49338
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419acc, sub_41932c, sub_41e04c, sub_40fac8, sub_4198d0, sub_419720, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void** __convention("regparm")sub_4b4f8c(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_48 = ebx
    int32_t esi
    int32_t var_4c = esi
    int32_t edi
    int32_t var_50 = edi
    void* var_44 = nullptr
    RECT var_20
    __builtin_memcpy(&var_20, arg3, 0x10)
    int32_t* var_54 = &var_4
    int32_t (* var_58)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax = *(arg1 + 0x1f8)
    sub_419720(eax, &var_20)
    int32_t var_c = 2
    
    if (*(arg1 + 0x26c) != 0)
        int32_t* eax_3 = (*(**(arg1 + 0x1f0) + 0x18))()
        
        if (eax_3 != 0)
            void var_30
            sub_40fac8((*(*eax_3 + 0x2c))(&var_30, (*(*eax_3 + 0x20))()), 0, 0)
            int32_t eax_10 = (*(*eax_3 + 0x20))(&var_30) - 1
            int32_t var_40[0x4]
            int32_t eax_17 = (*(*eax_3 + 0x2c))(&var_40, 
                (*(*eax_3 + 0x20))(sub_419acc(sub_41e04c(eax_3), 0, eax_10)))
            int32_t eax_19 = (*(*eax_3 + 0x20))(eax_17)
            int32_t edx_10 = var_20.top + var_20.bottom - eax_19
            int32_t edx_11 = edx_10 s>> 1
            bool c_1 = unimplemented  {sar edx, 0x1}
            
            if (edx_10 s>> 1 s< 0)
                edx_11 = adc.d(edx_11, 0, c_1)
            
            sub_40fac8(eax_17, edx_11, var_20.left + 2)
            int32_t var_c_1 = (*(*sub_41932c(eax_3, &var_40, eax) + 0x2c))() + 6
    
    (*(**(arg1 + 0x1f0) + 0xc))()
    void* eax_27 = var_44
    sub_4198d0(var_20.top, var_20.left + eax_27, eax, eax_27)
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_4b50c7
    void** result = &var_44
    sub_403df8(result)
    return result
}
