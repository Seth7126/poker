// ============================================================
// 函数名称: sub_4b4e78
// 虚拟地址: 0x4b4e78
// WARP GUID: 27bbf27a-6242-5117-933a-aec974d8d66c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_40c05c, sub_4b4e2c, sub_4318d0, sub_40423c, sub_403df8, sub_425b2c
// [被调用的父级函数]: sub_4b526c
// ============================================================

int32_t* __convention("regparm")sub_4b4e78(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4b4e2c(arg1, &var_8)
    int32_t eax_2
    void* ebp_1
    int32_t esi_2
    eax_2, ebp_1, esi_2 = sub_40c05c(arg2, var_8)
    
    if (eax_2 != 0)
        LPARAM lParam = sub_40423c(esi_2)
        sub_425b2c(arg1, SendMessageA(sub_4318d0(arg1), 0x1a2, 0, lParam))
        (*(*arg1 + 0xc0))()
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4b4ef5
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
