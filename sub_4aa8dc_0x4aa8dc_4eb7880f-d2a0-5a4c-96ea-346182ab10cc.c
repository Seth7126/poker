// ============================================================
// 函数名称: sub_4aa8dc
// 虚拟地址: 0x4aa8dc
// WARP GUID: 4eb7880f-d2a0-5a4c-96ea-346182ab10cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410948, sub_410524, sub_4108e4
// [被调用的父级函数]: sub_4aa9c8
// ============================================================

int32_tsub_4aa8dc(int32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t* eax_1 = sub_4108e4(data_5325f0)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = sub_410524(eax_1, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4aa927
    return sub_410948(data_5325f0)
}
