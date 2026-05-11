// ============================================================
// 函数名称: sub_425b2c
// 虚拟地址: 0x425b2c
// WARP GUID: aad1b917-2a7c-5a6d-923e-45c078e76cf0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_425af0, sub_4318d0
// [被调用的父级函数]: sub_425488, sub_425e67, sub_425e70, sub_42563c, sub_4b4e78
// ============================================================

LRESULT __convention("regparm")sub_425b2c(int32_t* arg1, WPARAM arg2)
{
    // 第一条实际指令: LRESULT result = sub_425af0(arg1)
    LRESULT result = sub_425af0(arg1)
    
    if (arg2 == result)
        return result
    
    if (*(arg1 + 0x206) == 0)
        return SendMessageA(sub_4318d0(arg1), 0x186, arg2, 0)
    
    return SendMessageA(sub_4318d0(arg1), 0x19e, arg2, 0)
}
