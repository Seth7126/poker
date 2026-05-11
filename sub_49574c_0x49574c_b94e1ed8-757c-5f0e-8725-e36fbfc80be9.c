// ============================================================
// 函数名称: sub_49574c
// 虚拟地址: 0x49574c
// WARP GUID: b94e1ed8-757c-5f0e-8725-e36fbfc80be9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: gethostname
// [内部子函数调用]: sub_404028, sub_4038c8, sub_4953dc, sub_4953e8, sub_403df8
// [被调用的父级函数]: sub_4e6659, sub_4e649b, sub_4ec560
// ============================================================

int32_t __convention("regparm")sub_49574c(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    sub_4953dc(arg1)
    int32_t* var_110 = &var_4
    int32_t (* var_114)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg2)
    
    if (*(arg1 + 4) == 0xffffffff)
        return sub_4038c8(ExceptionList, var_114)
    
    void var_108
    
    if (gethostname(&var_108, 0x100) == 0)
        sub_404028(arg2, &var_108, 0x100)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_4957cc
    return sub_4953e8(arg1)
}
