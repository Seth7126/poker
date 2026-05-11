// ============================================================
// 函数名称: sub_4aaa64
// 虚拟地址: 0x4aaa64
// WARP GUID: d5547a74-93e3-5655-8d1a-ce7164966a9d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410948, sub_4030d0, sub_40cc98, sub_4108e4, sub_410524, sub_4a53bc, sub_403010
// [被调用的父级函数]: sub_4ac254
// ============================================================

int32_tsub_4aaa64()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    sub_40cc98(&data_5325e4)
    sub_40cc98(&data_5325e8)
    sub_40cc98(&data_5325ec)
    
    if (data_5325f0 == 0)
        sub_4a53bc()
        return 0
    
    int32_t* eax_1 = sub_4108e4(data_5325f0)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i_2 = eax_1[2]
    
    if (add_overflow(i_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_2 - 1 s>= 0)
        int32_t i_1 = i_2
        int32_t esi_1 = 0
        int32_t i
        
        do
            sub_4030d0(sub_410524(eax_1, esi_1))
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    (*(*eax_1 + 8))()
    int32_t entry_ebx
    fsbase->NtTib.ExceptionList = entry_ebx
    __return_addr = sub_4aaaf7
    return sub_410948(data_5325f0)
}
