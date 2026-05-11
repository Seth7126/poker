// ============================================================
// 函数名称: sub_43d43c
// 虚拟地址: 0x43d43c
// WARP GUID: 12a19e6e-cee8-5ace-bf8f-d7655b4c20d1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetSubMenu
// [内部子函数调用]: sub_43e290, sub_43b964, sub_43ccd8, sub_408aa0, sub_403fa0, sub_43b974, sub_403e1c
// [被调用的父级函数]: sub_43d524
// ============================================================

int32_t __convention("regparm")sub_43d43c(HMENU arg1, int16_t arg2, int32_t arg3, char arg4, void* arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int24_t var_8 = 0
    void* var_c = nullptr
    void* var_10 = nullptr
    int32_t var_14 = 0
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    var_8:2.w = arg2
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* const ebx_1
    
    if ((var_8:2.b & 0x10) == 0)
        arg3.b = 1
        sub_43ccd8(*(arg5 - 4))
        ebx_1 = nullptr
    else
        HMENU eax
        int32_t ecx
        eax, ecx = GetSubMenu(arg1, arg3)
        ecx.b = 1
        sub_43ccd8(*(arg5 - 4))
        ebx_1 = nullptr
    
    if (ebx_1 != 0 && *(ebx_1 + 0x24) != 0)
        int32_t edx_3
        edx_3.b = arg4
        sub_403fa0()
        char* edx_7
        edx_7.b = **(ebx_1 + 0x24)
        sub_403fa0()
        
        if (sub_408aa0(var_10, var_c) == 0)
            sub_43e290(*(ebx_1 + 0x24), &var_14)
            int32_t* eax_9
            
            if (var_14 == 0)
                eax_9.b = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_43d518
    return sub_403e1c(&var_14, 3)
}
