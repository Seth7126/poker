// ============================================================
// 函数名称: sub_495f94
// 虚拟地址: 0x495f94
// WARP GUID: 6d2e79aa-5eeb-5a45-ae73-0f61c46e639f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WSAGetLastError, send
// [内部子函数调用]: sub_4032ac, sub_403828, sub_40b5a8, sub_40ac70, sub_4038c8, sub_4953dc, sub_4953e8, sub_403df8
// [被调用的父级函数]: sub_515920, sub_497dd4
// ============================================================

int32_t* __convention("regparm")sub_495f94(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_30 = ebx
    int32_t esi
    int32_t var_34 = esi
    int32_t var_2c = 0
    int32_t* var_38 = &var_4
    int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4953dc(arg1)
    int32_t* var_44 = &var_4
    int32_t (* var_48)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c = 0
    
    if (arg1[2].b == 0)
        sub_4038c8(ExceptionList, var_48)
        fsbase->NtTib.ExceptionList = ExceptionList_1
        int32_t (* var_38_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4960bd
        int32_t* result = &var_2c
        sub_403df8(result)
        return result
    
    if (send(arg1[1], arg2, arg3, 0) == 0xffffffff)
        uint32_t eax_5
        int32_t ecx
        eax_5, ecx = WSAGetLastError(arg1)
        uint32_t var_10 = eax_5
        
        if (var_10 != 0x2733)
            ecx.b = 1
            int32_t ebx_1
            ebx_1.w = 0xfffe
            sub_4032ac(arg1, arg1, ecx, &var_10)
            arg1[1]
            (*(*arg1 + 8))()
            
            if (var_10 != 0)
                sub_40ac70(var_10, &var_2c)
                int32_t var_28 = var_2c
                char var_24 = 0xb
                uint32_t var_20 = var_10
                char var_1c = 0
                void* const var_18 = "send"
                char var_14 = 0xb
                int32_t* var_c_3 = &var_28
                var_10 = 2
                int32_t edx_3
                edx_3.b = 1
                sub_40b5a8(0x4940dc, edx_3, data_530808, var_10, var_c_3)
                sub_403828()
                noreturn
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_4960a0
    return sub_4953e8(arg1)
}
