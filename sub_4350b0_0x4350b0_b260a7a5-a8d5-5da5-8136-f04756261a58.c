// ============================================================
// 函数名称: sub_4350b0
// 虚拟地址: 0x4350b0
// WARP GUID: b260a7a5-a8d5-5da5-8136-f04756261a58
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_433d44
// ============================================================

void __convention("regparm")sub_4350b0(void* arg1, void* arg2)
{
    // 第一条实际指令: if (arg2 == 0 || arg2 == *(arg1 + 0x64))
    if (arg2 == 0 || arg2 == *(arg1 + 0x64))
        return 
    
    void* ecx_1
    ecx_1.b = *(*(arg2 + 0x14) + 0x10)
    
    if (ecx_1.b == *(arg1 + 0x48))
        *(arg2 + 0x20) += *(arg1 + 0x4c)
}
