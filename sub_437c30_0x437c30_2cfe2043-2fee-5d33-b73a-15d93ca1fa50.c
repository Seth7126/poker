// ============================================================
// 函数名称: sub_437c30
// 虚拟地址: 0x437c30
// WARP GUID: 2cfe2043-2fee-5d33-b73a-15d93ca1fa50
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8
// [被调用的父级函数]: sub_436724, sub_43c1e8, sub_43d360
// ============================================================

void __convention("regparm")sub_437c30(void* arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 + 4) = arg1
    *(arg2 + 4) = arg1
    int32_t* ecx = *(arg1 + 0x40)
    
    if (ecx != 0)
        sub_4103c8(ecx, arg2)
}
