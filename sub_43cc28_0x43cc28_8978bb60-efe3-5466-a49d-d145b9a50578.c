// ============================================================
// 函数名称: sub_43cc28
// 虚拟地址: 0x43cc28
// WARP GUID: 8978bb60-efe3-5466-a49d-d145b9a50578
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_439630
// [被调用的父级函数]: sub_43d352, sub_43d360, sub_43d224
// ============================================================

int32_t* __convention("regparm")sub_43cc28(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x28)
    void* edx = *(arg1 + 0x28)
    return sub_439630(sub_43cc00, *(edx + 0x5c), edx)
}
