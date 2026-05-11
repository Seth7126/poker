// ============================================================
// 函数名称: sub_439880
// 虚拟地址: 0x439880
// WARP GUID: 9520bf07-d96a-5de3-9833-a6e946ca24ad
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_436968, sub_403260
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_439880(void* arg1)
{
    // 第一条实际指令: if (sub_436968(arg1) != 0)
    if (sub_436968(arg1) != 0)
        int32_t* result = *(arg1 + 0x10)
        sub_403260(result, &data_436278)
        result.w = result[0x1a].w
        
        if (result.w == *(*(arg1 + 0x18) + 0x54))
            result.b = 1
            return result
    
    return 0
}
