// ============================================================
// 函数名称: sub_49f478
// 虚拟地址: 0x49f478
// WARP GUID: 1a6b8c87-5617-5a0f-9df2-bde40f083ee1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408bb8, sub_4088f0, sub_403e4c, sub_403e1c, sub_404280, sub_403010
// [被调用的父级函数]: sub_49f684, sub_49f548, sub_49f1c0
// ============================================================

int32_t __convention("regparm")sub_49f478(int32_t* arg1, int32_t arg2, void** arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    char** var_c = nullptr
    int32_t var_10 = 0
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0xc))(ExceptionList, var_24, var_20)
    
    if (arg1[0xd].b == 0)
        sub_4088f0(*arg3, &var_c)
        sub_403e4c(arg3, var_c)
    
    sub_408bb8(arg1[0xc], &var_10)
    *arg3
    int32_t eax_5 = (*data_530000)(arg2)
    var_c = arg3
    
    if (add_overflow(eax_5, 0xffffffff))
        sub_403010()
        noreturn
    
    sub_404280(eax_5 - 1, 1, *arg3, var_c)
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_49f516
    return sub_403e1c(&var_10, 2)
}
