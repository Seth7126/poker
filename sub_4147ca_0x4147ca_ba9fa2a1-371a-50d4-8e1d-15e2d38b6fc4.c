// ============================================================
// 函数名称: sub_4147ca
// 虚拟地址: 0x4147ca
// WARP GUID: ba9fa2a1-371a-50d4-8e1d-15e2d38b6fc4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403844, sub_403898, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

long double __convention("regparm")sub_4147ca(int32_t* arg1, int32_t arg2, void* arg3, void* arg4 @ ebp, int32_t arg5 @ edi, long double arg6 @ st0)
{
    // 第一条实际指令: *arg1 += arg1
    *arg1 += arg1
    *arg1 += arg1.b
    long double result = fconvert.t(*(arg1 * 3)) / arg6
    int32_t eflags
    arg1.b = __salc(eflags)
    *(arg3 - 0xbba743c) += (arg3 + 1).b
    char eax_1
    
    if (arg1[0x1d].b != 0)
        void* entry_ebx
        *(entry_ebx + 4)
        eax_1 = (*(**(arg4 - 0xc) + 0x10))()
    
    void* esp
    
    if (arg1[0x1d].b == 0 || eax_1 == 0)
        sub_403844()
        void arg_24
        esp = &arg_24
    
    sub_403898()
    *(esp + 8)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    *(esp + 8) = sub_414817
    sub_403df8(arg4 - 8)
    return result
}
