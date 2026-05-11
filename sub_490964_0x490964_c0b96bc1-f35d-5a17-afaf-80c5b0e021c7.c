// ============================================================
// 函数名称: sub_490964
// 虚拟地址: 0x490964
// WARP GUID: c0b96bc1-f35d-5a17-afaf-80c5b0e021c7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428
// [被调用的父级函数]: sub_4908c8
// ============================================================

int32_t*sub_490964(int32_t* arg1 @ ebp, int32_t* arg2 @ edi)
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
    *(esp + 8)
    *arg1
    return arg2
}
