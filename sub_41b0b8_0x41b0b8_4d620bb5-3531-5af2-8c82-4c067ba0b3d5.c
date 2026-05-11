// ============================================================
// 函数名称: sub_41b0b8
// 虚拟地址: 0x41b0b8
// WARP GUID: 4d620bb5-3531-5af2-8c82-4c067ba0b3d5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0
// [被调用的父级函数]: sub_41c054, sub_4535a8, sub_41f53c, sub_41dae0
// ============================================================

int32_t* __convention("regparm")sub_41b0b8(int32_t* arg1, int32_t arg2)
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
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
