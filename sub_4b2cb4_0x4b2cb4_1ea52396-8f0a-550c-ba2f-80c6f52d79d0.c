// ============================================================
// 函数名称: sub_4b2cb4
// 虚拟地址: 0x4b2cb4
// WARP GUID: 1ea52396-8f0a-550c-ba2f-80c6f52d79d0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_431bcc, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b2cb4(LRESULT arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if (arg2 == ebx[0x7d])
        return 
    
    ebx[0x7d] = arg2
    
    if (sub_431bcc(ebx).b != 0)
        SendMessageA(sub_4318d0(ebx), 0x417, 0, ebx[0x7d])
}
