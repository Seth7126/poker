// ============================================================
// 函数名称: sub_415520
// 虚拟地址: 0x415520
// WARP GUID: 376af241-7a52-5da3-827d-c13e0ab8e6c3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4137a0, sub_4144e8, sub_415520, sub_4154d8, sub_403e1c, sub_41512c
// [被调用的父级函数]: sub_413c58, sub_415520
// ============================================================

int32_t __convention("regparm")sub_415520(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 != 0)
        sub_41512c(arg1, &var_14, sub_41512c(arg1, &var_10, (*(*arg1 + 0x24))()))
    
    while (sub_4137a0(arg1) == 0)
        ebp_1 = sub_4154d8(arg1)
    
    sub_4144e8()
    
    while (true)
        bool eax_9
        int32_t edx_2
        eax_9, edx_2 = sub_4137a0(arg1)
        
        if (eax_9 != 0)
            break
        
        edx_2.b = 1
        sub_415520()
    
    sub_4144e8()
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4155bf
    return sub_403e1c(&ebp_1[-4], 2)
}
