// ============================================================
// 函数名称: sub_41b9bc
// 虚拟地址: 0x41b9bc
// WARP GUID: 98bd772a-192b-5b1c-ba81-1386e845b9f6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_41b99c, sub_4030a0, sub_41b97c, sub_403428
// [被调用的父级函数]: sub_44b7c0
// ============================================================

int32_t* __convention("regparm")sub_41b9bc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp = &var_8
    int32_t ecx
    
    if (arg2.b != 0)
        void var_18
        esp = &var_18
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_4030a0(ecx, 0)
    sub_41b97c()
    sub_41b99c()
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
