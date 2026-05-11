// ============================================================
// 函数名称: sub_4b18e4
// 虚拟地址: 0x4b18e4
// WARP GUID: 08256647-6fe8-56ec-858e-53472fb66016
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4afaf8, sub_412d78, sub_4030d0
// [被调用的父级函数]: sub_4b19b0
// ============================================================

void*sub_4b18e4(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t edx
    edx.b = 1
    int32_t* eax = sub_412d78(&data_40f3f0, edx, nullptr)
    void* eax_3 = *(*(arg1 - 4) + 0xc)
    int32_t edx_1 = *(eax_3 + 0x78)
    *(eax_3 + 0x78) = eax
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4afaf8(*(*(arg1 - 4) + 4), eax_3)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_4b1960
    sub_4030d0(eax)
    void* result = *(*(arg1 - 4) + 0xc)
    *(result + 0x78) = edx_1
    return result
}
