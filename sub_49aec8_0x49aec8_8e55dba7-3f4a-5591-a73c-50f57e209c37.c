// ============================================================
// 函数名称: sub_49aec8
// 虚拟地址: 0x49aec8
// WARP GUID: 8e55dba7-3f4a-5591-a73c-50f57e209c37
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0
// [被调用的父级函数]: sub_49b963
// ============================================================

void __fastcallsub_49aec8(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax
    int32_t* eax
    void* esp
    
    if (arg2.b != 0)
        void var_10
        esp = &var_10
        eax = sub_4033d0(arg1, arg2)
    
    if (arg2.b != 0)
        sub_403428(eax)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
}
