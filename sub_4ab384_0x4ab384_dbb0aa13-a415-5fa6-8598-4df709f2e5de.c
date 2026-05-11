// ============================================================
// 函数名称: sub_4ab384
// 虚拟地址: 0x4ab384
// WARP GUID: dbb0aa13-a415-5fa6-8598-4df709f2e5de
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4abda8, sub_4abaa4
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4ab384(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x80) != 0)
    if (*(arg1 + 0x80) != 0)
        return 
    
    int32_t edx
    edx.b = 1
    int32_t* eax = sub_4abaa4(sub_4a9d19+0xab, edx, arg1)
    *(arg1 + 0x80) = eax
    eax[4] = *(arg1 + 0x78)
    sub_4abda8(eax, *(*(arg1 + 0x68) + 0xc), *(arg1 + 0x78))
}
