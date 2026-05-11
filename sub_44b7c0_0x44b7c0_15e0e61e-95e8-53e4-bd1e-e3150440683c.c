// ============================================================
// 函数名称: sub_44b7c0
// 虚拟地址: 0x44b7c0
// WARP GUID: 15e0e61e-95e8-53e4-bd1e-e3150440683c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_42afdc, sub_42affc, sub_432928, sub_403428, sub_41b9bc, sub_4032c4
// [被调用的父级函数]: sub_4da034, sub_4da10c, sub_44c778
// ============================================================

int32_t* __convention("regparm")sub_44b7c0(int32_t* arg1, int32_t arg2)
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
    sub_432928(arg1, 0)
    arg1[0x10] |= 0x800
    int32_t edx
    edx.b = 1
    int32_t* eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_41b9bc(sub_4172a2+0x536, edx)
    arg1[0x4a] = eax_2
    eax_2[3] = arg1
    eax_2[2] = sub_44bc5c
    eax_2[7] = arg1
    edx_1.w = 0xffcd
    eax_2[6] = sub_4032c4(arg1, edx_1)
    sub_42affc(arg1, 0x69)
    sub_42afdc(arg1, 0x69)
    
    if (var_8:3.b != 0)
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
