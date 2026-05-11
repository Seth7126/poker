// ============================================================
// 函数名称: sub_4b3b74
// 虚拟地址: 0x4b3b74
// WARP GUID: d360d53b-c4eb-5256-8228-70c5c5fb2b00
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0
// [被调用的父级函数]: sub_4b3bf6
// ============================================================

int32_tsub_4b3b74()
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = 0xb
    void* esi = &data_532d10
    int32_t result
    char i
    
    do
        result = sub_4030d0(*esi)
        esi += 4
        i = ebx.b
        ebx.b -= 1
    while (i != 1)
    return result
}
