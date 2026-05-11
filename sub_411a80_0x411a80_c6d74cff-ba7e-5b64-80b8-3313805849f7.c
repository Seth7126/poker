// ============================================================
// 函数名称: sub_411a80
// 虚拟地址: 0x411a80
// WARP GUID: c6d74cff-ba7e-5b64-80b8-3313805849f7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_411b8c, sub_403df8, sub_404280, sub_404078
// [被调用的父级函数]: sub_4ad707, sub_4ad140, sub_4ad27c, sub_4ad714, sub_4ad8c0
// ============================================================

void* __convention("regparm")sub_411a80(int32_t* arg1, int32_t arg2, char** arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t var_10 = 0
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_1
    void* ebp_1
    eax_1, ebp_1 = sub_411b8c(arg1)
    
    if (eax_1 s< 0)
        sub_403df8(*(ebp_1 - 8))
    else
        (*(*arg1 + 0xc))(*(ebp_1 - 8))
        sub_404280(0x7fffffff, sub_404078(*(ebp_1 - 4)) + 2, *(ebp_1 - 0xc), arg3)
        struct _EXCEPTION_REGISTRATION_RECORD* __saved_edx
        esp = &__saved_edx
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_411b06
    sub_403df8(ebp_1 - 0xc)
    return ebp_1 - 0xc
}
