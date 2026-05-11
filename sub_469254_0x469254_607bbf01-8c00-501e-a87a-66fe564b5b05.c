// ============================================================
// 函数名称: sub_469254
// 虚拟地址: 0x469254
// WARP GUID: 607bbf01-8c00-501e-a87a-66fe564b5b05
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4691b4, sub_404188, sub_403df8, sub_408e80
// [被调用的父级函数]: sub_4692db, sub_4692e4
// ============================================================

void*sub_469254(int32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c = arg1
    void* edx
    void* ebp_1 = sub_4691b4(&var_8, edx)
    int32_t temp0 = *(ebp_1 - 4)
    
    if (temp0 != 0)
        sub_404188(*(ebp_1 - 4), 0x4692d4)
        
        if (temp0 != 0)
            sub_404188(*(ebp_1 - 4), sub_4692db+5)
            
            if (temp0 != 0)
                sub_408e80(*(ebp_1 - 4))
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4692c5
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
