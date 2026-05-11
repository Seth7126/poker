// ============================================================
// 函数名称: sub_412a7c
// 虚拟地址: 0x412a7c
// WARP GUID: 417dafac-0055-5f30-8068-7665c42376d7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408f6c
// [被调用的父级函数]: 无
// ============================================================

uint32_t __convention("regparm")sub_412a7c(void* arg1)
{
    // 第一条实际指令: uint32_t ecx
    uint32_t ecx
    uint8_t* edx
    uint32_t result = sub_408f6c(*(arg1 + 4), edx, ecx)
    
    if (result != 0xffffffff)
        return result
    
    return 0
}
