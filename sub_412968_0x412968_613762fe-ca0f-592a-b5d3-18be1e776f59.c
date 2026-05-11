// ============================================================
// 函数名称: sub_412968
// 虚拟地址: 0x412968
// WARP GUID: 613762fe-ca0f-592a-b5d3-18be1e776f59
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4128c0, sub_4128b4, sub_40276c, sub_412930, sub_402754, sub_4128f8
// [被调用的父级函数]: sub_4a7cd8, sub_41e6c8
// ============================================================

int32_t __convention("regparm")sub_412968(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t i = arg3
    
    if (i == 0)
        sub_4128b4(arg2)
        i = sub_4128c0(arg2)
    
    int32_t i_2 = i
    int32_t i_1
    
    i_1 = i s<= 0xf000 ? i : 0xf000
    
    int32_t eax_4 = sub_402754(i_1)
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i_3
    
    for (; i != 0; i -= i_3)
        i_3 = i s<= i_1 ? i : i_1
        
        sub_4128f8(arg2, eax_4, i_3)
        sub_412930(arg1, eax_4, i_3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_412a12
    return sub_40276c(eax_4)
}
