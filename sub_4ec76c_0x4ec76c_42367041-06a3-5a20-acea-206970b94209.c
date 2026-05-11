// ============================================================
// 函数名称: sub_4ec76c
// 虚拟地址: 0x4ec76c
// WARP GUID: 42367041-06a3-5a20-acea-206970b94209
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_514cc4, sub_403df8, sub_408e1c, sub_404080
// [被调用的父级函数]: 无
// ============================================================

void**sub_4ec76c()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    for (int32_t i = 1; i != 0x186a1; i += 1)
        sub_408e1c(i, &var_8)
        sub_404080(&var_8, sub_4ec7d7+5)
        sub_514cc4(data_61c9f0, var_8)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_4ec7cf
    void** result = &var_8
    sub_403df8(result)
    return result
}
