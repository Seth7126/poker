// ============================================================
// 函数名称: sub_40888c
// 虚拟地址: 0x40888c
// WARP GUID: f0a97c1c-f10b-5fe6-a338-a23c27eda754
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40276c
// [被调用的父级函数]: sub_4088b8
// ============================================================

int32_tsub_40888c()
{
    // 第一条实际指令: int32_t* eax = data_52e140
    int32_t* eax = data_52e140
    data_52e140 = *eax
    *data_52ff68 = eax[1]
    int32_t ebx = eax[2]
    sub_40276c(eax)
    return ebx()
}
