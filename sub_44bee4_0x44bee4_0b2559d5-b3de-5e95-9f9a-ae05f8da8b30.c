// ============================================================
// 函数名称: sub_44bee4
// 虚拟地址: 0x44bee4
// WARP GUID: 0b2559d5-b3de-5e95-9f9a-ae05f8da8b30
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_430f7c, sub_42ee80
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_44bee4(void* arg1)
{
    // 第一条实际指令: if (*data_53040c != 0 && *(arg1 + 0x204) == 1)
    if (*data_53040c != 0 && *(arg1 + 0x204) == 1)
        sub_42ee80(arg1)
    
    return sub_430f7c(arg1)
}
