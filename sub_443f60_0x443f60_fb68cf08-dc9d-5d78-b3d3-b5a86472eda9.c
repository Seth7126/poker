// ============================================================
// 函数名称: sub_443f60
// 虚拟地址: 0x443f60
// WARP GUID: fb68cf08-dc9d-5d78-b3d3-b5a86472eda9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_443f54
// [被调用的父级函数]: 无
// ============================================================

void* const __convention("regparm")sub_443f60(void* arg1, char arg2)
{
    // 第一条实际指令: void* const result = sub_443f54(arg1)
    void* const result = sub_443f54(arg1)
    
    if (arg2 != result.b)
        result = nullptr
        *(arg1 + 0x244) = 0
        
        if (arg2 != 0)
            result = *(data_5317dc + 0x34)
            *(arg1 + 0x244) = result
    
    return result
}
