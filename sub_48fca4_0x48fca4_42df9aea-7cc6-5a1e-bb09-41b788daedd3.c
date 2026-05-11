// ============================================================
// 函数名称: sub_48fca4
// 虚拟地址: 0x48fca4
// WARP GUID: 42df9aea-7cc6-5a1e-bb09-41b788daedd3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_40422c, sub_404138, sub_403df8, sub_40b4b0, sub_403e1c
// [被调用的父级函数]: sub_48fff8
// ============================================================

void** __convention("regparm")sub_48fca4(int32_t* arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t* esp = &var_14
    char* var_c = nullptr
    
    if (arg2.b != 0)
        void var_24
        esp = &var_24
        arg1 = sub_4033d0(arg3, arg2)
    
    sub_40422c(arg3)
    void* arg_8
    sub_40422c(arg_8)
    *(esp - 4) = &var_4
    *(esp - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp - 0xc
    arg1[3] = arg4
    *(esp - 0x10) = arg3
    *(esp - 0x14) = &data_48fd64
    *(esp - 0x18) = &data_48fd70
    *(esp - 0x1c) = arg_8
    sub_404138(&var_c, 4)
    sub_40b4b0(arg1, 0, var_c)
    esp[5]
    fsbase->NtTib.ExceptionList = esp[3]
    esp[5] = sub_48fd3b
    sub_403e1c(&var_c, 2)
    void** result = &arg_8
    sub_403df8(result)
    return result
}
