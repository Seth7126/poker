// ============================================================
// 函数名称: sub_4a2ab4
// 虚拟地址: 0x4a2ab4
// WARP GUID: 5cefded3-9d2d-5683-a81f-15d9459832fc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_4a1980, sub_403e4c, sub_403428, sub_49f0a4
// [被调用的父级函数]: sub_4b0f98
// ============================================================

int32_t* __convention("regparm")sub_4a2ab4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t* esp = &var_c
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_4a1980(arg1, 0)
    sub_403e4c(&arg1[9], sub_4a2b1b+5)
    int32_t edx
    edx.b = 1
    int32_t* eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_49f0a4(&data_49ed40, edx)
    arg1[0x18] = eax_2
    edx_1.b = 1
    arg1[0x17] = sub_49f0a4(&data_49ed40, edx_1)
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    return arg1
}
