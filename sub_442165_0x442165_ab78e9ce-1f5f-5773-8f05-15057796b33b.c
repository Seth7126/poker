// ============================================================
// 函数名称: sub_442165
// 虚拟地址: 0x442165
// WARP GUID: ab78e9ce-1f5f-5773-8f05-15057796b33b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441d44
// [被调用的父级函数]: sub_4420f4
// ============================================================

void*sub_442165(void* arg1 @ ebp)
{
    // 第一条实际指令: *(*(arg1 - 4) + 0x200) = 1
    *(*(arg1 - 4) + 0x200) = 1
    void* var_4 = arg1
    int32_t (* var_8)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_441d44(*(arg1 - 4))
    fsbase->NtTib.ExceptionList = ExceptionList
    void* (__stdcall* var_4_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4421a4
    void* result = *(arg1 - 4)
    *(result + 0x200) = 0
    return result
}
