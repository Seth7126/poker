// ============================================================
// 函数名称: sub_413b8c
// 虚拟地址: 0x413b8c
// WARP GUID: 65667c71-1468-5d25-98e5-b8d7311e8b59
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4137a0, sub_410f28, sub_4144e8, sub_410fe0, sub_4144e0, sub_414430, sub_41464c, sub_413a50
// [被调用的父级函数]: sub_414aa0
// ============================================================

int32_t __convention("regparm")sub_413b8c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ebp
    int32_t* ebp
    int32_t* var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ecx
    int32_t var_8 = ecx
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = ExceptionList_1
    int32_t esi
    int32_t var_10 = esi
    (*(*arg2 + 0x14))()
    var_4 = &var_4
    int32_t (* var_8_2)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_4137a0(arg1) == 0)
        ebp_1 = sub_410fe0(var_8_2)
    
    while (sub_4137a0(arg1) == 0)
        if (sub_413a50(arg1) - 2 u< 3)
            sub_414430(arg1)
        
        int32_t eax_8 = sub_410f28(ebp_1[-1])
        sub_4144e0()
        
        while (sub_4137a0(arg1) == 0)
            ebp_1 = sub_41464c(arg1, eax_8)
        
        sub_4144e8()
    
    sub_4144e8()
    fsbase->NtTib.ExceptionList = ExceptionList
    var_4 = sub_413c33
    return (*(*ebp_1[-1] + 0x18))(var_4)
}
