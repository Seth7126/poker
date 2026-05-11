// ============================================================
// 函数名称: sub_41692c
// 虚拟地址: 0x41692c
// WARP GUID: bebaf99f-a2cd-57c5-844c-3131467aee6c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4128c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_41692c(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    int32_t (* var_18)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (***(arg1 + 0xc))(ExceptionList, var_18, var_14)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(sub_4128c0(*(arg1 + 0xc)))
    bool cond:0 = edx_1 == arg3
    
    if (edx_1 == arg3)
        cond:0 = eax_4 == arg2
    
    int32_t result
    
    result = cond:0 ? 0 : 0x80004005
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
