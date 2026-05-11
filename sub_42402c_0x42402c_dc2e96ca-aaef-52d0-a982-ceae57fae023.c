// ============================================================
// 函数名称: sub_42402c
// 虚拟地址: 0x42402c
// WARP GUID: dc2e96ca-aaef-52d0-a982-ceae57fae023
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_42b754, sub_431bcc, sub_42b778, sub_4318d0, sub_40423c, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_42402c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 != *(arg1 + 0x1f5))
        *(arg1 + 0x1f5) = arg2
        
        if (sub_431bcc(arg1) != 0)
            WPARAM wParam
            wParam.b = *(arg1 + 0x1f5)
            sub_42b778(SendMessageA(sub_4318d0(arg1), 0xcc, wParam, 0), &var_8)
            sub_42b754(arg1, sub_40423c(var_8))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_4240b0
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
