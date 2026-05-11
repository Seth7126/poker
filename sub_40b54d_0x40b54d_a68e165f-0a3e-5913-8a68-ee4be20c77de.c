// ============================================================
// 函数名称: sub_40b54d
// 虚拟地址: 0x40b54d
// WARP GUID: a68e165f-0a3e-5913-8a68-ee4be20c77de
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428
// [被调用的父级函数]: sub_40b4ec
// ============================================================

int32_t*sub_40b54d(int32_t* arg1 @ edi)
{
    // 第一条实际指令: char entry_ebx
    char entry_ebx
    void* esp
    
    if (entry_ebx != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = __return_addr
        void arg_10
        esp = &arg_10
    
    *esp
    *(esp + 4)
    *(esp + 8)
    *(esp + 0xc)
    *(esp + 0x10)
    return arg1
}
