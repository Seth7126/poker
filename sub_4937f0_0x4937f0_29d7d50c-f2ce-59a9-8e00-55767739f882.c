// ============================================================
// 函数名称: sub_4937f0
// 虚拟地址: 0x4937f0
// WARP GUID: 29d7d50c-f2ce-59a9-8e00-55767739f882
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_49292c
// ============================================================

void __convention("regparm")sub_4937f0(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x2c9) == 0 || *(arg1 + 0x2cf) == 0)
    if (*(arg1 + 0x2c9) == 0 || *(arg1 + 0x2cf) == 0)
        return 
    
    *(arg1 + 0x2d0) = 0x40000
    void var_20
    void* dwParam2 = &var_20
    uint32_t dwParam1 = 0x40000
    uint32_t uMsg = 0x843
    *(arg1 + 0x2ec) = mciSendCommandA(zx.d(*(arg1 + 0x2da)), uMsg, dwParam1, dwParam2)
    void var_1c
    __builtin_memcpy(arg2, &var_1c, 0x10)
}
