// ============================================================
// 函数名称: sub_44c2b0
// 虚拟地址: 0x44c2b0
// WARP GUID: c6d455a7-c85c-52d9-813b-bef5c062969f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4303b8, sub_4038c8, sub_42affc, sub_42afdc
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_44c2b0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* result
    int32_t* ebp_1
    
    if (arg1[0x13].b == 0)
        result, ebp_1 = sub_4303b8(arg1, arg2)
    else
        arg1[0x7e].b = 1
        int32_t* var_2c = &var_4
        int32_t (* var_30_1)(void* arg1, void* arg2) = j_sub_4037f0
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        int32_t var_1c
        __builtin_memcpy(&var_1c, *(arg2 + 4) + 0x44, 0x10)
        int32_t* eax_4
        eax_4.b = *(arg1 + 0x4b)
        char temp0_1 = eax_4.b
        eax_4.b -= 1
        int32_t var_18
        int32_t var_10
        
        if (temp0_1 != 1)
            char temp1_1 = eax_4.b
            eax_4.b -= 1
            
            if (temp1_1 != 1)
                char temp2_1 = eax_4.b
                eax_4.b -= 1
                int32_t var_14
                
                if (temp2_1 != 1)
                    char temp3_1 = eax_4.b
                    eax_4.b -= 1
                    
                    if (temp3_1 == 1 && arg1[0xe] == 0)
                        arg1[0xd]
                        arg1[0xc]
                        (*(*arg1 + 0x7c))(arg1[0xf], var_14 - var_1c)
                else if (arg1[0xe] == 0)
                    sub_42afdc(arg1, var_14 - var_1c)
            else if (arg1[0xf] == 0)
                arg1[0xd]
                arg1[0xc]
                (*(*arg1 + 0x7c))(var_10 - var_18, arg1[0xe])
        else if (arg1[0xf] == 0)
            sub_42affc(arg1, var_10 - var_18)
        ebp_1 = sub_4303b8(arg1, arg2)
        result = sub_4038c8(ExceptionList, var_30_1)
    
    *ebp_1
    return result
}
