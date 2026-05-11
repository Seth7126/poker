// ============================================================
// 函数名称: sub_4980b4
// 虚拟地址: 0x4980b4
// WARP GUID: 0322f3a7-eb3c-5beb-9ef5-f769dc1b349f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404188, sub_4088f0, sub_40401c, sub_403e1c, sub_402bc0
// [被调用的父级函数]: sub_4981b4
// ============================================================

int32_t __convention("regparm")sub_4980b4(char* arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_11c = ebx
    int32_t esi
    int32_t var_120 = esi
    int32_t edi
    int32_t var_124 = edi
    void* var_10c = nullptr
    void* var_114 = nullptr
    void* var_118 = nullptr
    void* var_110 = nullptr
    int32_t ecx
    ecx.b = *arg1
    char var_108[0x100]
    int32_t ecx_2 = __builtin_memcpy(&var_108, arg1, ecx + 1)
    bool cond:0 = false
    int32_t* var_128 = &var_4
    int32_t (* var_12c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *arg2 = 0
    int32_t i_1 = 6
    char* ebx_1 = arg3 - 0x604
    char* esi_2 = arg3 - 0xc04
    int32_t i
    
    do
        sub_40401c(ecx_2, ebx_1)
        int32_t ecx_3 = sub_4088f0(var_110, &var_10c)
        void* eax_4 = var_10c
        sub_40401c(ecx_3, &var_108)
        sub_4088f0(var_118, &var_114)
        ecx_2 = sub_404188(eax_4, var_114)
        
        if (not(cond:0))
            sub_402bc0(arg2, esi_2)
            break
        
        esi_2 = &esi_2[0x100]
        ebx_1 = &ebx_1[0x100]
        i = i_1
        i_1 -= 1
        cond:0 = i != 1
    while (i != 1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_128_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4981ac
    return sub_403e1c(&var_118, 4)
}
