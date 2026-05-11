// ============================================================
// 函数名称: sub_4c2f1c
// 虚拟地址: 0x4c2f1c
// WARP GUID: c74905c6-788d-5668-aee3-5fb940f3dfbb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc6dc, sub_512d1c, sub_4c0924
// [被调用的父级函数]: sub_4c51e4, sub_4e6659, sub_509024, sub_50b624, sub_4c96bc, sub_5223e8, sub_520efc, sub_4e649b, sub_4c5eb0, sub_50928c, sub_507e90, sub_518820, sub_509d44, sub_507d3f, sub_508998, sub_4c2f80
// ============================================================

void* __convention("regparm")sub_4c2f1c(int32_t arg1)
{
    // 第一条实际指令: if (sub_4cc6dc(arg1) s< *(*data_5301f4 + 0x21108))
    if (sub_4cc6dc(arg1) s< *(*data_5301f4 + 0x21108))
    label_4c2f5d:
        
        if (*(*data_5301f4 + 0x10148) s> 1 || *(*data_5301f4 + 0x4584) s> 0)
            void* result
            result.b = 1
            return result
    else if (sub_4c0924() != 0 && sub_512d1c(*data_530454, arg1, 0) != 0)
        goto label_4c2f5d
    
    return 0
}
