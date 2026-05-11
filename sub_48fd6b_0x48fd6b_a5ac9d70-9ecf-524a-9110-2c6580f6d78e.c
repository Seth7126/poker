// ============================================================
// 函数名称: sub_48fd6b
// 虚拟地址: 0x48fd6b
// WARP GUID: a5ac9d70-9ecf-524a-9110-2c6580f6d78e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_48fd6b(char* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *0x55000000 += arg3.b
    void* const* var_4 = &__return_addr
    int32_t (* var_8)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_532120 += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
