// ============================================================
// 函数名称: sub_4ec6d4
// 虚拟地址: 0x4ec6d4
// WARP GUID: 6792223e-5102-595f-be60-281600611a7a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42679c, sub_42b778, sub_426afc, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4ec6d4(void* arg1)
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
    *(arg1 + 0x60b0)
    int32_t ecx
    sub_42b778(ecx, &var_8)
    sub_42679c(sub_426afc(), var_8)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4ec724
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
