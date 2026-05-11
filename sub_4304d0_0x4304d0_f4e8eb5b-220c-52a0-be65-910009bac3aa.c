// ============================================================
// 函数名称: sub_4304d0
// 虚拟地址: 0x4304d0
// WARP GUID: f4e8eb5b-220c-52a0-be65-910009bac3aa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42b9bc, sub_403018, sub_42d260
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4304d0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    
    if ((*(*arg1 + 0x54))() != sub_403018(arg1))
        return sub_42d260(arg1, arg2)
    
    int32_t* eax_4
    eax_4.b = *(arg1 + 0x47)
    int32_t var_c
    var_c:3.b = eax_4.b
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx
    ebx.w = 0xffd1
    sub_4032ac(arg1, 0, *(arg2 + 8) + 0x44, ExceptionList, var_1c, var_18)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_43054b
    
    if (var_c:3.b == 0)
        return 0
    
    return sub_42b9bc()
}
