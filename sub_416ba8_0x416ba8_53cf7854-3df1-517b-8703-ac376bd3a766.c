// ============================================================
// 函数名称: sub_416ba8
// 虚拟地址: 0x416ba8
// WARP GUID: 53cf7854-3df1-517b-8703-ac376bd3a766
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4128c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_416ba8(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    int32_t (* var_18)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 != 0)
        *(arg2 + 4) = 2
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(sub_4128c0(*(arg1 + 0xc)))
        *(arg2 + 8) = eax_3
        *(arg2 + 0xc) = edx_1
        __builtin_memset(arg2 + 0x10, 0, 0x18)
        *(arg2 + 0x2c) = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
