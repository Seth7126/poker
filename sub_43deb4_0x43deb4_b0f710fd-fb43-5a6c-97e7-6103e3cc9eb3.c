// ============================================================
// 函数名称: sub_43deb4
// 虚拟地址: 0x43deb4
// WARP GUID: b0f710fd-fb43-5a6c-97e7-6103e3cc9eb3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43caf4, sub_403428, sub_4033d0, sub_43de70
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_43deb4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp = &var_8
    int32_t* ecx
    
    if (arg2.b != 0)
        void var_18
        esp = &var_18
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_43caf4(arg1, 0, ecx)
    arg1[0x12] = 0xffffffff
    arg1[0x13] = 0xffffffff
    void* eax_1 = arg1[0xa]
    *(eax_1 + 0x84) = arg1
    *(eax_1 + 0x80) = *(*arg1 + 0x3c)
    arg1[0xb] = *(*data_530660 + 0x24)
    *(arg1 + 0x51) = 1
    sub_43de70(data_5317c8, arg1, arg1)
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
