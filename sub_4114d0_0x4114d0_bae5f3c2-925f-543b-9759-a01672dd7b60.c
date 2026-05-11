// ============================================================
// 函数名称: sub_4114d0
// 虚拟地址: 0x4114d0
// WARP GUID: bae5f3c2-925f-543b-9759-a01672dd7b60
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4115f8, sub_4116b4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4114d0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t* var_10 = nullptr
    int32_t* var_c = arg2
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4115f8(arg1)
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi_2 =
        (*(*var_c + 0x14))(ExceptionList, var_30, var_2c, ExceptionList_1, var_24, var_20) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            (*(*var_c + 0xc))(arg1)
            var_c = var_10
            (*(*var_c + 0x18))(var_c)
            (*(*arg1 + 0x38))()
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_411561
    return sub_4116b4(arg1)
}
