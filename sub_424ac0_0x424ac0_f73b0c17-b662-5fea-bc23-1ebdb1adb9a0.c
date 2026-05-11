// ============================================================
// 函数名称: sub_424ac0
// 虚拟地址: 0x424ac0
// WARP GUID: f73b0c17-b662-5fea-bc23-1ebdb1adb9a0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_403828, sub_404078, sub_42c754, sub_42b778, sub_404188, sub_408cec, sub_4318d0, sub_42b6ec, sub_405ae8, sub_403df8, sub_40b4b0
// [被调用的父级函数]: 无
// ============================================================

LPARAM* __convention("regparm")sub_424ac0(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    LPARAM lParam = 0
    void* var_c = nullptr
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
    sub_408cec(arg2, &lParam)
    int32_t eax_2 = sub_404078(lParam)
    *(arg1 + 0xc)
    int32_t ecx = sub_42b6ec()
    
    if (eax_2 == 0)
        *(arg1 + 0xc)
        sub_42b778(ecx, &var_c)
        sub_404188(lParam, var_c)
    
    if (eax_2 != 0 || eax_2 != 0)
        if (SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xc, 0, lParam) == 0)
            sub_405ae8(data_530774, &var_10)
            int32_t edx_4
            edx_4.b = 1
            sub_40b4b0(sub_40eacb+0x7d, edx_4, var_10)
            sub_403828()
            noreturn
        
        sub_42c754(*(arg1 + 0xc), 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_1c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_424b8e
    sub_403df8(&var_10)
    sub_403df8(&var_c)
    LPARAM* result = &lParam
    sub_403df8(result)
    return result
}
