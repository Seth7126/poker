// ============================================================
// 函数名称: sub_425cb8
// 虚拟地址: 0x425cb8
// WARP GUID: 3167f42b-c6a7-526c-a862-13fc3f6bb37a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_425c9c, sub_4318d0
// [被调用的父级函数]: sub_425e67, sub_425e70
// ============================================================

LRESULT __convention("regparm")sub_425cb8(int32_t* arg1, WPARAM arg2)
{
    // 第一条实际指令: LRESULT result = sub_425c9c(arg1)
    LRESULT result = sub_425c9c(arg1)
    
    if (arg2 == result)
        return result
    
    return SendMessageA(sub_4318d0(arg1), 0x197, arg2, 0)
}
