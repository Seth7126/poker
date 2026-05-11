// ============================================================
// 函数名称: sub_4ad868
// 虚拟地址: 0x4ad868
// WARP GUID: 2b303f87-ebf3-577a-9c50-4fc778f1377b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4ad4f8, sub_4033d0
// [被调用的父级函数]: sub_4ade38
// ============================================================

int32_t* __convention("regparm")sub_4ad868(int32_t* arg1, int32_t arg2)
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
    
    sub_4ad4f8(arg1, 0)
    arg1[0xa].b = 2
    
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
