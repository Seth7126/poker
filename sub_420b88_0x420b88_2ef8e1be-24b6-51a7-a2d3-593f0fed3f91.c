// ============================================================
// 函数名称: sub_420b88
// 虚拟地址: 0x420b88
// WARP GUID: 2ef8e1be-24b6-51a7-a2d3-593f0fed3f91
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_51260b, sub_4b77e0, sub_4babf8, sub_512690
// ============================================================

int32_t __stdcallsub_420b88(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __pure
{
    // 第一条实际指令: int32_t result
    int32_t result
    int32_t var_8
    
    if (arg4 != arg2)
        if (arg4 s<= arg2)
            result = arg1
            var_8 = arg2
        else
            result = arg3
            var_8 = arg4
    else if (arg3 u<= arg1)
        result = arg1
        var_8 = arg2
    else
        result = arg3
        var_8 = arg4
    return result
}
