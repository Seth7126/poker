// ============================================================
// 函数名称: sub_4afa30
// 虚拟地址: 0x4afa30
// WARP GUID: 25e7be57-c270-5782-8403-3b52738ea36b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c024, sub_4040c4, sub_408ebc, sub_403e1c, sub_404280, sub_403010
// [被调用的父级函数]: sub_4afaf8
// ============================================================

int32_tsub_4afa30(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_c = nullptr
    int32_t ebx
    int32_t var_10 = ebx
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(**(arg1 - 4) + 0x70))(&var_8, 0xffffffff, ExceptionList, var_18, var_14)
    void* eax_2 = sub_40c024(0x4afae8, var_8)
    
    if (eax_2 s> 0)
        var_c = &var_8
        
        if (add_overflow(eax_2, 0xffffffff))
            sub_403010()
            noreturn
        
        sub_404280(eax_2 - 1, 1, var_8, var_c)
    
    sub_408ebc(sub_4040c4(&var_c, U"$", var_8), 0)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4afacd
    return sub_403e1c(&var_c, 2)
}
