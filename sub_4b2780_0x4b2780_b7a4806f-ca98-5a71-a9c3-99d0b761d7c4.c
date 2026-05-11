// ============================================================
// 函数名称: sub_4b2780
// 虚拟地址: 0x4b2780
// WARP GUID: b7a4806f-ca98-5a71-a9c3-99d0b761d7c4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_42d8f4, sub_42afdc, sub_431afc, sub_42affc, sub_403428
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4b2780(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp = &var_8
    
    if (arg2.b != 0)
        void var_18
        esp = &var_18
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_42d8f4(arg1, 0)
    sub_42afdc(arg1, 0x96)
    sub_42affc(arg1, 0x2d)
    sub_431afc(arg1, 1)
    arg1[0x81] = 0
    arg1[0x82] = 0xa
    arg1[0x7d] = 1
    arg1[0x7e] = 2
    arg1[0x83] = 1
    arg1[0x7f] = 0x14
    *(arg1 + 0x1f1) = 0
    *(arg1 + 0x1f2) = 1
    arg1[0x7c].b = 0
    arg1[0x10] &= 0xffffff7f
    arg1[0x80].b = 1
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
