// ============================================================
// 函数名称: sub_425af0
// 虚拟地址: 0x425af0
// WARP GUID: 4f2e0994-661b-527b-b117-c5e3dda9fa39
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: sub_425488, sub_4b4e2c, sub_4b4d28, sub_425f10, sub_42563c, sub_4b4cf3, sub_425b2c
// ============================================================

LRESULT __convention("regparm")sub_425af0(int32_t* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x206) == 0)
    if (*(arg1 + 0x206) == 0)
        return SendMessageA(sub_4318d0(arg1), 0x188, 0, 0)
    
    return SendMessageA(sub_4318d0(arg1), 0x19f, 0, 0)
}
