// ============================================================
// 函数名称: sub_40ff48
// 虚拟地址: 0x40ff48
// WARP GUID: 8b12fdb8-d691-5041-8842-71c9adadf30a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0
// [被调用的父级函数]: sub_40ff80
// ============================================================

void __fastcallsub_40ff48(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp = &var_4
    
    if (arg2.b != 0)
        void var_14
        esp = &var_14
        arg3 = sub_4033d0(arg1, arg2)
    
    arg3[1] = arg1
    arg3[2] = arg5
    arg3[3] = arg4
    
    if (arg2.b != 0)
        sub_403428(arg3)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
}
