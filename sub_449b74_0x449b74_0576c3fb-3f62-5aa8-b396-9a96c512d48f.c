// ============================================================
// 函数名称: sub_449b74
// 虚拟地址: 0x449b74
// WARP GUID: 0576c3fb-3f62-5aa8-b396-9a96c512d48f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4030d0, sub_436c1c, sub_404188, sub_403e4c, sub_426c98
// [被调用的父级函数]: sub_445458, sub_43d934, sub_4499c8
// ============================================================

int32_t __convention("regparm")sub_449b74(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t result = sub_404188(*(arg1 + 0x44), arg2)
    bool z
    
    if (z)
        return result
    
    sub_403e4c(arg1 + 0x44, arg2)
    
    if (*(arg1 + 0xd2) != 0)
        *(arg1 + 0xd4)
        return (*(arg1 + 0xd0))()
    
    int32_t edx_2
    edx_2.b = 1
    int32_t* eax_3 = sub_426c98(sub_426bb4+0x48, edx_2)
    sub_436c1c(eax_3, arg2)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx
    ebx.w = 0xfff0
    sub_4032ac(eax_3)
    fsbase->NtTib.ExceptionList = eax_3
    __return_addr = &data_449c00
    return sub_4030d0(eax_3)
}
