// ============================================================
// 函数名称: sub_441bc0
// 虚拟地址: 0x441bc0
// WARP GUID: aa5255cc-566c-52aa-9c3d-73abcb513abb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_420d20, sub_42eac0, sub_441dc4, sub_4318d0
// [被调用的父级函数]: sub_4445ed
// ============================================================

void* __convention("regparm")sub_441bc0(int32_t* arg1)
{
    // 第一条实际指令: sub_42eac0(arg1)
    sub_42eac0(arg1)
    
    if (*(data_530a80 + 9) == 0)
        sub_420d20(sub_4318d0(arg1))
    
    return sub_441dc4(arg1)
}
