// ============================================================
// 函数名称: sub_4258dc
// 虚拟地址: 0x4258dc
// WARP GUID: 1827af0e-084f-5cf1-b043-344784637703
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_42d8f4, sub_42afdc, sub_42b928, sub_42a50c, sub_431afc, sub_42affc, sub_4030a0, sub_403428, sub_41920c
// [被调用的父级函数]: sub_4b47c8
// ============================================================

int32_t* __convention("regparm")sub_4258dc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    var_8:3.b = arg2.b
    void* ebp_1 = sub_42d8f4(arg1, 0)
    
    if (*data_53040c == 0)
        arg1[0x10] = 0xb0
    else
        arg1[0x10] = 0xa0
    
    sub_42afdc(arg1, 0x79)
    sub_42affc(arg1, 0x61)
    sub_431afc(arg1, 1)
    int32_t ecx_1
    int32_t edx_1
    ecx_1, edx_1 = sub_42b928(arg1, 0)
    edx_1.b = 1
    void* eax_7
    int32_t edx_2
    eax_7, edx_2 = sub_4030a0(ecx_1, edx_1)
    arg1[0x7c] = eax_7
    *(eax_7 + 0xc) = arg1
    edx_2.b = 1
    int32_t* eax_8 = sub_41920c(sub_426fb7+0x21, edx_2)
    arg1[0x7e] = eax_8
    sub_42a50c(eax_8, arg1)
    arg1[0x80] = 0x10
    arg1[0x7d].b = 1
    arg1[0x82].b = 1
    
    if (*(ebp_1 - 1) != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return arg1
}
