// ============================================================
// 函数名称: sub_43b94c
// 虚拟地址: 0x43b94c
// WARP GUID: 00c0abe2-5ef9-5649-b4cf-21370f3f8b63
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43bff4, sub_43c1b4, sub_439ef4, sub_43bc10, sub_43bf0c
// ============================================================

int32_t __convention("regparm")sub_43b94c(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x38)
    void* edx = *(arg1 + 0x38)
    
    if (edx == 0)
        return 0
    
    return *(edx + 0x10)
}
