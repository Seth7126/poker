// ============================================================
// 函数名称: sub_4aa948
// 虚拟地址: 0x4aa948
// WARP GUID: 64cf7930-577e-53e7-9017-6f93921b979d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_410948, sub_493fc0, sub_4108e4, sub_403010
// [被调用的父级函数]: sub_4aa9c8
// ============================================================

int32_tsub_4aa948()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t esi
    int32_t var_c = esi
    int32_t* eax_1 = sub_4108e4(data_5325f0)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i_2
    int32_t edx
    i_2, edx = (*data_5300ac)(ExceptionList, var_14, var_10)
    
    if (add_overflow(i_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_2 - 1 s>= 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            edx.b = 1
            sub_4103c8(eax_1, sub_493fc0(sub_493cfc+0x1d4, edx))
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t entry_ebx
    fsbase->NtTib.ExceptionList = entry_ebx
    __return_addr = sub_4aa9b8
    return sub_410948(data_5325f0)
}
