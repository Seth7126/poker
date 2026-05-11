// ============================================================
// 函数名称: sub_49e6e0
// 虚拟地址: 0x49e6e0
// WARP GUID: e81a529c-f185-5bf0-9dbc-08b253e889fa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408b34, sub_403e1c, sub_49df54, sub_408ebc
// [被调用的父级函数]: sub_4ace9c, sub_49e780
// ============================================================

int32_t __convention("regparm")sub_49e6e0(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    ebx.b = 1
    sub_408b34(arg1, &var_8)
    int32_t i_1 = 4
    int32_t i
    
    do
        int32_t ecx
        ecx.b = 1
        int32_t eax_3
        eax_3, ecx = sub_408ebc(sub_49df54(ecx, 0x49e77c, &var_8, &var_c, 1), 0xffffffff)
        
        if (ebx.b == 0 || eax_3 s<= 0xffffffff || eax_3 s>= 0x100)
            eax_3 = 0
        else
            eax_3.b = 1
        
        ebx = eax_3
        
        if (ebx.b == 0)
            break
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_49e76b
    return sub_403e1c(&var_c, 2)
}
