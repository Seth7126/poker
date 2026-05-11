// ============================================================
// 函数名称: sub_423898
// 虚拟地址: 0x423898
// WARP GUID: 0fc5dc3f-922c-5970-8b9f-27f3425f439e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_42afdc, sub_42affc, sub_432928, sub_403428
// [被调用的父级函数]: sub_4807f4, sub_44c778
// ============================================================

int32_t* __convention("regparm")sub_423898(int32_t* arg1, int32_t arg2)
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
    
    sub_432928(arg1, 0)
    arg1[0x10] |= 0x840
    sub_42afdc(arg1, 0x41)
    sub_42affc(arg1, 0x11)
    *(arg1 + 0x12d) = 1
    arg1[0x4c].b = 1
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
