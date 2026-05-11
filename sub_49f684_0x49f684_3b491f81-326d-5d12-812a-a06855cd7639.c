// ============================================================
// 函数名称: sub_49f684
// 虚拟地址: 0x49f684
// WARP GUID: 3b491f81-326d-5d12-812a-a06855cd7639
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408ad8, sub_403df8, sub_49f478, sub_403010
// [被调用的父级函数]: sub_49f714, sub_49f520
// ============================================================

void* __convention("regparm")sub_49f684(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t var_10 = 0
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c = 0xffffffff
    int32_t i_2 = (*(*arg1 + 0x14))(ExceptionList, var_24, var_20)
    
    if (add_overflow(i_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_2 - 1 s>= 0)
        int32_t i_1 = i_2
        int32_t ebx_1 = 0
        int32_t i
        
        do
            int32_t ebx_2
            ebx_2, ebp_1 = sub_49f478(arg1, ebx_1, &ebp_1[-3])
            
            if (sub_408ad8(ebp_1[-3], ebp_1[-1]) != 0)
                ebp_1[-2] = ebx_2
                break
            
            ebx_1 = ebx_2 + 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_49f707
    sub_403df8(&ebp_1[-3])
    return &ebp_1[-3]
}
