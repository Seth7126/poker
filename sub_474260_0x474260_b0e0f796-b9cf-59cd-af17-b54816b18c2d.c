// ============================================================
// 函数名称: sub_474260
// 虚拟地址: 0x474260
// WARP GUID: b0e0f796-b9cf-59cd-af17-b54816b18c2d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_40422c, sub_47575c, sub_40b4b0
// [被调用的父级函数]: sub_469f7c, sub_5042ec, sub_503984
// ============================================================

int32_t* __convention("regparm")sub_474260(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    sub_40422c(arg2)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    edx.b = 1
    void* ebp_1 = sub_47575c(arg1, sub_40b4b0(0x407d24, edx, arg2))
    fsbase->NtTib.ExceptionList = 0
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2) = sub_4742b9
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
