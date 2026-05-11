// ============================================================
// 函数名称: sub_403b30
// 虚拟地址: 0x403b30
// WARP GUID: 17ae4502-b7d8-58db-b292-3e6dc162fa90
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ad0, sub_403a28
// [被调用的父级函数]: sub_406cd4
// ============================================================

int32_t* __convention("regparm")sub_403b30(int32_t arg1, void* arg2)
{
    // 第一条实际指令: data_5314ac = arg1
    data_5314ac = arg1
    data_5314b0 = 0
    data_5314b4 = arg2
    data_531020 = *(arg2 + 4)
    void* ebp
    sub_403a28(ebp)
    data_531028 = 0
    return sub_403ad0()
}
