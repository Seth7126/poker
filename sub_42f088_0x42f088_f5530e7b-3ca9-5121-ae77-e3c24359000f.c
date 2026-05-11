// ============================================================
// 函数名称: sub_42f088
// 虚拟地址: 0x42f088
// WARP GUID: f5530e7b-3ca9-5121-ae77-e3c24359000f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PtInRect
// [内部子函数调用]: sub_42c754, sub_407814, sub_40fa94
// [被调用的父级函数]: sub_42f140
// ============================================================

BOOL __convention("regparm")sub_42f088(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    sub_40fa94(**(arg2 - 4) - arg1[0xc], *(*(arg2 - 4) + 4) - arg1[0xd], &var_c)
    *(arg2 - 0xc) = var_c
    int32_t var_8
    *(arg2 - 8) = var_8
    (*(*arg1 + 0x40))(*(arg2 - 0xc), *(arg2 - 8))
    RECT lprc
    BOOL result
    
    if (PtInRect(&lprc) == 0)
        result = 0
    else if ((arg1[8].b & 0x10) != 0 && (*(arg1 + 0x47) != 0 || (*(arg1 + 0x41) & 4) == 0))
        result.b = 1
    else if (*(arg1 + 0x47) == 0)
        result = 0
    else
        if ((*(*arg1 + 0x4c))() != 0 || *(arg2 - 0xd) != 0)
            sub_42c754(arg1, sub_407814(arg2 - 0xc))
        
        result = 0
    
    if (result.b != 0)
        *(arg2 - 0x14) = arg1
    
    return result
}
