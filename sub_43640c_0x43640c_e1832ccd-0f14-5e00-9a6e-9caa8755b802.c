// ============================================================
// 函数名称: sub_43640c
// 虚拟地址: 0x43640c
// WARP GUID: e1832ccd-0f14-5e00-9a6e-9caa8755b802
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410580
// [被调用的父级函数]: sub_43647c
// ============================================================

int32_t __convention("regparm")sub_43640c(void* arg1)
{
    // 第一条实际指令: void* edx_2 = *(arg1 + 0x4c)
    void* edx_2 = *(arg1 + 0x4c)
    
    if (edx_2 == 0)
        return 0xffffffff
    
    return sub_410580(*(edx_2 + 0x24), arg1)
}
