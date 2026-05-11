// ============================================================
// 函数名称: sub_40be00
// 虚拟地址: 0x40be00
// WARP GUID: 9f7de928-e5a5-5a91-9d00-f6e75f0f553e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40be28, sub_404078
// [被调用的父级函数]: sub_40a218
// ============================================================

int32_t __convention("regparm")sub_40be00(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    
    if (esi s> sub_404078(arg1))
        esi = sub_404078(arg1)
    
    return sub_40be28(arg1, esi)
}
