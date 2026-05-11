// ============================================================
// 函数名称: sub_4b8b97
// 虚拟地址: 0x4b8b97
// WARP GUID: 79de5c17-4e03-5b9a-87f6-caa789329cfa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428
// [被调用的父级函数]: sub_4b8ae4
// ============================================================

int32_t*sub_4b8b97(int32_t* arg1 @ esi)
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
    return arg1
}
