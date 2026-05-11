// ============================================================
// 函数名称: sub_409128
// 虚拟地址: 0x409128
// WARP GUID: af531984-8b4f-5a7c-a759-24c7a2678f80
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FindClose
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b498a, sub_4090b4
// ============================================================

BOOL __convention("regparm")sub_409128(void* arg1)
{
    // 第一条实际指令: BOOL hFindFile = *(arg1 + 0x14)
    BOOL hFindFile = *(arg1 + 0x14)
    
    if (hFindFile != 0xffffffff)
        hFindFile = FindClose(hFindFile)
        *(arg1 + 0x14) = 0xffffffff
    
    return hFindFile
}
