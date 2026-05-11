// ============================================================
// 函数名称: sub_431850
// 虚拟地址: 0x431850
// WARP GUID: 98ee7aae-fb34-581c-9635-01e70e5f665b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetFocus
// [内部子函数调用]: sub_4449d8, sub_440ee0, sub_440f08, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_431850(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax_1 = sub_440ee0(arg1)
    int32_t* eax_1 = sub_440ee0(arg1)
    
    if (eax_1 != 0)
        return sub_4449d8(eax_1)
    
    if (arg1[0x59] == 0)
        return sub_440f08(arg1)
    
    return SetFocus(sub_4318d0(arg1))
}
