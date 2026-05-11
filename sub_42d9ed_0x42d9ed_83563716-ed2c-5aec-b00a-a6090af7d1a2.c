// ============================================================
// 函数名称: sub_42d9ed
// 虚拟地址: 0x42d9ed
// WARP GUID: 83563716-ed2c-5aec-b00a-a6090af7d1a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428
// [被调用的父级函数]: sub_42d8f4
// ============================================================

int32_t*sub_42d9ed(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t* entry_result
    int32_t* entry_result
    void* esp
    
    if (*(arg1 - 1) != 0)
        sub_403428(entry_result)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = __return_addr
        void arg_10
        esp = &arg_10
    
    *esp
    *(esp + 4)
    *(esp + 0xc)
    *(esp + 0x10)
    return entry_result
}
