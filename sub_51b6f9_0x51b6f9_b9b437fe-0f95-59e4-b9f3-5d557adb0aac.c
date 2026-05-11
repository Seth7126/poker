// ============================================================
// 函数名称: sub_51b6f9
// 虚拟地址: 0x51b6f9
// WARP GUID: b9b437fe-0f95-59e4-b9f3-5d557adb0aac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428
// [被调用的父级函数]: sub_51b687
// ============================================================

int32_tsub_51b6f9(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t i = 1
    for (int32_t i = 1; i != 9; i += 1)
        *(*(arg1 - 4) + (i << 2) + 0xac0) = 0
    
    void* esp
    
    if (*(arg1 - 5) != 0)
        sub_403428(*(arg1 - 4))
        TEB* fsbase
        fsbase->NtTib.ExceptionList = __return_addr
        void arg_10
        esp = &arg_10
    
    *(esp + 4)
    *(esp + 8)
    return *(arg1 - 4)
}
