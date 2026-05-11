// ============================================================
// 函数名称: sub_4937a4
// 虚拟地址: 0x4937a4
// WARP GUID: a8005e50-66ba-5b0f-8f6d-3dee6cc1e55c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_493764
// ============================================================

void __convention("regparm")sub_4937a4(uint32_t arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x2c9) == 0 || *(arg1 + 0x2cf) == 0)
    if (*(arg1 + 0x2c9) == 0 || *(arg1 + 0x2cf) == 0)
        return 
    
    *(arg1 + 0x2d0) = 0x10002
    int32_t var_14_1 = 0
    void dwParam2
    *(arg1 + 0x2ec) = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x841, 0x10002, &dwParam2)
}
