// ============================================================
// 函数名称: sub_423e50
// 虚拟地址: 0x423e50
// WARP GUID: 53cf4c47-9497-5f95-a556-ad4ea4d4165e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_42d8f4, sub_42afdc, sub_42b928, sub_424560, sub_431afc, sub_42affc, sub_403428
// [被调用的父级函数]: sub_424b94
// ============================================================

int32_t* __convention("regparm")sub_423e50(int32_t* arg1, int32_t arg2)
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
    
    if (*data_53040c == 0)
        arg1[0x10] = 0x2b8
    else
        arg1[0x10] = 0x2a8
    
    sub_42afdc(arg1, 0x79)
    sub_42affc(arg1, 0x19)
    sub_431afc(arg1, 1)
    sub_42b928(arg1, 0)
    arg1[0x7d].b = 1
    *(arg1 + 0x1f7) = 1
    arg1[0x7e].b = 1
    *(arg1 + 0x1f9) = 1
    sub_424560(arg1)
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
