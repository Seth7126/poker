// ============================================================
// 函数名称: sub_49d474
// 虚拟地址: 0x49d474
// WARP GUID: 1dea7420-9371-5330-95e6-3680e1bf29ec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_408b84, sub_49e1e0, sub_403e1c, sub_49df54
// [被调用的父级函数]: sub_49d4fc
// ============================================================

int32_tsub_49d474(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    char* var_c = nullptr
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx
    ecx.b = 1
    sub_49df54(ecx, *(arg1 - 8), *(arg1 - 4), &var_8, 1)
    *(arg1 - 0xc) = zx.w(sub_49e1e0(var_8))
    sub_408b84(**(arg1 - 4), &var_c)
    sub_403e4c(*(arg1 - 4), var_c)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_49d4f6
    return sub_403e1c(&var_c, 2)
}
