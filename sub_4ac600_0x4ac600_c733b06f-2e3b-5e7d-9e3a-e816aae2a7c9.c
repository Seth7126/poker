// ============================================================
// 函数名称: sub_4ac600
// 虚拟地址: 0x4ac600
// WARP GUID: c733b06f-2e3b-5e7d-9e3a-e816aae2a7c9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4ac600(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebp
    int32_t* ebp
    int32_t* var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    struct _EXCEPTION_REGISTRATION_RECORD* __saved_edx
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = __saved_edx
    (*(*arg1 + 0x94))()
    var_4 = &var_4
    int32_t (* var_8_2)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*var_8_2 + 0x44))(ExceptionList, var_8_2, var_4)
    fsbase->NtTib.ExceptionList = ExceptionList
    var_4 = sub_4ac64d
    return (*(*var_8_2 + 0x58))(var_4)
}
