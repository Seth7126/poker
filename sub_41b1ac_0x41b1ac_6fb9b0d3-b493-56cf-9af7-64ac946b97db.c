// ============================================================
// 函数名称: sub_41b1ac
// 虚拟地址: 0x41b1ac
// WARP GUID: 6fb9b0d3-b493-56cf-9af7-64ac946b97db
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_4128c0, sub_403018, sub_4030a0, sub_408968
// [被调用的父级函数]: sub_41b19f, sub_453e6c
// ============================================================

int32_t __convention("regparm")sub_41b1ac(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t eax_1
    int32_t eax_3
    
    if (arg2 != 0)
        eax_1 = sub_403018(arg1)
        eax_3 = sub_403018(arg2)
    
    if (arg2 != 0 && eax_1 == eax_3)
        eax_3.b = 1
    else
        eax_3 = 0
    
    char result = eax_3.b
    
    if ((*(*arg1 + 0x1c))() == 0)
        char eax_7
        int32_t ecx_1
        int32_t edx_2
        eax_7, edx_2, ecx_1 = (*(*arg2 + 0x1c))()
        
        if (eax_7 == 0)
            if (result == 0)
                return result
            
            edx_2.b = 1
            int32_t var_c = sub_4030a0(ecx_1, edx_2)
            int32_t* var_20 = &var_4
            int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
            TEB* fsbase
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            int32_t ecx_3
            int32_t edx_6
            edx_6, ecx_3 = (*(*arg1 + 0x44))(ExceptionList, var_24, var_20)
            edx_6.b = 1
            int32_t var_10 = sub_4030a0(ecx_3, edx_6)
            int32_t* var_c_1 = &var_4
            int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_4037f0
            int32_t __saved_ebx
            fsbase->NtTib.ExceptionList = &__saved_ebx
            (*(*arg2 + 0x44))(fsbase->NtTib.ExceptionList, var_10_1, var_c_1)
            int32_t eax_18 = sub_4128c0(var_c_1)
            int32_t eax_20 = sub_4128c0(var_10_1)
            char eax_26
            
            if (eax_18 == eax_20)
                int32_t eax_22 = sub_4128c0(var_c_1)
                eax_26 = sub_408968(var_c_1[1], *(var_10_1 + 4), eax_22)
            
            if (eax_18 == eax_20 && eax_26 != 0)
                eax_26 = 1
            else
                eax_26 = 0
            
            char var_5 = eax_26
            int32_t var_8
            fsbase->NtTib.ExceptionList = var_8
            __return_addr = sub_41b2c7
            return sub_4030d0(var_10_1)
    
    if ((*(*arg1 + 0x1c))() != 0 && (*(*arg2 + 0x1c))() != 0)
        return 1
    
    return 0
}
