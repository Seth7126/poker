// ============================================================
// 函数名称: sub_43b998
// 虚拟地址: 0x43b998
// WARP GUID: 7eb4cb75-6ac3-5083-a2bc-d76f4b577fd9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4399cc, sub_439e78, sub_43bf0c
// ============================================================

void __convention("regparm")sub_43b998(int32_t* arg1, int16_t arg2)
{
    // 第一条实际指令: if (arg2 == arg1[0x15].w)
    if (arg2 == arg1[0x15].w)
        return 
    
    arg1[0x15].w = arg2
    arg2.b = 1
    (*(*arg1 + 0x38))()
}
