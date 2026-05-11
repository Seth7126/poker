// ============================================================
// 函数名称: sub_4b62cc
// 虚拟地址: 0x4b62cc
// WARP GUID: 162dfdb5-78f7-547c-b6dc-2256e852eb8d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4b5b54, sub_404868, sub_4b5a84, sub_404040
// [被调用的父级函数]: sub_4b63a0, sub_4b63bc
// ============================================================

void __convention("regparm")sub_4b62cc(uint32_t arg1, void* arg2) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    char* var_14 = nullptr
    int32_t ecx
    int32_t var_8_1 = ecx
    int32_t* var_20 = &var_4
    int32_t var_24 = 0x4b6391
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* esp
    int32_t var_30
    
    if (arg1 != 0x80020009)
        var_30 = 0
        esp = &var_30
        void* eax_6
        eax_6, ebp_1 = sub_4b5a84(sub_4b5976+6, 1, nullptr, var_30, arg1)
    else
        int32_t var_2c = *(arg2 + 0x1c)
        int32_t ecx_1 = sub_404040(ecx, *(arg2 + 4))
        var_30 = var_c
        int32_t ecx_2 = sub_404040(ecx_1, *(arg2 + 0xc))
        int32_t eax_3 = *(arg2 + 0x10)
        sub_404040(ecx_2, *(arg2 + 8))
        int32_t edx_3
        edx_3.b = 1
        void* eax_4
        int32_t ebx_1
        eax_4, ebx_1 = sub_4b5b54(0x4b59d8, edx_3, var_14, eax_3, var_10)
        char arg_4
        esp = &arg_4
        
        if (arg_4 != 0)
            sub_404868()
    
    if (ebp_1[-1] == 0)
        sub_403828()
        noreturn
    
    *(esp - 4) = ebp_1[-1]
    noreturn sub_403828() __tailcall
}
