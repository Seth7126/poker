// ============================================================
// 函数名称: sub_46b1f4
// 虚拟地址: 0x46b1f4
// WARP GUID: ec70e944-1525-5c8b-a9f3-fcfcedc0e1dd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b4c, sub_46af40, sub_403010
// [被调用的父级函数]: sub_48156c
// ============================================================

int32_tsub_46b1f4(int32_t arg1, char arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t edx
    int32_t var_14 = edx
    int32_t eax
    int32_t var_10 = eax
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8
    
    if (arg3 s>= 0)
        char var_9_1 = 0
        var_8 = 4
    else
        var_8 = 5
        
        if (neg.d(arg3) == 0x80000000)
            sub_403010()
            noreturn
        
        arg3 = sub_402b4c(float.t(neg.d(arg3)) * data_46b380)
        int32_t eax_3
        eax_3.b = arg2
        
        if (eax_3.b == 0)
            arg3 = 0
            var_8 = 3
    
    if (neg.d(arg4) == 0x80000000)
        sub_403010()
        noreturn
    
    if (neg.d(arg5) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_5306a4)(fconvert.d(float.t(neg.d(arg5)) / fconvert.t(2f) / fconvert.t(639f)), 
        fconvert.d(float.t(neg.d(arg4)) / fconvert.t(2f) / fconvert.t(639f)), 0, 0)
    
    if (arg1 == 1)
        (*data_5306a4)(0x47ae147b, 0xbf647ae1, 0x47ae147b, 0x3f647ae1, 0, 0)
    
    (*data_52ffd4)(9)
    sub_46af40(1, 0xffffffff, 1, 1, 0f, 0f, &var_4)
    sub_46af40(0xffffffff, 1, 0xffffffff, 1, 0f, 1f, &var_4)
    sub_46af40(0xffffffff, 0xffffffff, 1, 0xffffffff, 1f, 1f, &var_4)
    sub_46af40(1, 1, 0xffffffff, 0xffffffff, 1f, 0f, &var_4)
    (*data_530a08)(var_8)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_46b379
    return 0
}
