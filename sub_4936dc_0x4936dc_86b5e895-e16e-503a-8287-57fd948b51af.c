// ============================================================
// 函数名称: sub_4936dc
// 虚拟地址: 0x4936dc
// WARP GUID: 86b5e895-e16e-503a-8287-57fd948b51af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_415df8, sub_4318d0
// [被调用的父级函数]: sub_49292c
// ============================================================

void __convention("regparm")sub_4936dc(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2 == 0 || *(arg1 + 0x2c9) == 0 || *(arg1 + 0x2cf) == 0)
    if (arg2 == 0 || *(arg1 + 0x2c9) == 0 || *(arg1 + 0x2cf) == 0)
        *(arg1 + 0x2f4) = arg2
        return 
    
    *(arg1 + 0x2d0) = 0x10002
    int32_t var_18_1 = sub_4318d0(arg2)
    void dwParam2
    uint32_t eax_4 = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x841, *(arg1 + 0x2d0), &dwParam2)
    *(arg1 + 0x2ec) = eax_4
    
    if (eax_4 == 0)
        *(arg1 + 0x2f4) = arg2
        sub_415df8(arg2, arg1)
    else
        *(arg1 + 0x2f4) = 0
}
