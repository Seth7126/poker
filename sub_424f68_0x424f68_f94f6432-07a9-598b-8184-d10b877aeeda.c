// ============================================================
// 函数名称: sub_424f68
// 虚拟地址: 0x424f68
// WARP GUID: f94f6432-07a9-598b-8184-d10b877aeeda
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_42d8f4
// [被调用的父级函数]: sub_42508c
// ============================================================

int32_t* __convention("regparm")sub_424f68(int32_t* arg1, int32_t arg2)
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
    
    if (*(data_530a80 + 8) != 0 && *data_530a60 == 2)
        arg1[0x55].b = 0
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
