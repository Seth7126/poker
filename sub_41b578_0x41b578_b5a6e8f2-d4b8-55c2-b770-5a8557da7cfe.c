// ============================================================
// 函数名称: sub_41b578
// 虚拟地址: 0x41b578
// WARP GUID: b5a6e8f2-d4b8-55c2-b770-5a8557da7cfe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428
// [被调用的父级函数]: sub_41b3fc, sub_41b494
// ============================================================

int32_t*sub_41b578(int32_t* arg1 @ ebp, int32_t* arg2 @ esi)
{
    // 第一条实际指令: char entry_ebx
    char entry_ebx
    void* esp
    
    if (entry_ebx != 0)
        sub_403428(arg2)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = __return_addr
        void arg_10
        esp = &arg_10
    
    *esp
    *(esp + 4)
    *arg1
    return arg2
}
