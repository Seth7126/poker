// ============================================================
// 函数名称: sub_41c688
// 虚拟地址: 0x41c688
// WARP GUID: 4597862a-4b05-585a-a44d-7ceb2065bc01
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c0c4, sub_41b380, sub_4092cc, sub_404188, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41c688(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    char* var_c = nullptr
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    ebx.b = arg1[9].b
    sub_4092cc(arg2, &var_c)
    sub_40c0c4(var_c, &var_8)
    sub_404188(var_8, sub_41c707+5)
    arg1[9].b = 0
    void* ebp_1 = sub_41b380(arg1, arg2)
    arg1[9].b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_41c6fd
    return sub_403e1c(ebp_1 - 8, 2)
}
