// ============================================================
// 函数名称: sub_43bc80
// 虚拟地址: 0x43bc80
// WARP GUID: 8760c20f-639b-5ba8-a6bb-2a4592de51fb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410580
// [被调用的父级函数]: sub_43b908, sub_43bcb4, sub_43b9cc
// ============================================================

int32_t __convention("regparm")sub_43bc80(void* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x50)
    void* esi = *(arg1 + 0x50)
    
    if (esi == 0)
        return 0xffffffff
    
    int32_t edx
    return sub_410580(esi, edx)
}
