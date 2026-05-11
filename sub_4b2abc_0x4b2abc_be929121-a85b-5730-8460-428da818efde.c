// ============================================================
// 函数名称: sub_4b2abc
// 虚拟地址: 0x4b2abc
// WARP GUID: be929121-a85b-5730-8460-428da818efde
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_403828, sub_4032ac, sub_431bcc, sub_40b4ec, sub_4318d0, sub_405ae8, sub_40301c, sub_403df8
// [被调用的父级函数]: sub_4b2c38, sub_4b2c1c, sub_4b2c08
// ============================================================

int32_t* __convention("regparm")sub_4b2abc(void** arg1, LPARAM arg2, LPARAM arg3, LPARAM arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_114 = ebx
    int32_t esi
    int32_t var_118 = esi
    int32_t edi
    int32_t var_11c = edi
    int32_t var_110 = 0
    LPARAM lParam = arg2
    int32_t* var_120 = &var_4
    int32_t (* var_124)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_8
    
    if (arg3 s> arg4)
        void var_10c
        sub_40301c(*arg1, &var_10c)
        void* var_c = &var_10c
        var_8 = 4
        void** var_12c_1 = &var_c
        sub_405ae8(data_5302a0, &var_110)
        int32_t edx_2
        edx_2.b = 1
        sub_40b4ec(sub_40eacb+0x7d, edx_2, var_110, 0)
        sub_403828()
        noreturn
    
    if (arg3 s> lParam)
        lParam = arg3
    
    if (lParam s> arg4)
        lParam = arg4
    
    if (arg3 != arg1[0x81])
        arg1[0x81] = arg3
        
        if (sub_431bcc(arg1) != 0)
            SendMessageA(sub_4318d0(arg1), 0x407, 1, arg3)
            esp = &ExceptionList
    
    if (arg1[0x82] != arg4)
        arg1[0x82] = arg4
        
        if (sub_431bcc(arg1) != 0)
            SendMessageA(sub_4318d0(arg1), 0x408, 1, arg4)
            esp = &ExceptionList
    
    if (lParam != arg1[0x84])
        arg1[0x84] = lParam
        
        if (sub_431bcc(arg1) != 0)
            SendMessageA(sub_4318d0(arg1), 0x405, 1, lParam)
        
        void** ebx_1
        ebx_1.w = 0xffb6
        sub_4032ac(arg1)
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4b2bfc
    int32_t* result = &var_110
    sub_403df8(result)
    return result
}
