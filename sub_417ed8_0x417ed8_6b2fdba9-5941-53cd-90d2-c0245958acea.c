// ============================================================
// 函数名称: sub_417ed8
// 虚拟地址: 0x417ed8
// WARP GUID: 6b2fdba9-5941-53cd-90d2-c0245958acea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_417d2c, sub_417e28, sub_417d44, sub_417d38
// [被调用的父级函数]: sub_418d80, sub_41889c, sub_419040
// ============================================================

int32_t __convention("regparm")sub_417ed8(void* arg1, void* arg2, char* arg3)
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
    sub_417d2c(arg1)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi_1 = *(arg2 + 0x10)
    int32_t eax_2
    int32_t* ebx_2
    void* ebp_1
    eax_2, ebx_2, ebp_1 = sub_417d44(arg1, arg3)
    ebx_2[4] = eax_2
    
    if (esi_1 != eax_2)
        int32_t* eax_3 = ebx_2
        ebx_2.w = 0xfffd
        sub_4032ac(eax_3)
    
    void* ebp_2 = sub_417e28(*(ebp_1 - 4), esi_1)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_417f48
    return sub_417d38(*(ebp_2 - 4))
}
