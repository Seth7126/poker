// ============================================================
// 函数名称: sub_4351a4
// 虚拟地址: 0x4351a4
// WARP GUID: 8889e2bc-e276-53bd-9b51-03bdeefa552c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_433a98, sub_4301c8
// [被调用的父级函数]: sub_434a1c, sub_4339c4
// ============================================================

void __convention("regparm")sub_4351a4(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x6c) != 0 || sub_4301c8(*(arg1 + 0x14)) s<= 0)
    if (*(arg1 + 0x6c) != 0 || sub_4301c8(*(arg1 + 0x14)) s<= 0)
        return 
    
    void* var_8_1 = arg1
    void (__convention("regparm")* var_c_1)(void* arg1, void* arg2) = sub_4351cc
    sub_433a98(arg1, nullptr)
}
