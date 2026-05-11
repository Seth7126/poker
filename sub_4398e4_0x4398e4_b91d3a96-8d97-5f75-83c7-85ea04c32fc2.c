// ============================================================
// 函数名称: sub_4398e4
// 虚拟地址: 0x4398e4
// WARP GUID: b91d3a96-8d97-5f75-83c7-85ea04c32fc2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4165c4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4398e4(void* arg1)
{
    // 第一条实际指令: if (sub_4165c4() == 0 || *(*(arg1 + 0x18) + 0x80) != *(*(arg1 + 0x10) + 0x30))
    if (sub_4165c4() == 0 || *(*(arg1 + 0x18) + 0x80) != *(*(arg1 + 0x10) + 0x30))
        return 0
    
    int32_t result
    result.b = 1
    return result
}
