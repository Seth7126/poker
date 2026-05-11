// ============================================================
// 函数名称: sub_497018
// 虚拟地址: 0x497018
// WARP GUID: 86895270-0e5f-557c-ace6-2d5d918ff0c9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_497168, sub_49718c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_497018(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    ebx.w = 0xfffc
    sub_4032ac(arg1[0xd], arg1)
    int32_t* var_14_1 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_20 = &var_4
    int32_t (* var_24)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char i
    
    do
        if (sub_497168(arg1) != 0)
            (*(*arg1 + 8))()
        
        i = sub_49718c(arg1)
    while (i == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    fsbase->NtTib.ExceptionList = ExceptionList_1
    ebx.w = 0xfffd
    return sub_4032ac(arg1[0xd], arg1, var_14_1, 0x4970ba)
}
