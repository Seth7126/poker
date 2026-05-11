// ============================================================
// 函数名称: sub_428ff4
// 虚拟地址: 0x428ff4
// WARP GUID: 4a36783a-e20b-536f-831c-022146e7eac0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0
// [被调用的父级函数]: sub_429cf8, sub_429100
// ============================================================

void __convention("regparm")sub_428ff4(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* esp
    void* esp
    
    if (arg2.b != 0)
        void var_10
        esp = &var_10
        arg1 = sub_4033d0(arg3, arg2)
    
    arg1[0xe] = arg3
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
}
