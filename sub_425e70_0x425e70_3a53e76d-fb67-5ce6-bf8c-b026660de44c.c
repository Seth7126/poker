// ============================================================
// 函数名称: sub_425e70
// 虚拟地址: 0x425e70
// WARP GUID: 3a53e76d-fb67-5ce6-bf8c-b026660de44c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos, SendMessageA
// [内部子函数调用]: sub_4030d0, sub_4318d0, sub_42eac0, sub_425aac, sub_425cb8, sub_425b2c
// [被调用的父级函数]: sub_4b48c0
// ============================================================

int32_t __convention("regparm")sub_425e70(int32_t* arg1)
{
    // 第一条实际指令: arg1[0xe]
    arg1[0xe]
    int32_t cy = arg1[0xf]
    int32_t cx = sub_42eac0(arg1)
    SetWindowPos(sub_4318d0(arg1), nullptr, arg1[0xc], arg1[0xd], cx, cy, 0x14)
    
    if (arg1[0x83] != 0)
        SendMessageA(sub_4318d0(arg1), 0x192, 1, &arg1[0x83])
    
    int32_t result = sub_425aac(arg1)
    
    if (arg1[0x84] != 0)
        (*(*arg1[0x7c] + 8))()
        sub_425cb8(arg1, arg1[0x85])
        sub_425b2c(arg1, arg1[0x86])
        sub_4030d0(arg1[0x84])
        result = 0
        arg1[0x84] = 0
    
    return result
}
