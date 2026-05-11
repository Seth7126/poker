// ============================================================
// 函数名称: sub_4102e4
// 虚拟地址: 0x4102e4
// WARP GUID: 8d37e783-dd74-52c2-92c5-b3409705c084
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410138, sub_403018, sub_4101c8, sub_410198, sub_41023c, sub_40c9e0
// [被调用的父级函数]: sub_442414
// ============================================================

void* __convention("regparm")sub_4102e4(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t edx
    int32_t var_c = edx
    sub_40c9e0(data_531618)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* eax_1
    eax_1.w = arg1[8].w
    eax_1.w &= 0x201
    void* edx_1
    edx_1.w = 0
    
    if (0 == eax_1.w)
        edx_1 = sub_410138()
    
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_2c = &var_4
    char eax_4
    void* ebp_1
    eax_4, ebp_1 = sub_41023c(sub_403018(arg1), edx_1)
    *(ebp_1 - 9) = eax_4
    
    if (*(ebp_1 - 0xa) != 0)
        sub_410198()
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_41037a
    
    if (*(ebp_1 - 0xa) == 0)
        return nullptr
    
    return sub_4101c8()
}
