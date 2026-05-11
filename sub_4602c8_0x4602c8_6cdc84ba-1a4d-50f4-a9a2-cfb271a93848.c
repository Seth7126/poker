// ============================================================
// 函数名称: sub_4602c8
// 虚拟地址: 0x4602c8
// WARP GUID: 6cdc84ba-1a4d-50f4-a9a2-cfb271a93848
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4610b0, sub_454bbc, sub_4611e4, sub_454988, sub_461060, sub_454d3c
// ============================================================

int32_t __convention("regparm")sub_4602c8(void* arg1)
{
    // 第一条实际指令: int32_t i = 1
    for (int32_t i = 1; i s> 0; i -= 1)
        (*(*(arg1 + 4) + 0x24))()
    
    int32_t result = 0xc8
    
    if (*(arg1 + 0xc) == 0)
        result = 0x64
    
    *(arg1 + 0x10) = result
    return result
}
