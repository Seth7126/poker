// ============================================================
// 函数名称: sub_4ace9c
// 虚拟地址: 0x4ace9c
// WARP GUID: 94ddea58-0c1c-5e69-96bc-aa098c520dff
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404078, sub_49e6e0, sub_404188, sub_49e780, sub_49dcc4, sub_408988, sub_49e7c0, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4ace9c(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_18
    __builtin_memset(&var_18, 0, 0x14)
    int32_t ebx
    int32_t var_1c = ebx
    sub_40422c(arg2)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax_2
    void* ebp_1
    eax_2, ebp_1 = sub_49e6e0(arg2)
    
    if (eax_2 == 0)
        if (sub_49e780(*(ebp_1 - 4)) == 0)
            sub_49e7c0(*(ebp_1 - 4), ebp_1 - 0x14)
            void* eax_23
            eax_23.b = sub_408988(*(arg1 + 0x10), *(ebp_1 - 0x14)) == 0
        else
            char eax_8 = sub_49e780(*(arg1 + 0x10))
            
            if (eax_8 == 0)
                sub_49e7c0(*(ebp_1 - 4), ebp_1 - 0x10)
                sub_49dcc4(*(ebp_1 - 0x10), sub_404078(*(arg1 + 0x10)), ebp_1 - 0xc)
                sub_404188(*(arg1 + 0x10), *(ebp_1 - 0xc))
                int32_t eax_20
                eax_20.b = eax_8 == 0
            else
                void* eax_10 = sub_404078(*(arg1 + 0x10))
                sub_49dcc4(*(ebp_1 - 4), eax_10, ebp_1 - 8)
                sub_404188(*(arg1 + 0x10), *(ebp_1 - 8))
                int32_t eax_13
                eax_13.b = eax_8 == 0
    else
        sub_404188(*(ebp_1 - 4), *(arg1 + 0x10))
        int32_t eax_4
        eax_4.b = eax_2 == 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_20_1)(int32_t* arg1 @ ebp) = sub_4acf95
    return sub_403e1c(ebp_1 - 0x14, 5)
}
