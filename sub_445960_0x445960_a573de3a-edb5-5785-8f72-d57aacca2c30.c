// ============================================================
// 函数名称: sub_445960
// 虚拟地址: 0x445960
// WARP GUID: a573de3a-edb5-5785-8f72-d57aacca2c30
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42fcd0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_445960(int32_t* arg1, void* arg2)
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
    void* ebx_1 = *(arg2 + 8)
    int32_t* eax
    eax.w = arg1[8].w
    eax.w &= 0xa
    int32_t eax_1
    
    if (0 != eax.w || (*(ebx_1 + 0x18) & 1) != 0
            || (*(ebx_1 + 0x10) == arg1[0xe] && *(ebx_1 + 0x14) == arg1[0xf]))
        eax_1 = 0
    else
        eax_1.b = 1
    
    *(arg1 + 0x212) = eax_1.b
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_42fcd0(arg1, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_4459ea
    *(arg1 + 0x212) = 0
    return arg1
}
