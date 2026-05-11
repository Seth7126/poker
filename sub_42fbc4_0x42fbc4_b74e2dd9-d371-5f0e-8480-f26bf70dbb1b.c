// ============================================================
// 函数名称: sub_42fbc4
// 虚拟地址: 0x42fbc4
// WARP GUID: b74e2dd9-d371-5f0e-8480-f26bf70dbb1b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FillRect
// [内部子函数调用]: sub_4190f0
// [被调用的父级函数]: sub_445168
// ============================================================

int32_t __convention("regparm")sub_42fbc4(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg1[0x7a].b != 0)
        result = *(arg2 + 4)
    
    if (arg1[0x7a].b == 0 || result == *(arg2 + 8))
        (*(*arg1 + 0x40))(sub_4190f0(arg1[0x4c]))
        RECT lprc
        result = FillRect(*(arg2 + 4), &lprc)
    
    *(arg2 + 0xc) = 1
    return result
}
