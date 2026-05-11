// ============================================================
// 函数名称: sub_4ab0a8
// 虚拟地址: 0x4ab0a8
// WARP GUID: 527f61bc-6e23-5fd5-bd85-a7aa78e89127
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a8ef8, sub_40cc98
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4ab0a8(void* arg1)
{
    // 第一条实际指令: sub_40cc98(arg1 + 0x80)
    sub_40cc98(arg1 + 0x80)
    
    if (*(arg1 + 0x84) == 0)
        sub_40cc98(arg1 + 0x78)
    
    return sub_4a8ef8(arg1)
}
