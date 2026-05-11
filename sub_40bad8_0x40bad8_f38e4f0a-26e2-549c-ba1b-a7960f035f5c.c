// ============================================================
// 函数名称: sub_40bad8
// 虚拟地址: 0x40bad8
// WARP GUID: f38e4f0a-26e2-549c-ba1b-a7960f035f5c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40b4ec, sub_403248, sub_40b90c, sub_405ae8, sub_403df8, sub_40b878, sub_40b4b0
// [被调用的父级函数]: sub_40bbb4
// ============================================================

void* __convention("regparm")sub_40bad8(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_18 = ebx
    char* var_14 = nullptr
    int32_t* var_8 = arg1
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t eax_2 = zx.d(sub_40b878(var_8))
    int32_t* ebx_1
    int32_t edx_2
    
    if (eax_2 - 3 u< 8)
        edx_2.b = 1
        ebx_1 = sub_40b4b0(*((eax_2 << 3) + &data_52e230), edx_2, *((eax_2 << 3) + 0x52e234))
    else if (eax_2 == 0xb)
        esp = &ExceptionList
        ebx_1 = sub_40b90c(&var_4)
    else if (eax_2 - 0xc u>= 0xa)
        int32_t var_10 = *var_8
        char var_c_1 = 0
        int32_t* var_28_2 = &var_10
        sub_405ae8(data_52ff54, &var_14)
        int32_t edx_5
        edx_5.b = 1
        int32_t* eax_10
        eax_10, ebp_1 = sub_40b4ec(sub_407f00+0x48, edx_5, var_14, 0)
        esp = &var_8
        ebx_1 = eax_10
    else
        edx_2.b = 1
        ebx_1 = sub_40b4b0(*((eax_2 << 3) + &data_52e230), edx_2, *((eax_2 << 3) + 0x52e234))
    
    if (sub_403248(ebx_1, "\tEExternal") != 0)
        ebx_1[3] = ebp_1[-1]
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_40bb9a
    sub_403df8(&ebp_1[-4])
    return &ebp_1[-4]
}
