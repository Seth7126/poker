// ============================================================
// 函数名称: sub_403d58
// 虚拟地址: 0x403d58
// WARP GUID: 37d0d535-789c-5260-afc1-30f17f1263c4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4027e0
// [被调用的父级函数]: sub_49ffc4
// ============================================================

int32_tsub_403d58()
{
    // 第一条实际指令: if (data_531018 != 0)
    if (data_531018 != 0)
        return data_531018(__return_addr)
    
    int32_t eax
    eax.b = 0x15
    noreturn sub_4027e0(eax) __tailcall
}
