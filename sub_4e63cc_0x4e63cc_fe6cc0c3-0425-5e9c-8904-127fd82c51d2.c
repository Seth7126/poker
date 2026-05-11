// ============================================================
// 函数名称: sub_4e63cc
// 虚拟地址: 0x4e63cc
// WARP GUID: fe6cc0c3-0425-5e9c-8904-127fd82c51d2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4e6028, sub_40c024, sub_4e6478, sub_403e90, sub_40422c, sub_4042c0, sub_4088f0, sub_404280, sub_403010
// [被调用的父级函数]: sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4e63cc(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    void* var_20
    __builtin_memset(&var_20, 0, 0x1c)
    void* var_18 = arg1
    sub_40422c(var_18)
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4088f0(var_18, &var_20)
    sub_403e90(&var_18, var_20)
    void* i
    
    do
        i = sub_40c024(sub_4e649b+5, ebp_1[-5])
        void* edx_3
        
        if (i s<= 0)
            edx_3 = sub_403e90(&ebp_1[-6], ebp_1[-5])
        else
            if (add_overflow(i, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_404280(i - 1, 1, ebp_1[-5], &ebp_1[-6])
            edx_3 = sub_4042c0(&ebp_1[-5], 1, i)
        
        int32_t* var_38_2 = ebp_1
        char eax_8
        eax_8, ebp_1 = sub_4e6028(ebp_1[-6], edx_3)
        int32_t ebx
        
        if (eax_8 != 0)
            ebx.b = 1
    while (i != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4e648d
    return sub_4e6478(ebp_1) __tailcall
}
