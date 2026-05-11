// ============================================================
// 函数名称: sub_411937
// 虚拟地址: 0x411937
// WARP GUID: c013020b-374e-5e89-8f3e-373bc8778193
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_403df8, sub_4095cc
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_411937(char* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    int32_t entry_ebx
    *0x33000000 += entry_ebx:1.b
    entry_ebx.b = rol.b(entry_ebx.b, 0x90)
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x1c))(ExceptionList, var_14, var_10, entry_ebx)
    sub_4095cc(sub_40423c(var_8))
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_411990
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
