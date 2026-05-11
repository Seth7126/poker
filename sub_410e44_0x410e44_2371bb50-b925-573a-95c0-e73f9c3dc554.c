// ============================================================
// 函数名称: sub_410e44
// 虚拟地址: 0x410e44
// WARP GUID: 2371bb50-b925-573a-95c0-e73f9c3dc554
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4113dc, sub_411380
// [被调用的父级函数]: sub_4ae408, sub_410cc0, sub_4adcfc, sub_410cf8
// ============================================================

int32_t** __convention("regparm")sub_410e44(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t** result = arg1[1]
    int32_t** result = arg1[1]
    
    if (arg2 != result)
        if (result != 0)
            result = sub_4113dc(result)
        
        if (arg2 != 0)
            return sub_411380(arg2, arg1)
    
    return result
}
