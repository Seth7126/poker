// ============================================================
// 函数名称: sub_410cc0
// 虚拟地址: 0x410cc0
// WARP GUID: 440e51a4-19c1-5733-ada7-1a85b081e616
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410e44, sub_403428, sub_4033d0
// [被调用的父级函数]: sub_4ae8f4, sub_4acd0c, sub_4a5c8c, sub_4a3d28
// ============================================================

int32_t* __convention("regparm")sub_410cc0(int32_t* arg1, int32_t arg2, int32_t* arg3)
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
        arg1 = sub_4033d0(arg3, arg2)
    
    sub_410e44(arg1, arg3)
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
