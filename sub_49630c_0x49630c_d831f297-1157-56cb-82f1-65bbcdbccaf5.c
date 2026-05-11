// ============================================================
// 函数名称: sub_49630c
// 虚拟地址: 0x49630c
// WARP GUID: d831f297-1157-56cb-82f1-65bbcdbccaf5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40b5a8, sub_40ac70, sub_495150, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_49630c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t var_20 = 0
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg2 + 4) == arg1[0xb])
        arg1[0xb] = 0
        
        if (*(arg2 + 0xa) != 0)
            arg1[1]
            (*(*arg1 + 8))()
            sub_40ac70(zx.d(*(arg2 + 0xa)), &var_20)
            int32_t var_1c = var_20
            char var_18 = 0xb
            uint32_t var_14 = zx.d(*(arg2 + 0xa))
            char var_10 = 0
            void* const var_c = &data_496428
            char var_8 = 0xb
            int32_t edx_2
            edx_2.b = 1
            sub_40b5a8(0x4940dc, edx_2, data_530808, 2, &var_1c)
            sub_403828()
            noreturn
        
        char eax_1 = *(arg1 + 0x29)
        
        if (eax_1 == 1)
            arg1[7] = ***(arg1[0x11] + 0xc)
            int32_t eax_10
            eax_10.w = arg1[0x14].w
            int32_t eax_11
            eax_11.b = *(arg1 + 0x52)
            sub_495150(0, 0, arg1, eax_11, arg1[0x15], eax_10.w, arg1[0x13])
        else if (eax_1 == 2)
            void* eax_13
            eax_13.w = *(arg1[0x11] + 8)
            *(arg1 + 0x1a) = eax_13.w
            arg1[0x14].w = 0
            sub_403df8(&arg1[0x13])
            int32_t eax_15
            eax_15.b = *(arg1 + 0x52)
            sub_495150(0, 0, arg1, eax_15, arg1[0x15], 0, 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_49641a
    int32_t* result = &var_20
    sub_403df8(result)
    return result
}
