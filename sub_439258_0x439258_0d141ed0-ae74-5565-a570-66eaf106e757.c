// ============================================================
// 函数名称: sub_439258
// 虚拟地址: 0x439258
// WARP GUID: 0d141ed0-ae74-5565-a570-66eaf106e757
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_439204, sub_403e90, sub_4040c4, sub_408e1c, sub_404080, sub_403fa0, sub_403df8, sub_403e1c
// [被调用的父级函数]: sub_43b5b8, sub_439b68, sub_4394b8, sub_42a6b0, sub_43ab7c, sub_43a2fc
// ============================================================

int32_t __convention("regparm")sub_439258(int16_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    char* var_c = nullptr
    char* var_10 = nullptr
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    var_8:2.w = arg1
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    ebx.b = var_8:2.b
    int32_t eax
    eax.b = ebx.b
    
    if (eax s>= 0x2d)
        if (eax s>= 0x41)
            if (eax - 0x41 u< 0x1a)
                int32_t edx_11
                edx_11.b = ebx.b
                sub_403fa0()
            else if (eax - 0x60 u< 0xa)
                int32_t edx_14
                edx_14.b = ebx.b
                sub_403fa0()
            else if (eax - 0x70 u< 0x18)
                int32_t eax_20
                eax_20.b = ebx.b
                sub_408e1c(eax_20 - 0x6f, &var_10)
                sub_4040c4(&var_c, U"F", var_10)
            else
                sub_439204(var_8:2.b, &var_c)
        else if (eax - 0x2d u< 2)
            ebx.b += 0xd
            int32_t edx_6
            edx_6.b = ebx.b
            sub_403e90(&var_c, (&data_52e7ec)[edx_6])
        else if (eax - 0x30 u< 0xa)
            int32_t edx_8
            edx_8.b = ebx.b
            sub_403fa0()
        else
            sub_439204(var_8:2.b, &var_c)
    else if (eax - 8 u< 2)
        int32_t edx
        edx.b = ebx.b
        sub_403e90(&var_c, *((edx << 2) + &data_52e880))
    else if (eax == 0xd)
        sub_403e90(&var_c, data_52e8ac)
    else if (eax == 0x1b)
        sub_403e90(&var_c, data_52e8a8)
    else if (eax - 0x20 u< 9)
        ebx.b += 4
        int32_t edx_4
        edx_4.b = ebx.b
        sub_403e90(&var_c, *((edx_4 << 2) + &data_52e820))
    else
        sub_439204(var_8:2.b, &var_c)
    
    if (var_c == 0)
        sub_403df8(arg2)
    else
        sub_403df8(arg2)
        
        if ((var_8:3.b & 0x20) != 0)
            sub_404080(arg2, data_52e8dc)
        
        if ((var_8:3.b & 0x40) != 0)
            sub_404080(arg2, data_52e8e0)
        
        if ((var_8:3.b & 0x80) != 0)
            sub_404080(arg2, data_52e8e4)
        
        sub_404080(arg2, var_c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_1c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_439448
    return sub_403e1c(&var_10, 2)
}
