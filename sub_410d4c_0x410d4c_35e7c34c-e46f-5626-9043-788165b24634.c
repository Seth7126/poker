// ============================================================
// 函数名称: sub_410d4c
// 虚拟地址: 0x410d4c
// WARP GUID: 35e7c34c-e46f-5626-9043-788165b24634
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410580
// [被调用的父级函数]: sub_410e74, sub_410d8c
// ============================================================

int32_t __convention("regparm")sub_410d4c(void* arg1)
{
    // 第一条实际指令: void* edx_2 = *(arg1 + 4)
    void* edx_2 = *(arg1 + 4)
    
    if (edx_2 == 0)
        return 0xffffffff
    
    return sub_410580(*(edx_2 + 8), arg1)
}
