// ============================================================
// 函数名称: sub_411db4
// 虚拟地址: 0x411db4
// WARP GUID: 2caa9d60-6cd1-5ff4-9c48-94fefc0ab799
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_411c84, sub_403df8, sub_4115f8, sub_4116b4
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_411db4(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t var_c = 0
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    
    if (arg3 == arg2)
        fsbase->NtTib.ExceptionList = ExceptionList_1
        int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) =
            sub_411e5c
        int32_t* result = &var_c
        sub_403df8(result)
        return result
    
    sub_4115f8(arg1)
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0xc))(ExceptionList, var_2c, var_28)
    int32_t eax_3 = (*(*arg1 + 0x18))(arg1)
    (*(*arg1 + 0x44))()
    var_c = eax_3
    sub_411c84(arg1, var_c)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_411e3f
    return sub_4116b4(arg1)
}
