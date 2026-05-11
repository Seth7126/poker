// ============================================================
// 函数名称: sub_4ad140
// 虚拟地址: 0x4ad140
// WARP GUID: 6fd0df55-dd2b-5060-a289-cafa7b318467
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078, sub_4042c0, sub_4043ac, sub_403e4c, sub_411a80, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4ad714, sub_4ad123, sub_4ad707
// ============================================================

int32_t __convention("regparm")sub_4ad140(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    char* var_c = nullptr
    char* var_10 = nullptr
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_411a80(arg2, "PATH", &var_8)
    sub_403e4c(&arg1[7], var_8)
    
    if (sub_404078(arg1[7]) s> 0)
        if (*arg1[7] == 0x22)
            sub_4042c0(&arg1[7], 1, 1)
        
        int32_t eax_7 = sub_404078(arg1[7])
        
        if (*(arg1[7] + eax_7 - 1) == 0x22)
            int32_t eax_9 = sub_404078(arg1[7])
            
            if (add_overflow(eax_9, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_4043ac(&arg1[7], eax_9 - 1)
    
    sub_411a80(arg2, "EXPIRES", &var_c)
    (*(*arg1 + 0x20))()
    sub_411a80(arg2, "DOMAIN", &var_10)
    sub_403e4c(&arg1[4], var_10)
    arg1[8].b = (*(*arg2 + 0x50))() != 0xffffffff
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4ad233
    return sub_403e1c(&var_10, 3)
}
