// ============================================================
// 函数名称: sub_49598c
// 虚拟地址: 0x49598c
// WARP GUID: a5cf87e8-a8f3-530c-ae25-2f52d10d584a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: getservbyname, ntohs
// [内部子函数调用]: sub_40423c
// [被调用的父级函数]: sub_4959c0
// ============================================================

uint32_t __fastcallsub_49598c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax_2 = getservbyname(sub_40423c(arg2), 0x4959bc)
    void* eax_2 = getservbyname(sub_40423c(arg2), 0x4959bc)
    
    if (eax_2 == 0)
        return 0
    
    eax_2.w = *(eax_2 + 8)
    return zx.d(ntohs(eax_2))
}
